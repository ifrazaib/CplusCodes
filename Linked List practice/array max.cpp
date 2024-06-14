//#include<iostream>
//using namespace std;
//void input(int* arr, int size)
//{
//	for (int i = 0;i < size;i++)
//	{
//		cin >> arr[i];
//	}
//}
//void common(int* arr1, int size1, int* arr2, int size2)
//{
//
//	int count = 0;
//	int max_size;
//	if (size1 > size2)
//	{
//		max_size = size1;
//	}
//	else
//	{
//		max_size = size2;
//	}
//	int* arr3 = new int[max_size];
//	int temp = 0;
//	for (int i = 0;i < size1;i++)
//	{
//		for (int j = 0;j < size2;j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				temp++;
//				arr3[count++] = arr1[i];
//				break;
//			}
//		} 
//	}
//	cout << "Your common elements are:" << endl;
//	for (int i = 0;i < count;i++)
//	{
//		cout << arr3[i] << " ";
//	}
//	cout << endl;
//	cout << count << endl;
//}
//int main()
//{
//	int size;
//	cout << "Enter your array A size:";
//	cin >> size;
//	int* arr = new int[size];
//	cout << "Enter your Array A:";
//	input(arr, size);
//	int size2;
//	cout << "Enter your array B size:";
//	cin >> size2;
//	int* arr2 = new int[size2];
//	cout << "Enter your Array B:";
//	input(arr2, size2);
//	common(arr, size, arr2, size2);
//	system("pause");
//}