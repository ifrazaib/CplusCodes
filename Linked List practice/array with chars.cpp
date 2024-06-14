//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//class chars3D 
//{
//private:
//    char*** arr;
//    int x;
//    int y;
//    int z;
//
//public:
//    chars3D(int x1, int y1, int z1)
//    {
//        x = x1;
//        y = y1;
//        z = z1;
//        arr = new char** [x];
//        for (int i = 0; i < x; ++i)
//        {
//            arr[i] = new char* [y];
//            for (int j = 0; j < y; ++j)
//            {
//                arr[i][j] = new char[z];
//            }
//        }
//    }
//    void initialize()
//    {
//        srand(time(0));
//        for (int i = 0; i < x; ++i) 
//        {
//            for (int j = 0; j < y; ++j)
//            {
//                for (int k = 0; k < z; ++k)
//                {
//                    arr[i][j][k] = 'A' + rand() % 26;
//                }
//            }
//        }
//    }
//    void print() 
//    {
//        for (int i = 0; i < x; ++i) 
//        {
//            for (int j = 0; j < y; ++j) 
//            {
//                for (int k = 0; k < z; ++k) 
//                {
//                   cout << arr[i][j][k] << " ";
//                }
//                cout << endl;
//            }
//            cout << endl;
//        }
//    }
//    void swap(chars3D& other) 
//    {
//        for (int i = 0; i < x; ++i) 
//        {
//            for (int j = 0; j < y; ++j) 
//            {
//                for (int k = 0; k < z; ++k) 
//                {
//                    char temp = arr[i][j][k];
//                    arr[i][j][k] = other.arr[i][j][k];
//                    other.arr[i][j][k] = temp;
//                }
//            }
//        }
//    }
//
//    ~chars3D()
//    {
//        for (int i = 0; i < x; ++i) 
//        {
//            for (int j = 0; j < y; ++j)
//            {
//                delete[] arr[i][j];
//            }
//            delete[] arr[i];
//        }
//        delete[] arr;
//    }
//};
//int main()
//{
//    chars3D* obj1 = new chars3D(2, 2, 2);
//    chars3D* obj2 = new chars3D(2, 2, 2);
//    obj1->initialize();
//    cout << "Array 1:" << endl;
//    obj1->print();
//    cout <<endl;
//    obj2->initialize();
//    cout << "Array 2:" <<endl;
//    obj2->print();
//    cout <<endl;
//    obj1->swap(*obj2);
//    cout << "After swapping:" << endl;
//    cout << "Array 1:" << endl;
//    obj1->print();
//    cout <<endl;
//    cout << "Array 2:" <<endl;
//    obj2->print();
//    delete obj1;
//    delete obj2;
//
//    system("pause");
//}