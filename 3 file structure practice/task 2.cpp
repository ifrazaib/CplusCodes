//
////Implementation of String Class : Your goal is to implement a generic 'String' class using cstring.
////Your implemented class must fully provide the definitions of following class (interface)
////functions.Please also write down the test code to drive your class implementation.Please note
////that we will be running your code against our test code and any segmentation faults or
////incorrect result will result in loss of marks.
//
//#include<iostream>
//#include<string>
//#include<cstdlib>
//using namespace std;
//class String
//{
//private:
//	char* str;
//public:
//	String()
//	{
//		str = NULL;
//	}
//	String(const char* str1)
//	{
//		if (str1)
//		{
//			int l = 0;
//			l = strlen(str1);
//			str = new char[l + 1];
//			strcpy_s(str, l + 1, str1);
//		}
//		else
//		{
//			str = nullptr;
//		}
//	}
//	String(const String& obj1) :str(nullptr)
//	{
//		/*int l = 0;
//		l = strlen(obj1.str);
//		str = new char[l + 1];
//		strcpy_s(str, l + 1, obj1.str);*/
//		*this = obj1;
//	}
//	String& operator=(const String& obj1)
//	{
//		if (this == &obj1)
//		{
//			return *this;
//		}
//
//		delete[] str;
//
//		if (obj1.str)
//		{
//			int l = strlen(obj1.str);
//			str = new char[l + 1];
//			strcpy_s(str, l + 1, obj1.str);
//		}
//		else {
//			str = nullptr;
//		}
//
//		return *this;
//	}
//	String(int x)
//	{
//		str = new char[x + 1];
//		str[0] = '\0';
//	}
//	char getAt(int i)
//	{
//		int l = 0;
//		l = strlen(str);
//		if (i >= 0 && i <= l)
//		{
//			return str[i];
//		}
//		else
//		{
//
//			return '\0';
//		}
//	}
//	void setAt(int i, char c)
//	{
//		int l = 0;
//		l = strlen(str);
//		if (i >= 0 && i <= l)
//		{
//			str[i] = c;
//		}
//		else
//		{
//			str[i] = '\0';
//		}
//	}
//	String substr(int pos, int len)
//	{
//		int l = 0;
//		l = strlen(str);
//		if (pos >= l || pos < 0 || len <= 0)
//		{
//			return '\0';
//		}
//		int l1 = l - pos;;
//		if (len > l1)
//		{
//			len = l1;
//		}
//		char* sub_string = new char[len + 1];
//		strncpy_s(sub_string, len + 1, str + pos, len);
//		sub_string[len] = '\0';
//		String substring(sub_string);
//		delete[] sub_string;
//		return substring;
//	}
//
//	String substr(int pos)
//	{
//		int l = 0;
//		l = strlen(str);
//		if (pos >= l || pos < 0)
//		{
//			return '\0';
//			return String();
//		}
//		int length = l - pos;
//		char* sub_string = new char[length + 1];
//		strncpy_s(sub_string, length + 1, str + pos, length);
//		sub_string[length] = '\0';
//		String substring(sub_string);
//		delete[] sub_string;
//		return substring;
//	}
//	void append(char a)
//	{
//		int l = strlen(str);
//		char* append_str = new char[l + 2];
//		strcpy_s(append_str, l + 1, str);
//		append_str[l] = a;
//		append_str[l + 1] = '\0';
//		delete[] str;
//		str = append_str;
//	}
//	const char* getSub() const
//	{
//		return str;
//	}
//	void append(String str)
//	{
//		int l = 0;
//		l = strlen(this->str);
//		int l2 = 0;
//		l2 = strlen(str.getSub());
//		char* append_str = new char[l2 + l + 1];
//		strcpy_s(append_str, l + 1, this->str); // Copy the original string
//		strcat_s(append_str, l + l2 + 1, str.getSub()); // Concatenate the new string
//		delete[] this->str;
//		this->str = append_str;
//	}
//	void append_character(const char* a)
//	{
//		int l1 = strlen(str);
//		int l2 = strlen(a);
//		char* appended_str = new char[l1 + l2 + 1];
//		strcpy_s(appended_str, l1 + 1, str);
//		strcat_s(appended_str, l1 + l2 + 1, a);
//		delete[] str;
//		str = appended_str;
//	}
//	int length()
//	{
//		return strlen(str);
//	}
//	char* tocstring()
//	{
//		int l = strlen(str);
//		char* c_to_copy = new char[l + 1];
//		strcpy_s(c_to_copy, l + 1, str);
//		return c_to_copy;;
//	}
//	void display()
//	{
//		if (str)
//		{
//			std::cout << str << std::endl;
//		}
//		else
//		{
//			std::cout << "string is empty<:" << std::endl;
//		}
//	}
//	bool is_empty()
//	{
//		return str = NULL;
//	}
//	void copy1(const String& obj2)
//	{
//		if (str != nullptr)
//		{
//			delete[] str;
//		}
//
//		if (obj2.str != nullptr)
//		{
//			int length = strlen(obj2.str);
//			str = new char[length + 1];
//			strcpy_s(str, length + 1, obj2.str);
//		}
//		else
//		{
//			str = nullptr;
//		}
//	}
//	void copy2(const char* cstr)
//	{
//		if (str != nullptr)
//		{
//			delete[] str;
//		}
//
//		if (cstr != nullptr)
//		{
//			int length = strlen(cstr);
//			str = new char[length + 1];
//			strcpy_s(str, length + 1, cstr);
//		}
//		else
//		{
//			str = nullptr;
//		}
//	}
//	int find(char c)
//	{
//		if (str == nullptr)
//		{
//			return -1;
//		}
//		int length = strlen(str);;
//		for (int i = 0;i < length;i++)
//		{
//			if (str[i] == c)
//			{
//				return i;
//			}
//		}
//		return -1;
//	}
//	bool equal(const String& obj3)
//	{
//		if (str != nullptr && obj3.str != nullptr)
//		{
//			return (strcmp(str, obj3.str) == 0);
//		}
//		return false;
//	}
//	int stoi()
//	{
//		if (str == nullptr)
//		{
//			return 0;
//		}
//		else
//		{
//			return atoi(str);
//		}
//	}
//	~String()
//	{
//		delete[] str;
//	}
//	void split(char token, String*& tokens, int& no_tokens)
//	{
//		if (!str)
//		{
//			return;
//		}
//		int l = strlen(str);
//		int count = 0;
//		for (int i = 0; i < l; i++)
//		{
//			if (str[i] == token)
//			{
//				count++;
//			}
//		}
//		no_tokens = count + 1;
//		tokens = new String[no_tokens];
//		int start_index = 0;
//		int token_index = 0;
//		for (int i = 0; i <= l; i++)
//		{
//			if (str[i] == token || str[i] == '\0')
//			{
//				int sub_string_l = i - start_index;
//				char* sub_string1 = new char[sub_string_l + 1];
//				strncpy_s(sub_string1, sub_string_l + 1, str + start_index, sub_string_l);
//				sub_string1[sub_string_l] = '\0';
//				tokens[token_index] = String(sub_string1);
//				delete[] sub_string1;
//				start_index = i + 1;
//				token_index++;
//			}
//		}
//	}
//	bool isAnagram(const String& str2)
//	{
//		int freq1[256] = { 0 };
//		int freq2[256] = { 0 };
//		const char* str4 = this->getSub();
//		const char* str5Array = this->getSub();
//		for (int i = 0;str4[i] != '\0';i++)
//		{
//			freq2[str5Array[i]]++;
//		}
//		for (int i = 0;str5Array[i] != '\0';i++)
//		{
//			freq2[str5Array[i]]++;
//		}
//		for (int i = 0;i < 256;i++)
//		{
//			if (freq1[i] != freq2[i])
//			{
//				return false;
//			}
//
//
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	char str[100];
//	cout << "enter your string:";
//	cin >> str;
//	cin.getline(str, sizeof(str));
//	String p;
//	String p1(str);
//	String p2 = p1;
//	int index;
//	char ch;
//	cout << "enter your index:";
//	cin >> index;
//	cout << "enter your character:";
//	cin >> ch;
//	p1.setAt(index, ch);
//	char c = p1.getAt(index);
//	cout << "Character at index is:" << c << endl;
//	int pos;
//	int length;
//	cout << "ente your position for string :";
//	cin >> pos;
//	cout << "enter your length for sub_string:";
//	cin >> length;
//	String substring = p1.substr(pos, length);
//	cout << "our substring is:" << substring.getSub() << endl;
//	int position;
//	cout << "enter your position for copying the string:";
//	cin >> position;
//	String substring_pos = p1.substr(position);
//	cout << "our sub string is:" << substring_pos.getSub() << endl;
//	char to_append;
//	cout << "enter character to append:";
//	cin >> to_append;
//	p1.append(to_append);
//	cout << "Updated String is:" << p1.getSub() << endl;
//	string appended_string;
//	String toAppend("appended_string");
//	p1.append(toAppend);
//	cout << "Updated string is:" << p1.getSub() << endl;
//	char* ch1;
//	char character;
//	ch1 = &character;
//	cout << "enter a character to append:";
//	cin >> ch1;
//	p1.append_character(ch1);
//	cout << "updated string is:" << p1.getSub() << endl;
//	cout << "Length of updated string is:" << p1.length() << endl;
//	char* c_to_copy = p1.tocstring();
//	cout << "our c string conversion is:" << c_to_copy << endl;
//	delete[] c_to_copy;
//	p1.display();
//	if (p1.is_empty())
//	{
//		cout << "string is empty:" << endl;
//	}
//	else
//	{
//		cout << "string is not empty:" << endl;
//	}
//	String p3;
//	p3.copy1(p2);
//	cout << "Copid string is:" << p3.getSub() << endl;
//	char cstr[100];
//	cout << "Enter your C string:";
//	cin >> cstr;
//	String p4;
//	p4.copy2(cstr);
//	p4.display();
//	char ch5;
//	cout << "enter a character to find:";
//	cin >> ch5;
//	int ind = p1.find(ch5);
//	if (ind != -1)
//	{
//		cout << "Character found at index: " << ind << endl;
//	}
//	else
//	{
//		cout << "Character not found." << endl;
//	}
//	if (p1.equal(p2))
//	{
//		cout << "Strings are equal." << endl;
//	}
//	else
//	{
//		cout << "Strings are not equal." << endl;
//	}
//	int num = p1.stoi();
//	cout << "the converted string into integers are:" << num << endl;
//
//	String* tokens;
//	int no_tokens;
//	String p5("hello,world,ifra");;
//	p5.split(',', tokens, no_tokens);
//	for (int i = 0;i < no_tokens;i++)
//	{
//		std::cout << "token" << i << ":" << tokens[i].getSub() << std::endl;
//	}
//	delete[] tokens;
//	char str1[100], str2[100];
//
//	std::cout << "Enter the first string: ";
//	std::cin >> str1;
//
//	std::cout << "Enter the second string: ";
//	std::cin >> str2;
//
//	String s1(str1);
//	String s2(str2);
//
//	if (s1.isAnagram(s2)) {
//		std::cout << "They are anagrams." << std::endl;
//	}
//	else {
//		std::cout << "They are not anagrams." << std::endl;
//	}
//	system("pause");
//}