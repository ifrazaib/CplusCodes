//#include<iostream>
//#include<string>
//using namespace std;
//class string_manipulator 
//{
//private:
//    char* str;
//
//public:
//    string_manipulator()
//    {
//        str = new char[1];
//        str[0] = '\0';
//    }
//
//    string_manipulator(char* str1)
//    {
//        int length = strlen(str1);
//        str = new char[length + 1];
//        for (int i = 0; i <= length; i++)
//            str[i] = str1[i];
//    }
//
//    void reverse() {
//        int l = strlen(str);
//        cout << "Reverse String is:" << endl;
//        for (int i = l - 1; i >= 0; i--) 
//        {
//            cout << str[i];
//        }
//        cout << endl;
//    }
//    bool palin()
//    {
//        int len = strlen(str);
//        for (int i = 0; i < len / 2; ++i)
//        {
//            if (str[i] != str[len - 1 - i]) 
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//    void intgers()
//    {
//        int num = 0;
//        try
//        {
//            num =stoi(str);
//            cout << "The integer value of String is:"<< str << "\" is: " << num <<endl;
//        }
//        catch (const exception& e) 
//        {
//            cerr << "Conversion failed: " << e.what() << endl;
//        }
//    }
//    int sub(string str1, string str2)
//    {
//        int n = str1.length();
//        int m = str2.length();
//        if (m == 0)
//        {
//            return 0;
//            {
//                for (int i = 0; i <= n - m; ++i)
//                {
//                    int j;
//                    for (j = 0; j < m; ++j)
//                    {
//                        if (str1[i + j] != str2[j])
//                        {
//                            break;
//                        }
//                    }
//                    if (j == m)
//                    {
//                        return i;
//                    }
//                }
//                return -1;
//            }
//            
//        }
//    }
//    /*void concate_string(char* str1, char* str2) 
//    {
//                int l1 = strlen(str1);
//                int l2 = strlen(str2);
//                char* result_str = new char[l1 + l2 + 1];
//                for (int i = 0; i < l1; i++) {
//                    result_str[i] = str1[i];
//                }
//                for (int i = 0; i < l2; i++) {
//                    result_str[l1 + i] = str2[i];
//                }
//                result_str[l1 + l2] = '\0';
//                cout << result_str;
//                delete[] result_str;
//            }*/
//    ~string_manipulator()
//    {
//        cout << "I am a String Destructor:" << endl;
//        delete[] str;
//    }
//};
//int main() 
//{
//    char str1[100];
//    char str2[110];
//    cout << "Enter First String:";
//    cin.getline(str1, sizeof(str1));
//    cout << "Enter Second String:";
//    cin.getline(str2, sizeof(str2));
//    string_manipulator* obj1 = new string_manipulator(str1);
//    obj1->reverse();
//    if (obj1->palin())
//    {
//        cout << "The string is a palindrome." << endl;
//    }
//    else 
//    {
//        cout << "The string is not a palindrome." << endl;
//    }
//    obj1->intgers();
//    int index = obj1->sub(str1,str2);
//    if (index != -1) 
//    {
//        cout << "Substring found at index " << index << endl;
//    }
//    else 
//    {
//        cout << "Substring not found" << endl;
//    }
//    /*obj1->concate_string(str1, str2);*/
//
//    delete obj1;
//    system("pause");
//}
