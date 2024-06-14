////#include<iostream>
////#include<string>
////using namespace std;
////class string_con
////{
////	string str1;
////	string str2;
////public:
////	string_con(const string& s1, const string& s2) : str1(s1), str2(s2) {}
////
////	string operator+(string_con&obj1)
////	{
////		string result = "";
////		result = str1 + obj1.str2;
////		return result;
////	}
////};
////int main()
////{
////	string_con obj1("ifra");
////	system("pause");
////}
//#include<iostream>
//#include<string>
//using namespace std;
//
//class string_con
//{
//	string str1;
//	string str2;
//
//public:
//	string_con()
//	friend string_con operator+(const string_con& obj2, const string_con& obj1);
//};
// string_con operator+(const string_con& obj2, const string_con& obj1)
//{
//	string result = obj2.str1 + obj2.str2;
//	string result2 = obj1.str1 + obj1.str2;
//	return(string_con(result, result2));
//}
//int main()
//{
//	string_con obj1("ifra");
//	string_con obj2(" is awesome");
//
//	// Using the overloaded + operator to concatenate strings
//	string result = obj1 + obj2;
//
//	cout << result << endl;
//
//	system("pause");
//	return 0;
//}
