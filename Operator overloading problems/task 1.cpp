////#include<iostream>
////#include<string>
////using namespace std;
////class matrix
////{
////private:
////	int rows;
////	int cols;
////	int** arr;
////public:
////	matrix(int r, int c)
////	{
////		rows = r;
////		cols = c;
////		arr = new int* [rows];
////		for (int i = 0;i < rows;i++)
////		{
////			arr[i] = new int[cols];
////		}
////	}
////	~matrix()
////	{
////		cout << "i am a destructor:" << endl;
////		for (int i = 0;i < rows;i++)
////		{
////			delete[] arr[i];
////		}
////		delete[] arr;
////	}
////	matrix operator+(matrix& obj1)
////	{
////		matrix add(rows, cols);
////		for (int i = 0;i < rows;i++)
////		{
////			for (int j = 0;j < cols;j++)
////			{
////				add.arr[i][j] = arr[i][j] + obj1.arr[i][j];
////			}
////		}
////		return add;
////		
////	}
////	matrix operator-(matrix& obj1)
////	{
////		matrix sub(rows, cols);
////		for (int i = 0;i < rows;i++)
////		{
////			for (int j = 0;j < cols;j++)
////			{
////				sub.arr[i][j] = arr[i][j] - obj1.arr[i][j];
////			}
////		}
////		return sub;
////	}
////	matrix& operator++()
////	{
////		for (int i = 0;i < rows;i++)
////		{
////			for (int j = 0;j < cols;j++)
////			{
////				++arr[i][j];
////			}
////		}
////		return(*this);
////	}
////	matrix& operator++(int)
////	{
////		for (int i = 0;i < rows;i++)
////		{
////			for (int j = 0;j < cols;j++)
////			{
////				arr[i][j]++;
////			}
////		}
////		return *this;
////	}
////	matrix& operator--()
////	{
////		for (int i = 0;i < rows;i++)
////		{
////			for (int j = 0;j < cols;j++)
////			{
////				--arr[i][j];
////			}
////		}
////		return *this;
////	}
////	matrix& operator--(int)
////	{
////		for (int i = 0;i < rows;i++)
////		{
////			for (int j = 0;j < cols;j++)
////			{
////				arr[i][j]--;
////			}
////		}
////		return *this;
////	}
////	bool operator<(matrix& obj1)
////	{
////		int sum = 0;
////		int sum2 = 0;
////		for (int i = 0;i < rows;i++)
////		{
////			for (int j = 0;j < cols;j++)
////			{
////				sum += arr[i][j];
////				sum2 += obj1.arr[i][j];
////			}
////		}
////		return sum < sum2;
////	}
////	bool operator>=(matrix& obj1)
////	{
////		for (int i = 0;i < rows;i++)
////		{
////			for (int j = 0;j < cols;j++)
////			{
////				if (arr[i][j] >= obj1.arr[i][j])
////				{
////					return false;
////				}
////			}
////		}
////		return true;
////	}
////	int operator*()const
////	{
////		int mul = 1;
////		for (int i = 0;i < rows;i++)
////		{
////			for (int j = 0;j < cols;j++)
////			{
////				mul *= arr[i][j];
////			}
////		}
////		return mul;
////	}
////	friend istream& operator>>(istream& in, matrix& obj1);
////	friend ostream& operator<<(ostream& out, matrix& obj1);
////};
//// istream& operator>>(istream& in, matrix& obj1)
////{
////	 for (int i = 0;i < obj1.rows;i++)
////	 {
////		 for (int j = 0;j < obj1.cols;j++)
////		 {
////			 in >> obj1.arr[i][j];
////		 }
////	 }
////	 return in;
////}
//// ostream& operator<<(ostream& out, matrix& obj1)
//// {
////	 for (int i = 0;i < obj1.rows;i++)
////	 {
////		 for (int j = 0;j < obj1.cols;j++)
////		 {
////			 out << obj1.arr[i][j] << " ";
////		 }
////		 out << endl;
////	 }
////	 return out;
//// }
////int main()
////{
////	int rows;
////	int cols;
////	cout << "enter your rows for matrix 1:";
////	cin >> rows;
////	cout << "enter your cols for matrix 1:";
////	cin >> cols;
////	matrix a(rows, cols);
////	cout << "enter your matrix 1 elements:";
////	cin >> a;
////	int rows2;
////	int cols2;
////	cout << "enter your rows for matrix 2:";
////	cin >> rows2;
////	cout << "enter your cols for matrix 2:";
////	cin >> cols2;
////	cout << "enter your elements for matrix 2:";
////	matrix b(2, 2);
////	cin >> b;
////	if (rows == rows2 && cols == cols2)
////	{
////		cout << "your addition of two matrices is:" << endl;
////		matrix c = a + b;
////		cout << c << endl;
////		cout << "your subtraction for two matrices is:" << endl;
////		matrix d = a - b;
////		cout << d << endl;
////		++a;
////		++b;
////		cout << "matrix 1 after pre increment:" << endl;
////		cout << a << endl;
////		cout << "matrix 2 after pre increment:" << endl;
////		cout << b << endl;
////		cout << "matrix 1 after post increment:" << endl;
////		cout << a << endl;
////		cout << "matrix 2 after post increment:" << endl;
////		cout << b << endl;
////		--a;
////		--b;
////		cout << "matrix 1 after pre decrement:" << endl;;
////		cout << a << endl;
////		cout << "matrix 2 afterr pre decrement:" << endl;;
////		cout << b << endl;
////		cout << "matrix 1 after post decrement:" << endl;;
////		a--;
////		b--;
////		cout << a << endl;
////		cout << "matrix 2 after post decrement:" << endl;;
////		cout << b << endl;
////		if (a < b)
////		{
////			cout << "true" << endl;
////		}
////		else
////		{
////			cout << "fasle" << endl;
////		}
////		if (a >= b)
////		{
////			cout << "yes" << endl;
////
////		}
////		else
////		{
////			cout << "false" << endl;
////		}
////		cout << "multiplication of matrices 1 is:" << endl;
////		cout << *a << endl;
////
////		cout << "multiplication of matrices 2 is:" << endl;
////		cout << *b << endl;
////
////	}
////	else
////	{
////		cout << "your rows and cols of two matrices are not equal:" << endl;
////	}
////	
////	system("pause");
////}
//#include<iostream>
//#include<string>
//using namespace std;
//void menu() {
//    cout << "\n 1- Total relation ";
//    cout << "\n 2 - Check Reflexive";
//    cout << "\n 3-Check Symmetric ";
//    cout << "\n 4- Check Transitive";
//    cout << "\n 5-Check Anti-Symmetric ";
//    cout << "\n6-Check Reflexive and Check Symmetric";
//    cout << "\n7-Check Symmetric and Check Anti-Symmetric ";
//    cout << "\n-Exit\n\n";
//    cout << "\nChoice any one of them ";
//}
//void show_sets(int set1[], int set2[], int size_set1, int size_set2)
//{
//    cout << "\n\t\t\t\t\tSets\n";
//    cout << "{";
//    for (int i = 0; i < size_set1; i++)
//    {
//        cout << set1[i] << ",";
//    }
//    cout << "}\n\n";
//    cout << "{";
//    for (int i = 0; i < size_set2; i++)
//    {
//        cout << set2[i] << ",";
//    }
//    cout << "}";
//}
//void cartesian_set(int set1[], int set2[], int size_set1, int size_set2)
//{
//    cout << "\n\t\t\t\t\tCartesian product\n";
//    cout << "{";
//    for (int i = 0; i < size_set1; i++)
//    {
//        for (int j = 0; j < size_set2; j++)
//        {
//            cout << "(" << set1[i] << "," << set2[j] << ")" << " ";
//        }
//    }
//    cout << "}\n";
//}
//bool check_reflexive(int set1[], int set2[], int size_set1, int size_set2)
//{
//    for (int i = 0; i < size_set1; ++i)
//    {
//        bool found = false;
//        for (int j = 0; j < size_set2; ++j)
//        {
//            if (set1[i] == set2[j] && set1[i] == set1[i])
//            {
//                found = true;
//                break;
//            }
//        }
//        if (!found) {
//            return false;
//        }
//    }
//    return true;
//}
//bool  check_Symmetric(int set1[], int set2[], int size_set1, int size_set2)
//{
//    // Check if each pair in set1 has a corresponding pair in set2
//    for (int i = 0; i < size_set1; ++i)
//    {
//        bool found = false;
//        for (int j = 0; j < size_set2; ++j)
//        {
//            // Check if an element in set1 has a corresponding pair in set2
//            if (set1[i] == set2[j])
//            {
//                found = true;
//                break;
//            }
//        }
//        if (!found)
//        {
//            return false; // If any pair in set1 doesn't have a corresponding pair in set2, it's not symmetric
//        }
//    }
//    return true; // All pairs in set1 have corresponding pairs in set2
//}
//bool check_AntiSymmetric(int set1[], int set2[], int size_set1, int size_set2)
//{
//    for (int i = 0; i < size_set1; ++i)
//    {
//        for (int j = 0; j < size_set2; ++j)
//        {
//            // Check if an element in set1 has a corresponding pair in set2
//            if (set1[i] == set2[j] && set2[j] == set1[i] && i != j)
//            {
//                // If (a, b) and (b, a) both exist but a != b, return false
//                return false;
//            }
//
//            if (set1[i] == set2[j] && i != j)
//            {
//                // If (a, b) exists and (b, a) does not exist, return false
//                bool symmetricExists = false;
//                for (int k = 0; k < size_set1; ++k)
//                {
//                    if (set2[k] == set1[j] && set1[k] == set2[i])
//                    {
//                        symmetricExists = true;
//                        break;
//                    }
//                }
//
//                if (!symmetricExists)
//                {
//                    return false;
//                }
//            }
//        }
//    }
//
//    // If no pair violating the antisymmetry condition is found, return true
//    return true;
//}
//
//bool check_transitive(int set1[], int set2[], int size_set1, int size_set2)
//{
//    // Check if each pair in set1 has a transitive pair in set2
//    for (int i = 0; i < size_set1; ++i)
//    {
//        for (int j = 0; j < size_set1; ++j)
//        {
//            // Check if an element in set1 has a transitive pair in set2
//            bool found = false;
//            for (int k = 0; k < size_set2; ++k)
//            {
//                if (set1[i] == set2[k] && set2[k] == set2[j])
//                {
//                    found = true;
//                    break;
//                }
//            }
//            if (!found)
//            {
//                return false; // If any pair in set1 doesn't have a transitive pair in set2, it's not transitive
//            }
//        }
//    }
//    return true; // All pairs in set1 have transitive pairs in set2
//}
//int main() {
//    int size_set1 = 0, size_set2 = 0;
//    int reflex = 0, choice = 0;
//    cout << "\n\n\t\t\t\t\t1Welcome to RelateCheck \n\n\t\t\t\t\tWe're happy you're here.\n\n";
//    menu();
//    cin >> choice;
//    cout << "\n\t\t\t\t\tSize of set\n\n";
//    cout << "\nsize for First set :";
//    cin >> size_set1;
//    cout << "\nsize for Second set :";
//    cin >> size_set2;
//
//    int* set1 = new int[size_set1];
//    int* set2 = new int[size_set2];
//    cout << "Enter the value for First Set \n";
//    for (int i = 0; i < size_set1; i++) {
//        cout << "Enter the " << i << " element :";
//        cin >> set1[i];
//        cout << endl;
//    }
//
//    cout << "Enter the value Second Set \n";
//    for (int i = 0; i < size_set2; i++) {
//        cout << "Enter the " << i << " element :";
//        cin >> set2[i];
//        cout << endl;
//    }
//
//    switch (choice)
//    {
//    case 1:
//        cartesian_set(set1, set2, size_set1, size_set2);
//        break;
//    case 2:
//        show_sets(set1, set2, size_set1, size_set2);
//        cartesian_set(set1, set2, size_set1, size_set2);
//
//        if (check_reflexive(set1, set2, size_set1, size_set2)) {
//            cout << "\nThe given set is Reflexive \n\n";
//        }
//        else {
//            cout << "\nThe given set is not Reflexive \n\n";
//        }
//        break;
//    case 3:
//        show_sets(set1, set2, size_set1, size_set2);
//        cartesian_set(set1, set2, size_set1, size_set2);
//        if (check_Symmetric(set1, set2, size_set1, size_set2)) {
//            cout << "\n The given set is symetric \n\n";
//        }
//        else {
//            cout << "\n The given set is not symetric \n\n";
//
//        }
//        break;
//    case 4:
//        show_sets(set1, set2, size_set1, size_set2);
//        cartesian_set(set1, set2, size_set1, size_set2);
//        if (check_transitive(set1, set2, size_set1, size_set2)) {
//            cout << "\n The given set is Transitive \n\n";
//        }
//        else {
//            cout << "\n The given set is not Transitive \n\n";
//        }
//        break;
//    case 5:
//        show_sets(set1, set2, size_set1, size_set2);
//        cartesian_set(set1, set2, size_set1, size_set2);
//        if (check_AntiSymmetric(set1, set2, size_set1, size_set2)) {
//
//            cout << "\n The given set is Anti-symmetric \n\n";
//        }
//        else {
//            cout << "\n The given set is not Anti-symmetric \n\n";
//        }
//        break;
//    case 6:
//        show_sets(set1, set2, size_set1, size_set2);
//        cartesian_set(set1, set2, size_set1, size_set2);
//        if (check_reflexive(set1, set2, size_set1, size_set2) && check_Symmetric(set1, set2, size_set1, size_set2)) {
//            cout << "\n The given set is reflexive and Symmetric \n\n";
//        }
//        else {
//            cout << "\n The given set is not reflexive and Symmetric \n\n";
//        }
//        break;
//    case 7:
//        show_sets(set1, set2, size_set1, size_set2);
//        cartesian_set(set1, set2, size_set1, size_set2);
//        if (check_AntiSymmetric(set1, set2, size_set1, size_set2) && check_Symmetric(set1, set2, size_set1, size_set2)) {
//            cout << "\n The given set is AntiSymmetric and Symmetric \n\n";
//        }
//        else {
//            cout << "\n The given set is not AntiSymmetric and Symmetric \n\n";
//        }
//        break;
//    case 8:
//        cout << "\nThanks for being with us! We're always here for you!\n\n";
//        exit(0);
//    }
//    delete[] set1;
//    delete[] set2;
//    system("pause");
//  
//}
//
