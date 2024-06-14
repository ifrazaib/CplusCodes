////Q3: Implementation of Array Class : Your goal is to implement an integer 'Array' class.Your
////implemented class must fully provide the definitions of following functions.Please also write
////down the test code to drive your class implementation.
////
//
//
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//class Array
//{
//private:
//	int* arr;
//	int size;
//public:
//	Array(int size1)
//	{
//
//		size = size1;
//		arr = new int[size];
//		for (int i = 0;i < size;i++)
//		{
//			arr[i] = 0;
//		}
//	}
//	Array(int* arr1, int size2)
//	{
//		size = size2;
//		arr = new int[size];
//		for (int i = 0;i < size;i++)
//		{
//			arr[i] = arr1[i];
//		}
//	}
//	Array(const Array& obj1)
//	{
//		size = obj1.size;
//		arr = new int[size];
//		for (int i = 0;i < size;i++)
//		{
//			arr[i] = obj1.arr[i];
//		}
//	}
//	int getAt(int i)
//	{
//		if (i > 0 && i < size)
//		{
//			return arr[i];
//		}
//		else
//		{
//			std::cout << "Invalid value:" << std::endl;
//			return -1;
//		}
//	}
//	void setAt(int i, int value)
//	{
//		if (arr[i] >= 0 && arr[i] < size)
//		{
//			arr[i] = value;
//		}
//		else
//		{
//			std::cout << "invalid value:" << std::endl;
//		}
//	}
//	Array sub_arr(int pos, int siz)
//	{
//		if (pos >= 0 && pos < size && pos + siz <= size)
//		{
//			int* subarr = new int[siz];
//			for (int i = pos;i < pos + siz;i++)
//			{
//				subarr[i - pos] = arr[i];
//			}
//			Array sub_array(subarr, siz);
//			delete[] subarr;
//			return sub_array;
//		}
//		else
//		{
//			std::cout << "invalid position or size:" << endl;
//			return Array(0);
//		}
//	}
//	Array subarr(int pos)
//	{
//		if (pos >= 0 && pos < size)
//		{
//			int siz = size - pos;
//			int* sub_Array = new int[siz];
//			for (int i = pos; i < size; i++)
//			{
//				sub_Array[i - pos] = arr[i];
//			}
//			Array sub_array(sub_Array, siz);
//			delete[] sub_Array;
//			return sub_array;
//		}
//		else
//		{
//			std::cout << "invalid position or size:" << endl;
//			return Array(0);
//		}
//	}
//	int* subArr(int pos, int siz)
//	{
//		if (pos >= 0 && pos < size && siz > 0 && pos + siz <= size)
//		{
//			int* subarray = new int[siz];
//			for (int i = 0; i < siz; i++)
//			{
//				subarray[i] = arr[pos + i];
//			}
//			return subarray;
//		}
//		else
//		{
//			return nullptr;
//		}
//	}
//	int* sub_Arr(int pos)
//	{
//		if (pos >= 0 && pos < size)
//		{
//			int sub_size = size - pos;
//			int* subarray = new int[sub_size];
//			for (int i = 0; i < sub_size; i++)
//			{
//				subarray[i] = arr[pos + i];
//			}
//			return subarray;
//		}
//		else
//		{
//			return nullptr;
//		}
//	}
//	void display()
//	{
//		if (arr == nullptr)
//		{
//			std::cout << "Array is empty." << std::endl;
//			return;
//		}
//		for (int i = 0; i < size; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	void push_back(int a)
//	{
//		int* new_arr1 = new int[size + 1];
//		for (int i = 0; i < size; i++)
//		{
//			new_arr1[i] = arr[i];
//		}
//		new_arr1[size] = a;
//		delete[] arr;
//		arr = new_arr1;
//		size++;
//	}
//	int pop_back()
//	{
//		if (size == 0)
//		{
//			cout << " Cannot pop." << endl;
//			return -1;
//		}
//
//		int last_index = arr[size - 1];
//		int* newArr = new int[size - 1];
//
//		for (int i = 0; i < size - 1; i++)
//		{
//			newArr[i] = arr[i];
//		}
//
//		delete[] arr;
//		arr = newArr;
//		size--;
//
//		return last_index;
//	}
//	int insert(int idx, int val)
//	{
//		if (idx<0 || idx>size)
//		{
//			return -1;
//		}
//		int* new_insert = new int[size + 1];
//		for (int i = 0;i < idx;i++)
//		{
//			new_insert[i] = arr[i];
//		}
//		new_insert[idx] = val;
//		for (int i = idx;i < size;i++)
//		{
//			new_insert[i + 1] = arr[i];
//		}
//		delete[] arr;
//		arr = new_insert;
//		size++;
//	}
//	int erase(int idx, int val)
//	{
//		if (idx < 0 || idx >= size || arr[idx] != val) {
//			return -1;
//		}
//
//		for (int i = idx; i < size - 1; i++) {
//			arr[i] = arr[i + 1];
//		}
//
//		size--;
//		return 1;
//	}
//	int length()
//	{
//		return size;
//	}
//	void clear()
//	{
//		delete[] arr;
//		size = 0;
//		arr = nullptr;
//	}
//	int value(int idx)
//	{
//		if (idx < 0 || idx >= size)
//		{
//			std::cout << "Invalid index." << std::endl;
//			return -1;
//		}
//
//		return arr[idx];
//	}
//	void assign(int idx, int val)
//	{
//		if (idx < 0 || idx >= size)
//		{
//			std::cout << "Invalid index." << std::endl;
//			return;
//		}
//
//		arr[idx] = val;
//	}
//	void copy1(const Array& arr2)
//	{
//		if (&arr2 == this)
//		{
//			return;
//		}
//		clear();
//		size = arr2.size;
//		arr = new int[size];
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = arr2.arr[i];
//		}
//		display();
//	}
//	void copy2(const int* arr5, int siz5)
//	{
//		if (arr5 == nullptr)
//		{
//			std::cout << "Source array is empty." << std::endl;
//			return;
//		}
//		clear();
//		size = siz5;
//		this->arr = new int[size];
//		for (int i = 0; i < size; i++)
//		{
//			this->arr[i] = arr5[i];
//		}
//		display();
//	}
//	bool is_empty()
//	{
//		return (arr == nullptr && size == 0);
//	}
//	Array find(int search_Value)
//	{
//		int* found_Array = new int[size];
//		int found_Count = 0;
//
//		for (int i = 0; i < size; i++)
//		{
//			if (arr[i] == search_Value)
//			{
//				found_Array[found_Count] = arr[i];
//				found_Count++;
//			}
//		}
//
//
//		Array result(found_Array, found_Count);
//
//		delete[] found_Array;
//
//		return result;
//	}
//	bool equal(const Array& obj)
//	{
//		if (size != obj.size)
//			return false;
//
//		for (int i = 0; i < size; i++)
//		{
//			if (arr[i] != obj.arr[i])
//				return false;
//		}
//
//		return true;
//	}
//	int sort()
//	{
//		bool sorted = true;
//
//		for (int i = 0; i < size - 1; i++)
//		{
//			for (int j = 0; j < size - i - 1; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//					sorted = false;
//				}
//			}
//		}
//
//		if (sorted)
//		{
//			cout << "Array is already sorted." << endl;
//			return 1;
//		}
//		else
//		{
//			cout << "Array has been sorted." << endl;
//			return 0;
//		}
//	}
//	void reverse()
//	{
//		int start = 0;
//		int end = size - 1;
//
//		while (start < end)
//		{
//			int temp = arr[start];
//			arr[start] = arr[end];
//			arr[end] = temp;
//
//			start++;
//			end--;
//		}
//	}
//	~Array()
//	{
//		delete[] arr;
//	}
//
//
//};
//int main()
//{
//	int size;
//	cout << "enter your array size:";
//	cin >> size;
//	int* arr;
//	arr = new int[size];
//	cout << "enter your array elements:";
//	for (int i = 0;i < size;i++)
//	{
//		cin >> arr[i];
//	}
//	Array p1(arr, size);
//	Array p2 = p1;
//	int index;
//	cout << "enter index to return value:";
//	cin >> index;
//	int obj = p1.getAt(index);
//	if (obj != -1)
//	{
//		cout << "index returns value:" << obj << endl;
//	}
//	int set_Value;
//	int set_Index;
//	cout << "enter value to set:";
//	cin >> set_Value;
//	cout << "eneter index at which you want to set value:";
//	cin >> set_Index;
//	p1.setAt(set_Index, set_Value);
//	p1.display();
//	int pos;
//	int siz;
//	cout << "enterr position for sub array:";
//	cin >> pos;
//	cout << "enter size for sub array:";
//	cin >> siz;
//	Array p3 = p1.sub_arr(pos, siz);
//	p3.display();
//	int sub_pos;
//	cout << "enter position for sub-array:";
//	cin >> sub_pos;
//	Array  p4 = p1.subarr(sub_pos);
//	p4.display();
//	int posi;
//	int  sizee;;
//	cout << "Enter subarray position and size: ";
//	cin >> posi;
//	cout << "enter size:";
//	cin >> sizee;
//	int* subarray = p1.subArr(sub_pos, sizee);
//	if (subarray != nullptr)
//	{
//		cout << "Subarray: ";
//		for (int i = 0; i < sizee; i++)
//		{
//			cout << subarray[i] << " ";
//		}
//		cout << endl;
//		delete[] subarray;
//	}
//	else
//	{
//		cout << "Invalid subarray parameters." << endl;
//	}
//	int sub_Pos;
//	cout << "Enter subarray position: ";
//	cin >> sub_Pos;
//
//	int* sub_Array = p1.sub_Arr(sub_pos);
//	if (sub_Array != nullptr)
//	{
//		cout << "Subarray: ";
//		for (int i = 0; i < size - sub_Pos; i++)
//		{
//			cout << sub_Array[i] << " ";
//		}
//		cout << endl;
//		delete[] sub_Array;
//	}
//	else
//	{
//		cout << "Invalid position." << endl;
//	}
//	int a;
//	cout << "enter value to add at the end of the array:";
//	cin >> a;
//	p1.push_back(a);
//	cout << "Updated array:" << endl;
//	for (int i = 0; i < size + 1; i++)
//	{
//		cout << p1.getAt(i) << " ";
//	}
//	cout << endl;
//	int pop_Value = p1.pop_back();
//
//	if (pop_Value != -1)
//	{
//		cout << "Popped value: " << pop_Value << endl;
//		cout << "Updated array: ";
//		for (int i = 0; i < size; i++)
//		{
//			cout << p1.getAt(i) << " ";
//		}
//		cout << endl;
//	}
//	int idx;
//	int val;
//	cout << "enter your index to insert value:";
//	cin >> idx;
//	cout << "enter value to insert at index:";
//	cin >> val;
//	int r = 0;
//	r = p1.insert(idx, val);
//	if (r == 0)
//	{
//		cout << "value insert succesfully:" << endl;
//	}
//	else
//	{
//		cout << "failed to insert the value:" << endl;
//	}
//	int idx1, val1;
//	cout << "Enter index and value to erase: ";
//	cin >> idx1;
//	cin >> val1;
//	int result = p1.erase(idx1, val1);
//	if (result == 1)
//	{
//		cout << "Value erased successfully:" << endl;
//	}
//	else
//	{
//		cout << "Failed to erase:" << endl;
//	}
//	int l = 0;
//	l = p1.length();
//	cout << "the length of your array is:" << l << endl;
//	p1.clear();
//	int idx3;
//	cout << "Enter index to return  value: ";
//	cin >> idx3;
//
//	int val3 = p1.value(idx3);
//
//	if (val3 != -1)
//	{
//		cout << "Value at index " << idx << " is: " << val << endl;
//	}
//	int idx4, val4;
//	cout << "Enter index to assign value: ";
//	cin >> idx4;
//	cout << "Enter value to assign: ";
//	cin >> val4;
//	p1.assign(idx4, val4);
//	Array obj3(arr, size);
//	obj3.copy1(p1);
//	int* newArray = nullptr;
//	p1.copy2(newArray, size);
//	if (p1.is_empty())
//	{
//		cout << "Array is empty" << endl;
//	}
//	else
//	{
//		cout << "Array is not empty" << endl;
//	}
//	int search_Value;
//	cout << "Enter the value to find for: ";
//	cin >> search_Value;
//
//	Array foundArray = p1.find(search_Value);
//
//	cout << "Found elements: ";
//	foundArray.display();
//	Array p9(arr, size);
//	if (p1.equal(p9))
//	{
//		cout << "Arrays are equal." << endl;
//	}
//	else
//	{
//		cout << "Arrays are not equal." << endl;
//	}
//	int sorted = p1.sort();
//
//	if (sorted == 0)
//	{
//		p1.display();
//	}
//	p1.display();
//	p1.reverse();
//	p1.display();
//	delete[] arr;
//	system("pause");
//}