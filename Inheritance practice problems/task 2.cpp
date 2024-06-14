//#include<iostream>
//#include<string>
//using namespace std;
//class person
//{
//	string name;
//	string gender;
//	int age;
//public:
//	person()
//	{
//		name = "ifra";
//		gender = "female";
//		age = 19;
//	}
//	person(string n,string g,int a)
//	{
//		name =n;
//		gender =g;
//		age = a;
//	}
//	string get_name()
//	{
//		return name;
//	}
//
//};
//class employed :public person
//{
//	int nic;
//public:
//	employed():person()
//	{
//		nic = 12345;
//	}
//	employed(int n, string name) :person(name, "", 0)
//	{
//		nic = n;
//	}
//	void employe()
//	{
//		cout << "Hi i am only employe from employe class:" << endl;
//	}
//	int get_nic()
//	{
//		return nic;
//	}
//};
//class unemployed :public person
//{
//public:
//	void unemploye()
//	{
//		std::cout << "Hi I am unemployed from unemploye class:" << std::endl;
//	}
//};
//class business_man :public employed
//{
//public:
//	void display()
//	{
//		cout << "Name:" << get_name() << endl;
//		cout << "NIC" << get_nic() << endl;
//	}
//};
//int main()
//{
//	business_man b1;
//	b1.employe();
//	b1.display();
//	system("pause");
//}
