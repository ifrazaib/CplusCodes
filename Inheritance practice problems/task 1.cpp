//#include<iostream>
//#include<string>
//using namespace std;
//class person_data
//{
//	string first_name;
//	string last_name;
//	string address;
//public:
//	
//	string getfirst_name()
//	{
//		return first_name;
//	}
//	void setfirst_name(string first)
//	{
//		first_name = first;
//	}
//	string getlast_name()
//	{
//		return last_name;
//	}
//	void setlast_name(string last)
//	{
//		last_name = last;
//	}
//	string getaddress()
//	{
//		return address;
//	}
//	void setaddress(string add)
//	{
//		address = add;
//	}
//
//};
//class customer_data :public person_data
//{
//	int customer_num;
//	bool mailing_list;
//public:
//	
//	int getnum()
//	{
//		return customer_num;
//	}
//	void setnum(int num)
//	{
//		customer_num = num;
//	}
//	bool get_mailing()
//	{
//		return mailing_list;
//	}
//	void set_mailing(bool mailing)
//	{
//		mailing_list = mailing;
//	}
//	void get_input()
//	{
//		string f;string l; string a; int num; bool list;
//		cout << "enter your first name:";
//		cin >> f;
//		cout << "enter your last name:";
//		cin >> l;
//		cout << "enter your address:";
//		cin >> a;
//		cout << "enter your customer number:";
//		cin >> num;
//		cout << "do you want to be in mailing list 0 for yes 1 for no:";
//		cin >> list;
//		setfirst_name(f);
//		setlast_name(l);
//	     setaddress(a);
//		 set_mailing(list);
//		 setnum(num);
//	}
//	void output_data()
//	{
//		
//		cout << " first name of the person is:" << getfirst_name() << endl;
//
//		cout << " last name of the person is:" << getlast_name() << endl;
//
//		cout << " Address of the person is:" << getaddress() << endl;
//
//		cout << "your mailing list is:" << get_mailing() << endl;
//
//		cout << "your customer number is:" << getnum() << endl;
//	}
//
//};
//int main()
//{
//	
//	customer_data c1;
//	c1.get_input();
//	c1.output_data();
//	
//	
//
//	
//
//	system("pause");
//}