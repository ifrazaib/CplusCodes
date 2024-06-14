//#include<iostream>
//using namespace std;
//void input(int** arr, int r, int c)
//{
//	for (int i = 0;i < r;i++)
//	{
//		for (int j = 0;j < c;j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//}
//void output(int** arr, int r, int c)
//{
//	for (int i = 0;i < r;i++)
//	{
//		for (int j = 0;j < c;j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void multiplication(int** arr, int r, int c, int** arr2, int r2, int c2)
//{
//	int** mul = new int* [r];
//	for (int i = 0;i < r;i++)
//	{
//		mul[i] = new int[c];
//	}
//	if (r == r2 && c == c2)
//	{
//		for (int i = 0;i < r;i++)
//		{
//			for (int j = 0;j < c;j++)
//			{
//				mul[i][j] = 0;
//				for (int k = 0;k < r;k++)
//				{
//					mul[i][j] += arr[i][k] * arr2[k][j];
//				}
//				
//			}
//		}
//		cout << "Matrix Multiplication is:" << endl;
//		for (int i = 0;i < r;i++)
//		{
//			for (int j = 0;j < c;j++)
//			{
//				cout << mul[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	else
//	{
//		cout << "No of rows and columns of two matrices are not equal" << endl;
//	}
//}
//int main()
//{
//	int r;
//	int c;
//	cout << "Enter your Rows:";
//	cin >> r;
//	cout << "Enter your columns:";
//	cin >> c;
//	int** arr1 = new int* [r];
//	for (int i = 0;i < r;i++)
//	{
//		arr1[i] = new int[c];
//	}
//	cout << "Enter matrix A" << endl;
//	input(arr1, r, c);
//	cout << "A matrix is:" << endl;
//	output(arr1, r, c);
//	int** arr2 = new int* [r];
//	for (int i = 0;i < r;i++)
//	{
//		arr2[i] = new int[c];
//	}
//	cout << "Enter matrix B" << endl;
//	input(arr2, r, c);
//	cout << "B matrix is:" << endl;
//	output(arr2, r, c);
//	multiplication(arr1, r, c, arr2, r, c);
//	delete[] arr1;
//	delete[] arr2;
//	system("pause");
//}