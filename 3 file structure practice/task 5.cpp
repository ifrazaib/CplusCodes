//#include <iostream>
//#include <string>
//using namespace std;
//class Customer_Data 
//{
//private:
//    string first_name;
//    string last_name;
//    string address;
//
//public:
//    Customer_Data(string first, string last, string add)
//         {
//        first_name = first;
//        last_name = last;
//        address = add;
//    }
//
//    void display()
//    {
//        cout << "First Name: " << first_name << endl;
//        cout << "Last Name: " << last_name << endl;
//          cout  << "Address: " << address << endl;
//    }
//};
//
//class Preferred_Customer : public Customer_Data 
//{
//private:
//    double amount;
//    double discount;
//
//public:
//    Preferred_Customer(string first, string last, string add, double amo) : Customer_Data(first, last, add)
//    {
//        amount = amo;
//        update();
//    }
//
//    void update() {
//        if (amount >= 2000)
//        {
//            discount = 0.10;
//        }
//        else if (amount >= 1500)
//        {
//            discount = 0.07; 
//        }
//        else if (amount >= 1000) 
//        {
//            discount = 0.06;
//        }
//        else if (amount >= 500) 
//        {
//            discount = 0.05; 
//        }
//        else 
//        {
//            discount = 0.0;  
//        }
//    }
//
//    void Dis() 
//    {
//        cout << "Total Purchases: $" << amount << endl;
//          cout  << "Discount Level: " << (discount * 100) << "%" << endl;
//    }
//};
//
//int main() 
//{
//    string first;
//    string last;
//    string add;
//    double amount;
//    cout << "enter your first name:";
//    cin >> first;
//    cout << "enter your last name:";
//    cin >> last;
//    cout << "enter your address:";
//    cin >> add;
//    cout << "enter your amount :";
//    cin >> amount;
//    Preferred_Customer customer(first,last,add,amount);
//    customer.Dis();
//    system("pause");
//}
