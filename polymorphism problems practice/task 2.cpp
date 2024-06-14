//#include<iostream>
//using namespace std;
//class bill
//{
//protected:
//	int units;
//	int per_unit_cost;
//	float calBill;
//public:
//	bill(int unit, int cost)
//	{
//		units = unit;
//		per_unit_cost = cost;
//	}
//	virtual void monthly_bill()
//	{
//		calBill = units * per_unit_cost;
//	}
//	virtual void bill_display()
//	{
//		cout << "The total bill per unit is = " << calBill << endl;
//	}
//	virtual ~bill()
//	{
//		cout << "I am a virtual destructor:" << endl;
//	}
//};
//class january_bill :public bill
//{
//public:
//	january_bill(int unit, int cost) :bill(unit, cost)
//	{
//
//	}
//	  void monthly_bill()
//	{
//		  calBill = units * per_unit_cost;
//	}
//	  void bill_display()
//	  {
//		  cout << "The total bill per unit is = " << calBill << endl;
//	  }
//	  ~january_bill()
//	  {
//		  cout << "I am a destructor" << endl;
//	  }
//};
//class feburary_bill :public bill
//{
//public:
//	feburary_bill(int unit, int cost) :bill(unit, cost)
//	{
//
//	}
//	void monthly_bill()
//	{
//		calBill = units * per_unit_cost;
//	}
//	void bill_display()
//	{
//		cout << "The total bill per unit is = " << calBill << endl;
//	}
//	~feburary_bill()
//	{
//		cout << "I am a destructor" << endl;
//	}
//};
//class march_bill :public bill
//{
//public:
//	march_bill(int unit, int cost) :bill(unit, cost)
//	{
//
//	}
//	void monthly_bill()
//	{
//		calBill = units * per_unit_cost;
//	}
//	void bill_display()
//	{
//		cout << "The total bill per unit is = " << calBill << endl;
//	}
//	~march_bill()
//	{
//		cout << "I am a destructor" << endl;
//	}
//};
//class april_bill :public bill
//{
//public:
//	april_bill(int unit, int cost) :bill(unit, cost)
//	{
//
//	}
//	void monthly_bill()
//	{
//		calBill = units * per_unit_cost;
//	}
//	void bill_display()
//	{
//		cout << "The total bill per unit is = " << calBill << endl;
//	}
//	~april_bill()
//	{
//		cout << "I am a destructor" << endl;
//	}
//};
//int main()
//{
//	int units;
//	int per_unit_cost;
//	cout << "enter your units total consumed:";
//	cin >> units;
//	cout << "enter total bill per cost:";
//	cin >> per_unit_cost;
//	bill* bptr;
//	bptr = new bill(units, per_unit_cost);
//	bptr->bill_display();
//	bptr->monthly_bill();
//	bptr = new january_bill(units,per_unit_cost);
//	bptr->bill_display();
//	bptr->monthly_bill();
//	bptr = new feburary_bill(units, per_unit_cost);
//	bptr->bill_display();
//	bptr->monthly_bill();
//	bptr = new march_bill(units, per_unit_cost);
//	bptr->bill_display();
//	bptr->monthly_bill();
//	bptr = new april_bill(units, per_unit_cost);
//	bptr->bill_display();
//	bptr->monthly_bill();
//	delete[] bptr;
//	system("pause");
//}