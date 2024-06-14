//#include<iostream>
//#include<string>
//using namespace std;
//class person_data
//{
//private:
//	string first_name;
//	string last_name;
//	string address;
//public:
//	string get_first_name()
//	{
//		return first_name;
//	}
//	void set_first_name(string f_name)
//	{
//		first_name = f_name;
//	}
//	string get_last_name()
//	{
//		return last_name;
//	}
//	void set_last_name(string l_name)
//	{
//		last_name = l_name;
//	}
//	string get_address()
//	{
//		return address;
//	}
//	void set_address(string add)
//	{
//		address = add;
//	}
//};
//class customer_data :public person_data
//{
//private:
//	int customer_number;
//	bool mailing_list;
//public:
//	int get_customer_number()
//	{
//		return customer_number;
//	}
//	void set_customer_number(int c_num)
//	{
//		customer_number = c_num;
//	}
//	bool get_mailing_list()
//	{
//		return mailing_list;
//	}
//	void set_mailing_list(bool mailing_list)
//	{
//		mailing_list=mailing_list;
//	}
//	void input_data()
//	{
//		string f_name;
//		string l_name;
//		string address;
//		int customer_number;
//		bool m_list;
//		cout << "enter your first name:";
//		getline(cin, f_name);
//		cout << "enter your last name:";
//		getline(cin, l_name);
//		cout << "enter your address:";
//		getline(cin, address);
//		cout << "enter 1 if you are in mailing list or else 0 if you are not in mailing list:";
//		cin >> m_list;
//		cout << "enter your customer numbers:";
//		cin >> customer_number;
//		set_first_name(f_name);
//		set_last_name(l_name);
//		set_mailing_list(m_list);
//		set_customer_number(customer_number);
//		set_address(address);
//	}
//	void output_data()
//	{
//		cout << "First Name = " << get_first_name() << endl;
//		cout << "Last Name = " << get_last_name() << endl;
//		cout << "Address of = " << get_address() << endl;
//		if (get_mailing_list() == 1)
//		{
//			cout << "Mailing list =" <<"True" << endl;
//		}
//		else
//		{
//			cout << "Mailing list =" << "False" << endl;
//		}
//		cout << "Customer Number = " << get_customer_number() << endl;
//	}
//};
//int main()
//{
//	customer_data c1;
//	c1.input_data();
//	c1.output_data();
//	system("pause");
//}