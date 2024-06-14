//#include<iostream>
//using namespace std;
//int main()
//{
//	int size;
//	int arr[50];
//	int index;
//	int value;
//	cout << "Ener your Array Input Size:";
//	cin >> size;
//	cout << "Enter your Input Array";
//	for (int i = 0;i < size;i++)
//	{
//		cin >> arr[i];
//	}
//	cout << "Your Input array is:" << endl;
//	for (int i = 0;i < size;i++)
//	{
//		cout << arr[i] << "," << " ";
//	}
//	cout<< endl;
//	for (int i = 0;i < size;i++)
//	{
//		cout << "Enter Index:";
//		cin >> index;
//		if (index < size)
//		{
//			cout << "Enter Element at " << index << ":";
//			cin >> value;
//			arr[index] = value;
//		}
//		else
//		{
//			cout << "----->Index out of bound:" << endl;
//			break;
//		}
//	}
//	for (int i = 0;i < size;i++)
//	{
//		cout << arr[i] << "," << " ";
//	}
//	cout << endl;
//	system("pause");
//}