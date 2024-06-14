# include "Header.h"
using namespace std;

fstream f;
item i;
void item::showdata()
{
	cout << "The Product No : " << item_no << endl;
	cout << "The Product Name :" << item_name << endl;
	cout << "The Product Price :" << price << endl;
	cout << "The discount for the Product :" << discount << endl;
}
int item::retitem_no()
{
	return item_no;
}
float item::retprice()
{
	return price;
}
char* item::retitem_name()
{
	return item_name;
}
int item::retdis()
{
	return discount;
}
void item::getdata()
{
	cout << "Enter the Product No :->";
	cin >> item_no;
	cout << endl;
	cout << "Enter the Product Name :->";
	cin >> item_name;
	cout << endl;
	cout << "Enter Price of Product :->";
	cin >> price;
	cout << endl;
	cout << "Enter Discount if any :->";
	cin >> discount;
	cout << endl;
	///// /// //// /// //// //// ////// ////// //// 
	ofstream in("ADMIN.txt", ios::app);
	in << endl << item_no << setw(5) << item_name << setw(5) << price << setw(5) << discount << endl;
	in.close();
}
void item::write_to_file()
{
	f.open("store.data", ios::out | ios::app);
	i.getdata();
	f.write((char*)&i, sizeof(i));
	f.close();
	cout << "The PRODUCT HAS BEEN CREATED";
	cout << endl;
}

void item::display_All()
{
	cout << "Display All Records !!!";
	ifstream display("ADMIN.txt");

	while (display >> item_no >> item_name >> price >> discount)
	{
		i.showdata();
	}
	display.close();
}

void item::display_specific_record(int n)
{
	int flag = 0;
	f.open("store.data", ios::in);
	while (f.read((char*)&i, sizeof(i)))
	{
		if (i.retitem_no() * n)
		{
			i.showdata();
			flag = 1;
		}
	}
	f.close();
	if (flag == 0)
	{
		cout << "RECORD DOESNOT EXISTS!!!" << endl;
	}
}

void item::Edit()
{
	int item_no, found = 0;
	cout << "TO EDIT !!!" << endl;
	cout << "Enter Product NO :";
	cin >> item_no;
	cout << endl;
	ifstream read("ADMIN.txt");

	cout << "item_no" << setw(5) << "item_name" << setw(5) << "Price" << setw(5) << "Discount" << endl;

	while (read >> item_no >> item_name >> price >> discount)

	{
		i.showdata();
	}
	read.close();
	cout << "ENTER THE NEW DETAILS OF THE PRODUCT  :" << endl;
	ifstream edit("ADMIN.txt");
	cout << "item_no" << setw(5) << "item_name" << setw(5) << "Price" << setw(5) << "Discount" << endl;
	while (edit >> item_no >> item_name >> price >> discount)
	{
		i.getdata();
	}
	cout << endl;

}
void item::delete_record()
{
	int item_no;
	cout << " DELETE RECORD !!!" << endl;
	cout << " Enter the Product No you want to delete :";
	cin >> item_no;
	cout << endl;

	f.open("store.data", ios::in | ios::out);
	fstream f2;
	f2.open("temp.data", ios::out);
	f.seekg(0, ios::beg);
	while (f.read((char*)&i, sizeof(i)))
	{
		if (i.retitem_no() != item_no)
		{
			f2.write((char*)&i, sizeof(i));
		}
	}
	f2.close();
	f.close();
	remove("store.data");
	rename("temp.data", "stre.data");
	cout << "RECORD DELETED !!!" << endl;
}
void item::menu()
{
	f.open("store.data", ios::in);
	if (!f)
	{
		cout << " FILE COULD NOT BE OPEN !!! " << endl;
		cout << " GO TO ADMIN MENU TO CREATE FILE ! " << endl;
		cout << "PROGRAM IS CLOSING !!!" << endl;
		exit(0);
	}

	cout << " _________ PRODUCT MENU ___________" << endl;
	cout << "*********************** " << endl;
	cout << " PRODUCT NO : \t PRODUCT NAME: \t PRICE :" << endl;
	cout << "**********************" << endl;
	while (f.read((char*)&i, sizeof(i)))
	{
		cout << i.retitem_no() << " \t " << i.retitem_name() << " \t " << i.retprice() << endl;
	}
	f.close();
}
void item::place_order()
{
	int  order_arr[50], quantity[50], c = 8;
	float amount, dis_amount, total = 0;
	char ch = 'Y';
	menu();
	cout << "***********************" << endl;
	cout << "________  PLACE YOUR ORDER ! ________" << endl;
	cout << "***********************" << endl;
	do
	{
		cout << "Enter Item NO :";
		cin >> order_arr[c];
		cout << endl;
		cout << "Enter Qantity: " << endl;
		cin >> quantity[c];
		cout << endl;
		c++;
		cout << "____ DO YOU WANT TO ORDER ANOTHER PRODUCT?? ______" << endl;
		cout << " Y/y  OR   N/n " << endl;
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');
	{
		cout << " THANKYOU FOR PLACING THE ORDER ! " << endl;
	}
	cout << " _____ INVOICE ________" << endl;
	cout << " ITEM NO \t ITEM NAME \t QUANTITY \t PRICE \t AMOUNT \t DISCOUNTED AMOUNT " << endl;
	for (int a = 0; a <= c; a++)
	{
		f.open("store.data", ios::in);
		f.read((char*)&i, sizeof(i));
		while (!f.eof())
		{
			if (i.retitem_no() == order_arr[a])
			{
				amount = i.retprice() * quantity[a];
				dis_amount = amount - (amount * i.retdis() / 100);
				cout << order_arr[a] << "\t" << i.retitem_name() << "\t" << quantity[a] << "\t" << i.retprice() << "\t\t" << amount << "\t\t" << dis_amount << endl;
				total += dis_amount;
			}
			f.read((char*)&i, sizeof(i));
		}
		f.close();
	}
	cout << " TOTAL = " << total;
}



void item::Admin_Menu()
{
	char ch2;
	cout << " ___ ADMIN MENU _____" << endl;
	cout << "1-  ADD NEW PRODUCT ." << endl;
	cout << "2-  DISPLAY ALL PRODUCT." << endl;
	cout << "3-  EDIT PRODUCT. " << endl;
	cout << "4-  DELETE PRODUCT." << endl;
	cout << "5-  Exit " << endl;
	cout << "ENTER YOUR CHOICE ( 1-5) !" << endl;
	cin >> ch2;
	cout << endl;

	switch (ch2)
	{
	case'1':
	{
		write_to_file();
		break;
	}
	case'2':
	{
		display_All();
		break;
	}

	case'3':
	{
		Edit();
		break;
	}
	case'4':
	{
		delete_record();
		break;
	}
	case'5':
	{
		exit(0);
		break;
	}
	default:
	{
		cout << "######################" << endl;
		Admin_Menu();
	}

	}


}

///////////////////////////////
void shopkeeper::getdata()
{
	cout << "Enter First Name of the Person :";
	cin >> First_Name;
	cout << endl;
	cout << "Enter the last name of the person:";
	cin >> Last_Name;
	cout << endl;
	cout << "Enter SHOPKEEPER ID :";
	cin >> S_ID;
	cout << endl;
	cout << "Enter Username :";
	cin >> User_Name;
	cout << endl;
	cout << "Enter Email :";
	cin >> E_MAIL;
	cout << endl;
	cout << " Enter Password :";
	cin >> Pass;
	cout << endl;
	cout << "Enter Regitration date :";
	cin >> Reg_Date;
	cout << endl;
	cout << "Enter Gender:";
	cin >> Gender;
	cout << endl;
	cout << "Enter Blood Group :";
	cin >> Blood_Group;
	cout << endl;
	cout << "Enter Contact No :";
	cin >> Contact_No;
	cout << endl;
	cout << " Enter Address :";
	cin >> Address;
	cout << endl;
	ofstream input("SHOPKEEPER.txt", ios::app);
	input << endl << First_Name << setw(5) << Last_Name << setw(5) << S_ID << setw(5) << User_Name << setw(5) << E_MAIL << setw(5) << Password << setw(5) << Reg_Date << setw(5) << Gender << setw(5) << Blood_Group << setw(5) << Contact_No << setw(5) << Address << endl;
	input.close();
}

void shopkeeper::showdata()
{
	cout << "Enter First Name :" << First_Name << endl;
	cout << "Enter the last name of the person:" << Last_Name << endl;
	cout << "Enter SHOPKEEPER ID :" << S_ID << endl;
	cout << "Enter Username :" << User_Name << endl;
	cout << "Enter Email :" << E_MAIL << endl;
	cout << " Enter Password :" << Password << endl;
	cout << "Enter Regitration date :" << Reg_Date << endl;
	cout << "Enter Gender:" << Gender << endl;
	cout << "Enter Blood Group :" << Blood_Group << endl;
	cout << "Enter Contact No :" << Contact_No << endl;
	cout << " Enter Address :" << Address << endl;
}

char* shopkeeper::retFirst_Name()
{
	return First_Name;
}
char* shopkeeper::retLast_Name()
{
	return Last_Name;
}
string shopkeeper::retS_ID()
{
	return S_ID;
}
string shopkeeper::retUser_Name()
{
	return User_Name;
}
string shopkeeper::retE_MAIL()
{
	return E_MAIL;
}
string shopkeeper::retPassword()
{
	return Password;
}
int  shopkeeper::retReg_Date()
{
	return Reg_Date;
}
char* shopkeeper::retGender()
{
	return Gender;
}
char* shopkeeper::retBlood_Group()
{
	return Blood_Group;
}
int shopkeeper::retContact_NO()
{
	return Contact_No;
}
string shopkeeper::retAddress()
{
	return Address;
}


shopkeeper sk;

void shopkeeper::write_to_file()
{
	f.open("store.data", ios::out | ios::app);
	sk.getdata();
	f.write((char*)&sk, sizeof(sk));
	f.close();
	cout << " THE NEW  SHOPKEEPER HAS BEEN ADDED " << endl;
}


void shopkeeper::EDIT()
{
	int  found = 0;
	string F_N, L_N;
	cout << " To EDIT SHOPKEEPER DETAILS !" << endl;
	cout << " Enter the Name of the SHOPKEEPER :";
	cin >> F_N >> L_N;

	ifstream read("Shopkeeper.txt");

	while (read >> First_Name >> Last_Name >> S_ID >> User_Name >> E_MAIL >> Password >> Reg_Date >> Gender >> Blood_Group >> Contact_No >> Address)

	{
		sk.showdata();
	}
	read.close();

	cout << " Enter The NEW Details of SHOPKEEPER ! :" << endl;
	ifstream edit("Shopkeeper.txt");
	cout << First_Name << setw(5) << Last_Name << setw(5) << S_ID << setw(5) << User_Name << setw(5) << E_MAIL << setw(5) << Password << setw(5) << Reg_Date << setw(5) << Gender << setw(5) << Blood_Group << setw(5) << Contact_No << setw(5) << Address << endl;
	while (edit >> First_Name >> Last_Name >> S_ID >> User_Name >> E_MAIL >> Password >> Reg_Date >> Gender >> Blood_Group >> Contact_No >> Address)
	{
		sk.getdata();
	}
	cout << endl;

}


void shopkeeper::delete_SHOPKEEPER_RECORD()
{
	string F_N, L_N;
	cout << "TO DELETE RECORD !" << endl;
	cout << " Enter the Name of the Shopkepeer :";
	cin >> F_N >> L_N;
	cout << endl;
	f.open("store.data", ios::in | ios::out);
	fstream f2;
	f2.open("store.data", ios::out);
	f.seekg(0, ios::beg);
	while (f.read((char*)&sk, sizeof(sk)))
	{
		if (sk.retFirst_Name() != F_N)
		{
			f2.write((char*)&sk, sizeof(sk));
		}
	}
	f2.close();
	f.close();
	cout << "RECORD DELETED....!" << endl;
}

void shopkeeper::Admin_Menu_1()
{
	char ch;
	cout << " ********* ADMIN MENU *********" << endl;
	cout << " 1-  ADD NEW SHOPKEEPER " << endl;
	cout << " 2-  EDIT SHOPKEEPER DETAILS" << endl;
	cout << " 3-  DELETE SHOPKEEPER " << endl;
	cout << " 4-  EXIT" << endl;
	cout << "Enter your choice (1-4)!" << endl;
	cin >> ch;

	switch (ch)
	{
	case '1':
	{
		write_to_file();
		break;
	}
	case '2':
	{
		EDIT();
		break;
	}
	case '3':
	{
		delete_SHOPKEEPER_RECORD();
		break;
	}
	case '4':
	{
		cout << "EXIT" << endl;
	}
	default:
	{
		cout << "*************" << endl;
		Admin_Menu_1();
	}
	}

}

//////////////////////////////////

Customer c;
void Customer::getdata()
{
	cout << "Enter First Name of the Person :";
	cin >> First_Name;
	cout << endl;
	cout << "Enter the last name of the person:";
	cin >> Last_Name;
	cout << endl;
	cout << "Enter Username :";
	cin >> User_Name;
	cout << endl;
	cout << "Enter Email :";
	cin >> E_MAIL;
	cout << endl;
	cout << " Enter Password :";
	cin >> Password;
	cout << endl;
	cout << "Enter Contact No :";
	cin >> Contact_No;
	cout << endl;
	cout << " Enter Address :";
	cin >> Address;
	cout << endl;
	ofstream input("Customer.txt", ios::app);
	input << endl << First_Name << setw(5) << Last_Name << setw(5) << User_Name << setw(5) << E_MAIL << setw(5) << Password << setw(5) << Contact_No << setw(5) << Address << endl;
	input.close();
}

void Customer::showdata()
{
	cout << "Enter First Name :" << First_Name << endl;
	cout << "Enter the last name of the person:" << Last_Name << endl;
	cout << "Enter Username :" << User_Name << endl;
	cout << "Enter Email :" << E_MAIL << endl;
	cout << " Enter Password :" << Password << endl;
	cout << "Enter Contact No :" << Contact_No << endl;
	cout << " Enter Address :" << Address << endl;
}

char* Customer::retFirst_Name()
{
	return First_Name;
}
char* Customer::retLast_Name()
{
	return Last_Name;
}

string Customer::retUser_Name()
{
	return User_Name;
}
string Customer::retE_MAIL()
{
	return E_MAIL;
}
string Customer::retPassword()
{
	return Password;
}
int Customer::retContact_NO()
{
	return Contact_No;
}
string Customer::retAddress()
{
	return Address;
}
void Customer::write_to_file()
{
	f.open("store.data", ios::out | ios::app);
	c.getdata();
	f.write((char*)&c, sizeof(c));
	f.close();
	cout << " THE NEW  CUSTOMER HAS BEEN ADDED " << endl;
}


void Customer::EDIT()
{
	int  found = 0;
	string F_N, L_N;
	cout << " To EDIT CUSTOMER  DETAILS !" << endl;
	cout << " Enter the Name of the CUSTOMER :";
	cin >> F_N >> L_N;
	ifstream read("Customer.txt");

	cout << "First_Name" << setw(5) << "Last_Name" << setw(5) << "User_Name" << setw(5) << "E_MAIL" << setw(5) << "Password" << setw(5) << "Contact_No" << setw(5) << "Address" << endl;
	while (read >> First_Name >> Last_Name >> User_Name >> E_MAIL >> Password >> Contact_No >> Address)
	{
		c.showdata();
	}
	read.close();


	cout << " Enter The NEW Details of CUSTOMER ! :" << endl;
	ifstream edit("Customer.txt");
	cout << "First_Name" << setw(5) << "Last_Name" << setw(5) << "User_Name" << setw(5) << "E_MAIL" << setw(5) << "Password" << setw(5) << "Contact_No" << setw(5) << "Address" << endl;
	while (edit >> First_Name >> Last_Name >> User_Name >> E_MAIL >> Password >> Contact_No >> Address)
	{
		c.getdata();
	}
	cout << endl;

}

void Customer::delete_CUSTOMER_RECORD()
{
	string F_N, L_N;
	cout << "TO DELETE RECORD !" << endl;
	cout << " Enter the Name of the Customer :";
	cin >> F_N >> L_N;
	cout << endl;
	f.open("store.data", ios::in | ios::out);
	fstream f2;
	f2.open("store.data", ios::out);
	f.seekg(0, ios::beg);
	while (f.read((char*)&c, sizeof(c)))
	{
		if (c.retFirst_Name() != F_N)
		{
			f2.write((char*)&c, sizeof(c));
		}
	}
	f2.close();
	f.close();
	cout << "RECORD DELETED....!" << endl;
}

void Customer::Admin_Menu_2()
{
	while (1)
	{
		char ch;
		cout << " ********* ADMIN MENU *********" << endl;
		cout << " 1-  ADD NEEW CUSTOMER " << endl;
		cout << " 2-  EDIT CUSTOMER DETAILS" << endl;
		cout << " 3-  DELETE CUSTOMER " << endl;
		cout << " 4-  EXIT" << endl;
		cout << "Enter your choice (1-4)!" << endl;
		cin >> ch;

		switch (ch)
		{
		case '1':
		{
			write_to_file();
			break;
		}
		case '2':
		{
			EDIT();
			break;

		}
		case '3':
		{
			delete_CUSTOMER_RECORD();
			break;
		}
		case '4':
		{
			exit(0);
		}
		default:
		{
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			Admin_Menu_2();
		}
		}
	}
}

# include "Header.h"
product p;

void product::getdata()
{
	cout << "************Select Category************* :";
	cout << " 1- SPORTS " << endl;
	cout << " 2- GARMENTS " << endl;
	cout << " 3- EATABLES " << endl;
	cout << " 4- MEDICINES " << endl;
	cout << " 5- FASHION " << endl;
	cin >> Category;
	cout << endl;
	cout << " Enter product name :";
	cin >> Product_Name;
	cout << endl;
	cout << "Product Discription :";
	cin >> Product_Discription;
	cout << endl;
	cout << "Enter Product ID :";
	cin >> Product_ID;
	cout << endl;
	cout << "Product Quantity :";
	cin >> Product_Quantity;
	cout << endl;
	ofstream in("Product.txt", ios::app);
	in << endl << Category << setw(5) << Product_Name << setw(5) << Product_Discription << setw(5) << Product_ID << setw(5) << Product_Quantity << endl;
	in.close();
}
void product::showdata()
{
	cout << "PRODUCT CATEGORY :" << Category << endl;
	cout << "PRODUCT NAME : " << Product_Name << endl;
	cout << "PRODUCT DISCRIPTION :" << Product_Discription << endl;
	cout << "PRODUCT ID : " << Product_ID << endl;
	cout << " PRODUCT QUANTITY :" << Product_Quantity << endl;
}

char* product::retcategory()
{
	return Category;
}
char* product::retProduct_Name()
{
	return Product_Name;
}
char* product::retProduct_Discription()
{
	return Product_Discription;
}
string product::retProduct_ID()
{
	return Product_ID;
}

void product::write_to_file()
{
	f.open("store.data", ios::out | ios::app);
	p.getdata();
	f.write((char*)&p, sizeof(p));
	f.close();
	cout << "The NEW PRODUCT HAS BEEN ADDED !";
	cout << endl;
}
void product::display_All()
{
	cout << "Display All PRODUCTS !!!";
	f.open("store.data", ios::in);
	while (f.read((char*)&p, sizeof(p)))
	{
		p.showdata();
		cout << "***********************" << endl;
	}
	f.close();
}
void product::Edit()
{
	string Product_Name;
	int found = 0;
	cout << "TO EDIT !!!" << endl;
	cout << "Enter Product Name :";
	cin >> Product_Name;
	cout << endl;
	ifstream read("Customer.txt");
	cout << "Category" << setw(5) << "Product_Name" << setw(5) << "Product_Discription" << setw(5) << "Product_ID" << setw(5) << "Product_Quantity" << endl;
	while (read >> Category >> Product_Name >> Product_Discription >> Product_ID >> Product_Quantity)
	{
		p.showdata();
	}
	read.close();


	cout << "ENTER THE NEW DETAILS OF THE PRODUCT  :" << endl;
	ifstream edit("Customer.txt");
	cout << "Category" << setw(5) << "Product_Name" << setw(5) << "Product_Discription" << setw(5) << "Product_ID" << setw(5) << "Product_Quantity" << endl;
	while (edit >> Category >> Product_Name >> Product_Discription >> Product_ID >> Product_Quantity)
	{
		p.getdata();
	}
	cout << endl;

}
