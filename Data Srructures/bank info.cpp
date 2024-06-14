//#include<iostream>
//using namespace std;
//class bank
//{
//public:
//	double balance;
//	int account_number;
//	bank(double b, int a)
//	{
//		balance = b;
//		account_number = a;
//	}
//	double get_balance()
//	{
//		return balance;
//	}
//	void set_balance(double b)
//	{
//		balance = b;
//	}
//	int get_number()
//	{
//		return account_number;
//	}
//	void set_number(int a)
//	{
//		account_number = a;;
//	}
//};
//class transiction
//{
//public:
//	friend void deposit(bank& obj1,double amount);
//};
//void deposit(bank& obj1, double amount)
//{
//	obj1.balance = obj1.balance+amount;
//}
//int main()
//{
//	double balance;
//	int account;
//	cout << "ente your balance current:";
//	cin >> balance;
//	cout << "Enter your account number:";
//	cin >> account;
//	double dep;
//	cout << "Enter your amount to deposit:";
//	cin >> dep;
//	bank b(balance, account);
//	cout << "Your Initial balance is:" << b.get_balance() << endl;
//	cout << "Your Account Number is:" << b.get_number() << endl;
//	deposit(b, dep);
//	cout << "Updated Balance is:" << b.get_balance() << endl;
//	system("pause");
//}