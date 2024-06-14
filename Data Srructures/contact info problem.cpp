//#include<iostream>
//#include<string>
//using namespace std;
//class person
//{
//private:
//	string name;
//	int age;
//public:
//	person(string n, int a)
//	{
//		name = n;
//		age = a;
//	}
//	string get_name()
//	{
//		return name;
//	}
//	void set_name(string n)
//	{
//		name = n;
//	}
//	int get_age()
//	{
//		return age;
//	}
//	void set_age(int a)
//	{
//		age = a;
//	}
//};
//class adress :public person
//{
//private:
//	string street;
//	string city;
//	int zipcode;
//public:
//	adress(string n, int a, string s, string c, int z) :person(n, a)
//	{
//		street = s;
//		city = c;
//		zipcode = z;
//	}
//	string get_street()
//	{
//		return street;
//	}
//	void set_street(string s)
//	{
//		street = s;
//	}
//	string get_city()
//	{
//		return city;
//	}
//	void set_name(string c)
//	{
//		city = c;
//	}
//	int get_zip()
//	{
//		return zipcode;
//	}
//	void set_zip(int z)
//	{
//		zipcode = z;
//	}
//};
//class contact :public adress
//{
//private:
//	int p_number;
//	string email;
//public:
//	contact(int p, string e, string n, int a, string s, string c, int z) :adress(n, a, s, c, z)
//	{
//		p_number = p;
//		email = e;
//	}
//	string get_email()
//	{
//		return email;
//	}
//	void set_email(string e)
//	{
//		email = e;
//	}
//	int get_num()
//	{
//		return p_number;
//	}
//	void set_num(int p)
//	{
//		p_number = p;
//	}
//	void details()
//	{
//		cout << "     Person Contact Information    " << endl;
//		cout << "Name:" << get_name() << endl;
//		cout << "Age:" << get_age() << endl;
//		cout << "Phone Number:" << get_num() << endl;
//		cout << "Email:" << get_email() << endl;
//		cout << endl;
//		cout << "     Person Address Information    " << endl;
//		cout << "Street:" << get_street() << endl;
//		cout << "City:" << get_city() << endl;
//		cout << "Zipcode:" << get_zip() << endl;
//	}
//};
//int main()
//{
//	string name;
//	int age;
//	int p_number;
//	string email;
//	string street;
//	string city;
//	int zipcode;
//	cout << "Enter your name:";
//	getline(cin, name);
//	cout << "Enter your Age:";
//	cin >> age;
//	cout << "Enter your city:";
//	cin.ignore();
//	getline(cin, city);
//	cout << "Enter your street:";
//	getline(cin, street);
//	cout << "Enter your phone number:";
//	cin >> p_number;
//	cout << "Enter your zipcode:";
//	cin >> zipcode;
//	cout << "Enter your email:";
//	cin.ignore();
//	getline(cin, email);
//	contact c(p_number, email, name, age, street, city, zipcode);
//	c.details();
//	system("pause");
//}