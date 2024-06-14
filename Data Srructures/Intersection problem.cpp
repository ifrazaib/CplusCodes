//#include<iostream>
//#include<string>
//using namespace std;
//void input(int* arr, int r)
//{
//	for (int i = 0;i < r;i++)
//	{
//			cin >> arr[i];
//		
//	}
//}
//void output(int* arr, int r)
//{
//	for (int i = 0;i < r;i++)
//	{
//			cout << arr[i]<< " "; 
//	}
//}
//void intersection(int* arr1, int r1, int* arr2, int r2)
//{
//	int* sect = new int[r1];
//	int size = 0;
//	int count = 0;
//		for (int i = 0;i < r1;i++)
//		{
//			for (int j = 0;j <r2 ;j++)
//			{
//				if (arr1[i] == arr2[j])
//				{
//					count++;
//					sect[size++] = arr1[i];
//				}
//			}
//		}
//	cout << "The common actual parameters length is:" << count << endl;
//	cout << "The Intersection of A and B is:" << endl;
//	for (int i = 0;i < count;i++)
//	{
//		cout << sect[i] << " ";
//	}
//	cout << endl; 
//}
//int main()
//{
//	int r1;
//	int c1;
//	cout << "enter  size for matrix A:";
//	cin >> r1;
//	int* arr = new int[r1];
//	cout << "enter input for Matrix A:" << endl;
//	input(arr, r1);
//	cout << "Your Matrix A is:";
//	output(arr, r1);
//	cout << endl;
//	cout << "enter  size for matrix B:";
//	cin >> c1;
//	int* arr2 = new int[c1];
//	cout << "enter input for Matrix B:" << endl;
//	input(arr2, c1);
//	cout << "Your Matrix B is:";
//	output(arr2, c1);
//	cout << endl;
//	intersection(arr, r1, arr2, c1);
//	system("pause");
//}