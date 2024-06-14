//#include<iostream>
//#include<string>
//using namespace std;
//
//class complex {
//private:
//    double real;
//    double imag;
//
//public:
//    complex(double r, double i)
//    {
//        real = r;
//        imag = i;
//    }
//    friend complex operator+(const complex& op1, const complex& op2);
//    double getReal() const 
//    {
//        return real;
//    }
//    double getImag() const
//    {
//        return imag;
//    }
//};
//complex operator +(const complex& op1, const complex& op2)
//{
//    double real = op1.real + op2.real,
//        imag = op1.imag + op2.imag;
//
//    return complex(real, imag);
//}
//int main() 
//{
//    double real;
//    double imag;
//    cout << "Enter real part:";
//    cin >> real;
//    cout << "Enter imag part:";
//    cin >> imag;
//    complex c1(real, imag);
//    cout << "c1: " << c1.getReal() << " + " << c1.getImag() << "i" << endl;
//    complex c2(3.1, 0);
//    cout << "c2: " << c2.getReal() << " + " << c2.getImag() << "i" << endl;
//    complex c3 = c1 + c2;
//    cout << "c3 (c1 + c2): " << c3.getReal() << " + " << c3.getImag() << "i" << endl;
//
//    system("pause");
//    return 0;
//}
