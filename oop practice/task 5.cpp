#include<iostream>
#include<string>
using namespace std;
class friend_fun
{
private:
	float num1;
	float num2;
public:
	friend_fun(float n1, float n2)
	{
		num1 = n1;
		num2 = n2;
	}
	int add_num()
	{
		float sum = 0;
		sum = num1 + num2;
		return sum;
	}
	int sub_num()
	{
		float sub = 0;
		sub = num1 - num2;
		return sub;
	}
	int mul_num()
	{
		float mul = 0;
		mul = num1 * num2;
		return mul;
	}
	int divide_num()
	{
		float div = 0;
		if (num2 == 0)
		{
			num2 = 1;
			div = num1 / num2;
		}
		else
		{
			div = num1 / num2;
		}
		return div;
	}
	friend void average_pass(const friend_fun& obj1);
	friend void compare1_pass(const friend_fun& obj1);
	friend void compare2_pass(const friend_fun& obj1);
};
void average_pass(const friend_fun& obj1)
{
	float sum = 0;
	float avg = 0;
	sum = obj1.num1 + obj1.num2;
	avg = sum / 2;
	cout << "Average of two numbers is:" << avg << endl;
}
void compare1_pass(const friend_fun& obj1)
{
	if (obj1.num1 > obj1.num2)
	{
		cout <<obj1.num1<< "  Number 1 is greater to number 2 = " << obj1.num1 << endl;
	}
	else if (obj1.num1 < obj1.num2)
	{
		cout << obj1.num1 <<"  Number 1 is smaller to number 2 = " << obj1.num1 << endl;
	}
	else
	{
		cout << obj1.num1 << "and" << obj1.num2 << "Both are equal numbers" << endl;
		
	}
}
void compare2_pass(const friend_fun& obj1)
{
	if (obj1.num1 < obj1.num2)
	{
		cout <<obj1.num2 << "  Number 2 is greater = " << obj1.num2 << endl;
	}
	else if (obj1.num1 > obj1.num2)
	{
		cout <<obj1.num2<< "  Number 2 is  smaller = " << obj1.num2 << endl;
	}
	else
	{
		cout <<obj1.num1<<"and"<<obj1.num2<< "Both are equal numbers" << endl;
	}
}
int main()
{
	float num1;
	float num2;
	cout << "Enter your First Number:";
	cin >> num1;
	cout << "Enter your Second Number:";
	cin >> num2;
	cout << "Your First Value is:" << num1 << endl;
	cout << "Your Second Value is:" << num2 << endl;
	friend_fun f1(num1, num2);
	cout << num1 << "+" << num2 << "=" << f1.add_num() << endl;
	cout << num1 << "-" << num2 << "=" << f1.sub_num() << endl;
	cout << num1 << "*" << num2 << "=" << f1.mul_num() << endl;
	cout << num1 << "/" << num2 << "=" << f1.divide_num() << endl;
	average_pass(f1);
	compare1_pass(f1);
	compare2_pass(f1);
	char choice;
	cout << "Run this Again(Y or N):";
	cin >> choice;
	if (choice == 'Y')
	{
		cout << "Enter your First Number:";
		cin >> num1;
		cout << "Enter your Second Number:";
		cin >> num2;
		cout << "Your First Value is:" << num1 << endl;
		cout << "Your Second Value is:" << num2 << endl;
		friend_fun f1(num1, num2);
		cout << num1 << "+" << num2 << "=" << f1.add_num() << endl;
		cout << num1 << "-" << num2 << "=" << f1.sub_num() << endl;
		cout << num1 << "*" << num2 << "=" << f1.mul_num() << endl;
		cout << num1 << "/" << num2 << "=" << f1.divide_num() << endl;
		average_pass(f1);
		compare1_pass(f1);
		compare2_pass(f1);
		char choice;
		cout << "Run this Again(Y or N):";
		cin >> choice;
	}
	else
	{
		exit(0);
	}
	system("pause");
}