//#include<iostream>
//using namespace std;
//int main()
//{
//	int r;
//	int c;
//	cout << "Enter your rows:";
//	cin >> r;
//	cout << "enter your columns:";
//	cin >> c;
//	int** arr = new int* [r];
//	for (int i = 0;i < r;i++)
//	{
//		arr[i] = new int[c];
//	}
//	cout << "Enter your Array elements:" << endl;
//	for (int i = 0;i < r;i++)
//	{
//		for (int j = 0;j < c;j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	cout << "Array before Transpose is:" << endl;
//	for (int i = 0;i < r;i++)
//	{
//		for (int j = 0;j < c;j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	if (r == c)
//	{
//		cout << "Array After Transpose is:" << endl;
//		for (int i = 0;i < r;i++)
//		{
//			for (int j = 0;j < c;j++)
//			{
//				cout << arr[j][i] << " ";
//			}
//			cout << endl;
//		}
//	}
//	if(r!=c)
//	{
//		cout << "No transpose due to Rows and Columns are not Equal" << endl;
//	}
//	cout << "Memory Clean" << endl;
//	for (int i = 0;i < r;i++)
//	{
//		delete arr[i];
//	}
//	delete[] arr;
//	system("pause");
//}