//#include <iostream>
//#include<string>
//using namespace std;
//class chars_array
//{
//private:
//    char* arr;
//    int size;
//public:
//    chars_array(int s)
//    {
//        size = s;
//        arr = new char[size];
//    }
//    void input()
//    {
//        cout << "Enter your array:";
//        for (int i = 0;i < size;i++)
//        {
//            cin >> arr[i];
//        }
//    }
//    void sort()
//    {
//        char* ptr = arr;
//        for (int i = 0; i < size - 1; ++i)
//        {
//            for (int j = 0; j < size - i - 1; ++j)
//            {
//                if (*(ptr + j) > *(ptr + j + 1)) 
//                {
//                    char temp = *(ptr + j);
//                    *(ptr + j) = *(ptr + j + 1);
//                    *(ptr + j + 1) = temp;
//                }
//            }
//        }
//    }
//    void display() 
//    {
//        char* ptr = arr;
//        for (int i = 0; i < size; ++i)
//        {
//            cout << *(ptr + i) << " ";
//        }
//        cout <<endl;
//    }
//    ~chars_array()
//    {
//        delete[] arr;
//    }
//};
//int main()
//{
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//    chars_array array(size);
//    array.input();
//    cout << "Original array: ";
//    array.display();
//    array.sort();
//    cout << "Sorted array: ";
//    array.display();
//    system("pause");
//}
