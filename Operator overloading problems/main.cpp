# include "Header.h"
using namespace std;
int main()
{
	int ch, opt = 0;
	char  First_Name[20], Last_Name[20];
	string Password, User_Name, E_MAIL, Address, C_ID, Pass, U_N;
	char F_N[20], L_N[20], Blood_Group[2], Gender[2];
	int Reg_Date, Contact_No;
	int n = 50;
	char pay;

	item obj;
	shopkeeper sk;
	Customer c;
	product p;

	cout << "       WELCOME TO INVENTRY MANAGEMENT SYSTEM       " << endl;
	cout << " ************************************************************" << endl;
	cout << " 1- SIGN IN TO SYSTEM !" << endl;
	cout << " 2 - EXIT " << endl;
	cout << " Enter your choice :" << endl;
	cin >> ch;
	if (ch == 1)
	{
		cout << "************** TO SIGN_IN ! *****************" << endl;
		cout << " Enter Username :";
		cin >> User_Name;
		cout << endl;
		cout << " Enter Password:";
		cin >> Password;
		cout << endl;
		if (User_Name == "Farheen" || User_Name == "Zara")
		{

		}
		else
		{
			cout << " WRONG USER NAME OR PASSWORD  " << endl;
			exit(0);
		}
		if (Password == "12345" || Password == "67890")
		{

		}
		else
		{
			cout << " WRONG  USER NAME OR PASSWORD " << endl;
			exit(0);
		}
	}

	if (ch == 2)
	{
		cout << "___________________________________________________________________" << endl;
		cout << "********************* GOODBYE ! ***********************************" << endl;
		cout << " __________________________________________________________________" << endl;
		exit(0);
	}

	do
	{
		cout << " ______________MAIN MENU _________________" << endl;
		cout << "  1- ADMINISTRATOR MODULE " << endl;
		cout << "  2- SHOPKEEPER MODULE " << endl;
		cout << "  3- CUSTOMER MODULE " << endl;
		cout << "  4- EXIT " << endl;
		cout << " Which Module you want to choose !" << endl;
		cin >> ch;
		if (ch == 1)
		{
			cout << " 1-  SIGN _ IN TO SYSTEM ! " << endl;
			cout << " 2-  EXIT " << endl;
			cout << " Enter your choice !" << endl;
			cin >> ch;
			if (ch == 1)
			{
				cout << " SIGN IN TO SYSTEM !" << endl;
				cout << " Enter User Name :" << endl;
				cin >> User_Name;
				cout << endl;
				cout << " Enter Password : " << endl;
				cin >> Password;
				cout << endl;
				if (User_Name == "Farheen" || User_Name == "Zara")
				{

				}
				else
				{
					cout << " WRONG USER NAME OR PASSWORD  " << endl;
					exit(0);
				}
				if (Password == "12345" || Password == "67890")
				{

				}
				else
				{
					cout << " WRONG  USER NAME OR PASSWORD " << endl;
					exit(0);
				}
			}
			{
				do
				{
					cout << "__________________ MAIN MENU __________________" << endl;
					cout << " ____________ ADMINISTRATOR MODULE ____________" << endl;
					cout << "  1-  PRODUCT  " << endl;
					cout << "  2-  SHOPKEEPER " << endl;
					cout << "  3-  CUSTOMER " << endl;
					cout << "  4-   EXIT " << endl;
					cout << " PEASE SELECT YOUR OPTION (1-4) ! " << endl;
					cin >> opt;
					cout << endl;


					if (opt == 1)
					{
						obj.Admin_Menu();

					}

					if (opt == 2)
					{
						sk.Admin_Menu_1();

					}

					if (opt == 3)
					{
						c.Admin_Menu_2();

					}

					if (opt == 4)
					{
						exit(0);

					}

					else
					{
						cout << "~~~~#######~~~" << endl;
					}

				} while (opt != '3');
				return 0;
				if (ch == 2)
				{
					cout << "__________________________________________________________" << endl;
					cout << " **************** GOODBYE ! ****************************" << endl;
					cout << "___________________________________________________________" << endl;
					exit(0);
				}

			}
		}

		if (ch == 2)
		{
			cout << " 1- REGISTER TO SYSTEM ! " << endl;
			cout << " 2-  SIGN _ IN TO SYSTEM ! " << endl;
			cout << " 3- EXIT " << endl;
			cout << " Enter your choice !";
			cin >> ch;
			cout << endl;

			{
				if (ch == 1)

				{
					cout << " Enter First Name :";
					cin >> F_N;
					cout << endl;
					cout << " Enter Last Name : ";
					cin >> L_N;
					cout << endl;
					cout << " Enter SHOPKEEPER ID :";
					cin >> C_ID;
					cout << endl;
					cout << " Enter username :";
					cin >> U_N;
					cout << endl;
					cout << " Enter E-Mail :";
					cin >> E_MAIL;
					cout << endl;
					cout << " Enter Password :";
					cin >> Pass;
					cout << endl;
					cout << " Enter Registration Date :";
					cin >> Reg_Date;
					cout << endl;
					cout << " Enter Gender :";
					cin >> Gender;
					cout << endl;
					cout << " Enter Blood Group :";
					cin >> Blood_Group;
					cout << endl;
					cout << " Enter Contact No :";
					cin >> Contact_No;
					cout << endl;
					cout << " Enter Address :";
					cin >> Address;
					cout << endl;

					cout << " CONGRATULATIONS !!!" << endl;
					cout << " YOU HAVE BEEN REGISTERED TO SYSTEM !" << endl;
					cout << " NOW SIGN IN TO SYSTEM !" << endl;
					cout << " TO SIGN IN " << endl;
					cout << " Enter User Name :";
					cin >> User_Name;
					cout << endl;
					cout << " Enter Password :";
					cin >> Password;
					cout << endl;

					if (User_Name == U_N)
					{

					}
					else
					{
						cout << " WRONG USER NAME OR PASSWORD  " << endl;
						cout << "  TRY AGAIN !" << endl;
						exit(0);
					}
					if (Password == Pass)
					{

					}
					else
					{
						cout << " WRONG  USER NAME OR PASSWORD " << endl;
						cout << " TRY AGAIN ! " << endl;
						exit(0);
					}

				}
				if (ch == 2)

				{
					cout << " TO SIGN IN " << endl;
					cout << " Enter User Name :";
					cin >> User_Name;
					cout << endl;
					cout << " Enter Password :";
					cin >> Password;
					cout << endl;

					if (User_Name == U_N)
					{

					}
					else
					{
						cout << " WRONG USER NAME OR PASSWORD  " << endl;
						cout << " TRY AGAIN !!!" << endl;
						exit(0);
					}
					if (Password == Pass)
					{

					}
					else
					{
						cout << " WRONG  USER NAME OR PASSWORD " << endl;
						cout << " NO USERNAME OR PASSWORD MATCH !" << endl;
						cout << " FIRST REGISTERED TO SYSTEM !" << endl;
						exit(0);
					}
				}


				if (ch == 3)

				{
					cout << "_____________________________________________________" << endl;
					cout << " ************** GOOD BYE ! *************************" << endl;
					cout << " ___________________________________________________ " << endl;
					exit(0);
				}
				else
				{
					cout << "###############################" << endl;
				}



				do
				{
					cout << "____MAIN MENU______" << endl;
					cout << " **************** SHOPKEEP MODULE ************ " << endl;
					cout << "  1-  ADD NEW PRODUCT " << endl;
					cout << "  2-  EDIT PRODUCT DETAILS " << endl;
					cout << "  3-  DISPLAY ALL PRODUCTS  " << endl;
					cout << "  4-   EXIT " << endl;
					cout << " PEASE SELECT YOUR OPTION (1-4) ! " << endl;
					cin >> opt;
					cout << endl;


					if (opt == 1)
					{
						p.write_to_file();

					}

					if (opt == 2)
					{
						p.Edit();

					}

					if (opt == 3)
					{
						p.display_All();

					}

					if (opt == 4)
					{
						exit(0);

					}

					else
					{
						cout << "~~~~#######~~~" << endl;
					}

				} while (opt != '3');



			}

		}

		if (ch == 3)
		{
			cout << " 1-  SIGN _ IN TO SYSTEM ! " << endl;
			cout << " 2-  EXIT " << endl;
			cout << " Enter your choice !" << endl;
			cin >> ch;
			if (ch == 1)
			{
				cout << " SIGN IN TO SYSTEM !" << endl;
				cout << " Enter User Name :" << endl;
				cin >> User_Name;
				cout << endl;
				cout << " Enter Password : " << endl;
				cin >> Password;
				cout << endl;
				if (User_Name == "Farheen" || User_Name == "Zara")
				{

				}
				else
				{
					cout << " WRONG USER NAME OR PASSWORD  " << endl;
					exit(0);
				}
				if (Password == "12345" || Password == "67890")
				{

				}
				else
				{
					cout << " WRONG  USER NAME OR PASSWORD " << endl;
					exit(0);
				}
			}

			{
				do
				{
					cout << " ******************** MAIN MENU **************************" << endl;
					cout << "**************** CUSTOMER MODULE ************************" << endl;
					cout << "  1-  PURCHASE PRODUCT " << endl;
					cout << "  2-  ADD TO CART " << endl;
					cout << "  3-  CHECK OUT " << endl;
					cout << "  4- EXIT " << endl;
					cout << " Please select your option :" << endl;
					cin >> opt;
					if (opt == 1)
					{

						obj.place_order();
					}
					if (opt == 2)
					{
						obj.display_specific_record(n);
					}
					if (opt == 3)
					{
						obj.menu();
						cout << "PROCEED TO PAY ?" << endl;
						cin >> pay;
						if (pay == 'Y' || pay == 'y')
						{
							cout << " CHECKED OUT SUCESSFULLY !" << endl;
							cout << " THANK YOU !" << endl;
							exit(0);

						}
						if (pay == 'N' || pay == 'n')
						{
							obj.menu();
						}
						else
						{
							cout << " WRONG CREDENTIALS !!" << endl;
						}
					}
					if (opt == 4)
					{
						cout << "*********************************************************" << endl;
						cout << " ******************** GOOD BYE ! *************************" << endl;
						cout << "**********************************************************" << endl;
						exit(0);
					}
				} while (opt != '3');
			}

			if (ch == 2)
			{
				cout << " **************************************************************" << endl;
				cout << " ********************  GOOD BYE ! **************************" << endl;
				cout << "****************************************************************" << endl;
				exit(0);
			}

		}

		if (ch == 4)
		{
			cout << "*************************************************************************" << endl;
			cout << " _______________________ THANKYOU ! _____________________________________" << endl;
			cout << "************************** GOOD BYE ! **********************************" << endl;
			exit(0);
		}



	} while (opt != '3');
}

