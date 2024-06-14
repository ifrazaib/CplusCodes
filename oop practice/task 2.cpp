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
//	person_data(string f_name, string l_name, string add)
//	{
//		first_name = f_name;
//		last_name = l_name;
//		address = add;
//	}
//	void output_data()
//	{
//		cout << "First Name = " << first_name << endl;
//		cout << "Last Name = " << last_name << endl;
//		cout << "Address = " << address << endl;
//
//	}
//};
//class customer_data :public person_data
//{
//	double amount;
//	double discount;
//public:
//	customer_data(string f_name, string l_name, string add, double amo):person_data(f_name, l_name, add)
//	{
//		amount = amo;
//		update_discount();
//	}
//	void update_discount()
//	{
//		if (amount >= 2000)
//		{
//			discount = 0.10;
//		}
//		else if (amount >= 1500)
//		{
//			discount = 0.07;
//		}
//		else if (amount >= 1000)
//		{
//			discount = 0.06;
//		}
//		else if (amount >= 500)
//		{
//			discount = 0.05;
//		}
//		else
//		{
//			discount = 0.0;
//		}
//	}
//	void display()
//	{
//		cout << "Total Purchase $ = " << amount << endl;
//		cout << "Discount level = " << (discount * 100) << "%" << endl;
//	}
//
//};
//int main()
//{
//	string f_name;
//	string l_name;
//	string add;
//	double amount;
//	cout << "enter your first name:";
//	getline(cin, f_name);
//	cout << "enter your last name:" ;
//	getline(cin, l_name);
//	cout << "enter your address:";
//	getline(cin, add);
//	cout << "enter your amount for purchases:";
//	cin >> amount;
//	customer_data c1(f_name, l_name, add, amount);
//	c1.display();
//	system("pause");
//}