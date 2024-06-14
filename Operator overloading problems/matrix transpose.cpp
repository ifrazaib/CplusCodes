//#include<iostream>
//using namespace std;
//class matrix
//{
//private:
//	int r;
//	int c;
//	int** arr;
//public:
//	matrix(int r1, int c1):r(r1),c(c1)
//	{
//		arr = new int* [r];
//		for (int i = 0;i < r;i++)
//		{
//			arr[i] = new int[c];
//		}
//	}
//	void input()
//	{
//		for (int i = 0;i < r;i++)
//		{
//			for (int j = 0;j < c;j++)
//			{
//				cin>>arr[i][j];
//			}
//		}
//	}
//	void output()
//	{
//		for (int i = 0;i < r;i++)
//		{
//			for (int j = 0;j < c;j++)
//			{
//				cout<< arr[i][j]<<" ";
//			}
//			cout << endl;
//		}
//	}
//	matrix operator~()
//	{
//		matrix trans(r, c);
//		for (int i = 0;i < r;i++)
//		{
//			for (int j = 0;j < c;j++)
//			{
//				trans.arr[j][i] = arr[i][j];
//			}
//			
//		}
//		return trans;
//	}
//	~matrix() {
//		for (int i = 0; i < r; ++i) {
//			delete[] arr[i];
//		}
//		delete[] arr;
//	}
//};
//int main()
//{
//	int r, c;
//	cin >> r;
//	cin >> c;
//	matrix m(r,c);
//	m.input();
//	m.output();
//	matrix trans = ~m;
//	trans.output();
//	
//
//	system("pause");
//}