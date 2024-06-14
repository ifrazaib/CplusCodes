//#include <iostream>
//using namespace std;
//class my_class
//{
//private:
//    int* arr;
//    int size;
//public:
//    my_class()
//    {
//        arr = nullptr;
//        size = 0;
//    }
//    my_class(int* a, int s)
//    {
//        size = s;
//        arr = new int[size];
//        for (int i = 0; i < size; ++i)
//        {
//            arr[i] = a[i];
//        }
//    }
//    void swap(my_class& obj1)
//    {
//        int* temp = obj1.arr;
//        int temp_s = obj1.size;
//
//        obj1.arr = arr;
//        obj1.size = size;
//        arr = temp;
//        size = temp_s;
//    }
//    void display()
//    {
//        cout << "Array contents:" << endl;
//        for (int i = 0; i < size; ++i)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//    int* get_array()
//    {
//        return arr;
//    }
//    int get_size()
//    {
//        return size;
//    }
//    int* set_array(int* a)
//    {
//        arr = a;;
//    }
//    int set_size(int s)
//    {
//        size = s;
//    }
//    friend void swapArrays(my_class* arr1, my_class* arr2);
//    friend void product(my_class* arr1, my_class* arr2, my_class* result);
//    ~my_class()
//    {
//        delete[] arr;
//    }
//};
//void swapArrays(my_class* arr1, my_class* arr2)
//{
//    arr1->swap(*arr2);
//}
//void product(my_class* arr1, my_class* arr2, my_class* result)
//{
//    int size1 = arr1->get_size();
//    int size2 = arr2->get_size();
//    int* prodArr = new int[size1 + size2];
//    int idx = 0;
//    for (int i = 0; i < size1; ++i)
//    {
//        for (int j = 0; j < size2; ++j)
//        {
//            prodArr[idx++] = arr1->get_array()[i] * arr2->get_array()[j];
//        }
//    }
//    *result = my_class(prodArr, idx);
//    delete[] prodArr;
//}
//int main()
//{
//    int* arr1 = nullptr;
//    int* arr2 = nullptr;
//    int val;
//    int size1 = 0, size2 = 0;
//    int sentinel = -1;
//   cout << "Enter elements for first dynamic array (enter " << sentinel << " to stop):" << endl;
//    while (true) 
//    {
//        cin >> val;
//        if (val == sentinel)
//        {
//            break;
//        }
//        int* temp = new int[size1 + 1];
//        for (int i = 0; i < size1; ++i)
//        {
//            temp[i] = arr1[i];
//        }
//        temp[size1++] = val;
//        delete[] arr1;
//        arr1 = temp;
//    }
//   cout << "Enter elements for second dynamic array (enter " << sentinel << " to stop):" << endl;
//   while (true)
//   {
//       cin >> val;
//       if (val == sentinel)
//       {
//           break;
//       }
//       int* temp = new int[size2 + 1];
//       for (int i = 0; i < size2; ++i)
//       {
//           temp[i] = arr2[i];
//       }
//       temp[size2++] = val;
//       delete[] arr2;
//       arr2 = temp;
//   }
//    my_class* obj1 = new my_class(arr1, size1);
//    my_class* obj2 = new my_class(arr2, size2);
//    swapArrays(obj1, obj2);
//    cout << "After swapping:" << endl;
//    obj1->display();
//    obj2->display();
//    my_class* prodResult = new my_class();
//    product(obj1, obj2, prodResult);
//    cout << "Product of elements from the two arrays:" << endl;
//    prodResult->display();
//    delete obj1;
//    delete obj2;
//    delete prodResult;
//    system("pause");
//}
