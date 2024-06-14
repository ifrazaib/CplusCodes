//#include<iostream>
//#include<string>
//using namespace std;
//class board_2d
//{
//private:
//    int rows;
//    int columns;
//    float** arr;
//public:
//    board_2d(int r, int c)
//    {
//        rows = r; 
//        columns = c;
//        arr = new float* [rows];
//        for (int i = 0; i < rows; i++)
//        {
//            arr[i] = new float[columns];
//        }
//    }
//    void input(float** arr, int r, int c)
//    {
//        cout << "Enter your input for matrix:" << endl;
//        for (int i = 0;i < rows;i++)
//        {
//            for (int j = 0;j < columns;j++)
//            {
//
//                cin >> arr[i][j];
//                if (arr[i][j] < 1 && arr[i][j] >= 100)
//                {
//                    cout << "Enter again in between 1 and 100" << endl;
//                    cin >> arr[i][j];
//                }
//            }
//        }
//    }
//    void output(float** arr, int r, int c)
//    {
//        cout << "your matrix is:" << endl;
//        for (int i = 0;i < rows;i++)
//        {
//            for (int j = 0;j < columns;j++)
//            {
//                cout<< arr[i][j]<<" ";
//            }
//            cout << endl;
//        }
//        cout << endl;
//    }
//    void transpose(float** arr, int r, int c)
//    {
//        cout << "your Transpose matrix is:" << endl;
//        for (int i = 0;i < rows;i++)
//        {
//            for (int j = 0;j < columns;j++)
//            {
//                cout << arr[j][i] << " ";
//            }
//            cout << endl;
//        }
//       
//    }
//    void rotate(float** arr, int r, int c)
//    {
//        float **temp;
//        temp = new float* [r];
//        for (int i = 0;i < r;i++)
//        {
//            temp[i] = new float[c];
//        }
//        for (int i = 0; i < r; ++i)
//        {
//            for (int j = 0; j < c; ++j) 
//            {
//                temp[j][r - 1 - i] = arr[i][j];
//            }
//        }
//        for (int i = 0; i < r; ++i) 
//        {
//            for (int j = 0; j < c; ++j)
//            {
//                arr[i][j] = temp[i][j];
//            }
//        }
//        cout << "Rotated Array is:" << endl;
//        for (int i = 0;i < r;i++)
//        {
//            for (int j = 0;j < c;j++)
//            {
//                cout << arr[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//    void symmetric()
//    {
//        bool flag = false;
//        for (int i = 0;i < rows;i++)
//        {
//            for (int j = 0;j < columns;j++)
//            {
//                if (arr[i][j] == arr[j][i])
//                {
//                    flag = true;
//                }
//            }
//        }
//        if (flag)
//        {
//            cout << "Matrix are Symmetric:" << endl;
//        }
//        else
//        {
//            cout << "Matrix are not symmetric:" << endl;
//        }
//    }
//    bool inverse(float** mat2)
//    {
//        if (rows != columns)
//        {
//            return false;
//        }
//        float**result = new float* [rows];
//        for (int i = 0; i < rows; i++)
//        {
//            result[i] = new float[columns];
//        }
//        for (int i = 0; i < rows; i++) 
//        {
//            for (int j = 0; j < columns; j++) 
//            {
//                result[i][j] = 0;
//                for (int k = 0; k < rows; k++)
//                {
//                    result[i][j] += arr[i][k] * mat2[k][j];
//                }
//            }
//        }
//        for (int i = 0; i < rows; i++) 
//        {
//            for (int j = 0; j < columns; j++)
//            {
//                if ((i == j && result[i][j] != 1) || (i != j && result[i][j] != 0)) 
//                {
//                    for (int i = 0; i < rows; i++)
//                    {
//                        delete[] result[i];
//                    }
//                    delete[] result;
//
//                    return false;
//                }
//            }
//        }
//        for (int i = 0; i < rows; i++)
//        {
//            delete[] result[i];
//        }
//        delete[] result;
//
//        return true;
//        if (true)
//        {
//            cout << "Inverse Matrix:" << endl;
//        }
//        else
//        {
//            cout << "Not a Inverse matrix" << endl;
//        }
//    }
//    ~board_2d()
//    {
//        cout << "I am a Destructor" << endl;
//        for (int i = 0;i < rows;i++)
//        {
//            delete[] arr[i];
//        }
//        delete arr;
//    }
//};
//int main()
//{
//    int r;
//    int c;
//    bool flag = false;
//    int count = 0;
//    float** arr;
//    cout << "Enter your row size: ";
//    cin >> r;
//    cout << "Enter your column size: ";
//    cin >> c;
//    while (flag != true)
//    {
//        if (r <= 1 || c <= 1)
//        {
//            flag = true;
//        }
//        for (int i = 2; i * i <= r; i++) {
//            if (r % i == 0) {
//                flag = true;
//                break;
//            }
//        }
//        for (int i = 2; i * i <= c; i++) {
//            if (c % i == 0) {
//                flag = true;
//                break;
//            }
//        }
//
//        if (flag==false)
//        {
//            cout << "Row and Columns are Prime Numbers" << endl;
//            break;
//        }
//        else
//        {
//            cout << "Not Prime Numbers, Enter again:" << endl;
//            cin >> r;
//            cin >> c;
//            flag = false;
//        }
//    }
//    if (r == c)
//    {
//        cout << "A square matrix" << endl;
//    }
//    else
//    {
//        cout << "Not a Square Matrix" << endl;
//        cout << "Enter again for Sqaure matrix" << endl;
//        cin >> r;
//        cin >> c;
//    }
//    arr = new float* [r];
//    for (int i = 0;i < r;i++)
//    {
//        arr[i] = new float[c];
//    }
//    board_2d b(r, c);
//    b.input(arr, r, c);
//    int choice;
//    cout << "Enter your choice" << endl;
//    cout << "1:input matrix" << endl;
//    cout << "2:Output matrix" << endl;
//    cout << "3:Transpose matrix" << endl;
//    cout << "4: Save to File" << endl;
//    cout << "5: Rotated array" << endl;
//    cout << "6: Symmetric array" << endl;
//    cout << "7:Inverse of array" << endl;
//    cout << "8:Exit" << endl;
//    cin >> choice;
//    if (choice == 1)
//    {
//        b.input(arr, r, c);
//    }
//    else if (choice == 2)
//    {
//        b.output(arr, r, c);
//    }
//    else if (choice == 3)
//    {
//        b.transpose(arr, r, c);
//    }
//    else if (choice == 4)
//    {
//        cout << "Data Save to File" << endl;
//    }
//    else if (choice == 5)
//    {
//        b.rotate(arr, r, c);
//    }
//    else if (choice == 6)
//    {
//        b.symmetric(); 
//    }
//    else if (choice == 7)
//    {
//        b.inverse(arr);
//    }
//    else if (choice == 8)
//    {
//        exit(0);
//    }
//    system("pause");
//}
