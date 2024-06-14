//#include<iostream>
//#include<string>
//using namespace std;
//class contact
//{
//private:
//	string name;
//	int phone_num;
//	string email;
//	string address;
//public:
//	contact()
//	{
//		name ="";
//		phone_num = 0;
//		email = "";
//		address = "";
//	}
//	contact(string n, int p, string e, string a)
//	{
//		name = n;
//		phone_num = p;
//		email = e;
//		address = a;
//	}
//	string get_name()
//	{
//		return name;
//	}
//	void set_name(string n)
//	{
//		name = n;
//	}
//	string get_email()
//	{
//		return email;
//	}
//	void set_email(string e)
//	{
//		email = e;
//	}
//	string get_add()
//	{
//		return address;
//	}
//	void set_add(string a)
//	{
//		address=a;
//	}
//	int get_num()
//	{
//		return phone_num;
//	}
//	void set_num(int p)
//	{
//		phone_num=p;
//	}
//	void details()
//	{
//		cout << "Name:" << get_name() << endl;
//		cout << "Email:" << get_email() << endl;
//		cout << "Address:" << get_add() << endl;
//		cout << "Phone Number:" << get_num() << endl;
//	}
//	void update_contact()
//	{
//		cout << "For updatation enter Information:" << endl;
//		cout << "Enter name:";
//		getline(cin, name);
//		cout << "Enter Email Address:";
//		cin.ignore();
//		getline(cin, email);
//		cout << "Enter Address:";
//		cin.ignore();
//		getline(cin, address);
//		cout << "Enter Phone Number:";
//		cin >> phone_num;
//		set_add(address);
//		set_email(email);
//		set_name(name);
//		set_num(phone_num);
//		cout << "Update Information is:" << endl;
//		cout << "Name:" << get_name() << endl;
//		cout << "Email:" << get_email() << endl;
//		cout << "Address:" << get_add() << endl;
//		cout << "Phone Number:" << get_num() << endl;
//	}
//};
//class contact_list
//{
//private:
//	contact* c;
//	int size;
//public:
//	contact_list()
//	{
//		size = 200;
//		c = new contact[size];
//	}
//	void add_contact(string name, int phone_num, string email, string address) 
//	{
//		if (size <200) 
//		{
//			c[size++] = contact(name, phone_num, email, address);
//			cout << "Contact added successfully." << endl;
//		}
//		else
//		{
//			cout << "Contact list is full. Cannot add more contacts." << endl;
//		}
//	}
//	void remove_contact(string name)
//	{
//		bool found = false;
//		for (int i = 0; i < size; ++i) 
//		{
//			if (c[i].get_name() == name) 
//			{
//				for (int j = i; j < size - 1; ++j) 
//				{
//					c[j] = c[j + 1];
//				}
//				size--;
//				found = true;
//				cout << "Contact removed successfully." << endl;
//				break;
//			}
//		}
//		if (!found)
//		{
//			cout << "Contact not found." << endl;
//		}
//	}
//	void update_contact()
//	{
//		string name;
//		int phone_num;
//		string email;
//		string address;
//		cout << "For updatation enter Information:" << endl;
//		cout << "Enter name:";
//		getline(cin, name);
//		cout << "Enter Email Address:";
//		cin.ignore();
//		getline(cin, email);
//		cout << "Enter Address:";
//		cin.ignore();
//		getline(cin, address);
//		cout << "Enter Phone Number:";
//		cin >> phone_num;
//		cout << "Update Information is:" << endl;
//		cout << "Name:" << name << endl;
//		cout << "Email:" << email << endl;
//		cout << "Address:" << address << endl;
//		cout << "Phone Number:" << phone_num<< endl;
//	}
//	~contact_list()
//	{
//		cout << "I am a destructor" << endl;
//		delete[] c;
//	}
//};
//int main()
//{
//	string name;
//	int phone_num;
//	string email;
//	string address;
//	cout << "Enter name:";
//	getline(cin, name);
//	cout << "Enter Email Address:";
//	cin.ignore();
//	getline(cin, email);
//	cout << "Enter Address:";
//	cin.ignore();
//	getline(cin, address);
//	cout << "Enter Phone Number:";
//	cin >> phone_num;
//	contact c(name, phone_num, email, address);
//	c.set_add(address);
//	c.set_email(email);
//	c.set_name(name);
//	c.set_num(phone_num);
//	c.details();
//	c.update_contact();
//	contact_list my_contacts;
//	int choice;
//
//	do 
//	{
//		cout << "\nMenu:" << endl;
//		cout << "1. Add Contact" << endl;
//		cout << "2. Remove Contact" << endl;
//		cout << "3. Update Contact" << endl;
//		cout << "4. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//
//		switch (choice) {
//		case 1:
//		{
//			string name, email, address;
//			int phone_num;
//			cout << "Enter name: ";
//			cin.ignore();
//			getline(cin, name);
//			cout << "Enter Email Address: ";
//			getline(cin, email);
//			cout << "Enter Address: ";
//			getline(cin, address);
//			cout << "Enter Phone Number: ";
//			cin >> phone_num;
//			my_contacts.add_contact(name, phone_num, email, address);
//		}
//		break;
//		case 2:
//			cout << "Enter name to remove: ";
//			cin.ignore();
//			getline(cin, name);
//			my_contacts.remove_contact(name);
//			break;
//		case 3:
//			cout << "Enter name to update: ";
//			cin.ignore();
//			getline(cin, name);
//			my_contacts.update_contact();
//			break;
//		case 4:
//			cout << "Exiting..." << endl;
//			break;
//		default:
//			cout << "Invalid choice. Please enter a valid option." << endl;
//			break;
//		}
//	} while (choice != 5);
//	system("pause");
//}