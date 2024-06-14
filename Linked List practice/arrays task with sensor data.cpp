//#include<iostream>
//using namespace std;
//int** input(int r, int** p1, int* p2)
//{
//	int c;
//	
//	for (int i = 0;i < r;i++)
//	{
//		cout << "enter your columns for your sensor data:";
//		cin >> c;
//		cout << "enter your array elements:" << endl;
//		p2[i] = c;
//		p1[i] = new int[c];
//		for (int j = 0;j < p2[i];j++)
//		{
//			cin >> p1[i][j];
//		}
//
//	}
//	return p1;
//}
//void print(int r, int** p1, int* p2)
//{
//	cout << "your array is:" << endl;
//	for (int i = 0;i < r;i++)
//	{
//		for (int j = 0;j < p2[i];j++)
//		{
//			cout << p1[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//}
//int main()
//{
//	int r;
//	cout << "enter your row rize for the sensor data:";
//	cin >> r;
//	int** p1 = new int* [r];
//	int* p2 = new int[r];
//	p1 = input(r, p1, p2);
//	print(r, p1, p2);
//	for (int i = 0;i < r;i++)
//	{
//		delete[] p1[i];
//	}
//
//	delete[] p1;
//	delete[] p2;
//
//	system("pause");
//}
