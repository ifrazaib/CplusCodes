//#include<iostream>
//#include<string>
//using namespace std;
//class patient_record
//{
//private:
//	int id;
//	int age;
//	string name;
//	string gender;
//	string m_history[5];
//public:
//patient_record()
//	{
//		id = 0;
//		age = 0;
//		name = "";
//		gender = "";
//	}
//	patient_record(int i, int a, string n)
//	{
//		age = a;
//		id = i;
//		name = n;
//	}
//	void set_history(string m[5] = {})
//	{
//		for (int i = 0;i < 5;i++)
//		{
//			m_history[i] = m[i];
//		}
//	}
//	string* get_history()
//	{
//		return m_history;
//	}
//	void set_gender(string gen)
//	{
//		gender = gen;
//	}
//	string get_gender()
//	{
//		return gender;
//	}
//	int get_id()
//	{
//		return id;
//	}
//	int get_age()
//	{
//		return age;
//	}
//	string get_name()
//	{
//		return name;
//	}
//	};
//class hospital_management
//	{
//	private:
//		patient_record* p;
//	public:
//		hospital_management()
//		{
//			p = new patient_record[5];
//		}
//		void add_r(int id, int age, string name, string gender, string m_history[5])
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				p[i] = patient_record(id, age, name);
//				p[i].set_gender(gender);
//				p[i].set_history(m_history);
//			}
//			cout << "Patient record added successfully." << endl;
//		}
//		void remove_r()
//		{
//			bool flag = false;
//			for (int i = 0; i < 5; i++)
//			{
//				p[2] = patient_record();
//				flag = true;
//				cout << "Patient record  removed successfully." << endl;
//				break;
//			}
//			if (!flag)
//			{
//				cout << "Patient record  not found." << endl;
//			}
//		}
//		void search_r(int id)
//		{
//			bool found = false;
//			for (int i = 0; i < 5; i++)
//			{
//				if (p[i].get_id() == id)
//				{
//					cout << "Patient record found:" << endl;
//					cout << "ID: " << p[i].get_id() << endl;
//					cout << "Name: " << p[i].get_name() << endl;
//					cout << "Age: " << p[i].get_age() << endl;
//					cout << "Gender: " << p[i].get_gender() << endl;
//					cout << "Medical History:" << endl;
//					string* medicalHistory = p[i].get_history();
//					for (int j = 0; j < 5; j++) {
//						cout << medicalHistory[j] << endl;
//					}
//					found = true;
//					break;
//				}
//				
//			}
//			if (!found)
//			{
//				cout << "Patient record not found." << endl;
//			}
//		}
//		void display_r() 
//		{
//			cout << "Patient records:" << endl;
//			for (int i = 0; i < 5; i++)
//			{
//					cout << "ID: " << p[i].get_id() << endl;
//					cout << "Name: " << p[i].get_name() << endl;
//					cout << "Age: " << p[i].get_age() << endl;
//					cout << "Gender: " << p[i].get_gender() << endl;
//					cout << "Medical History:" << endl;
//					string* medicalHistory = p[i].get_history();
//					for (int j = 0; j < 5; j++) 
//					{
//						cout << medicalHistory[j] << endl;
//					}
//				
//			}
//		}
//		void sort_r() {
//			for (int i = 0; i < 5 - 1; i++)
//			{
//				for (int j = 0; j < 5 - i - 1; j++) 
//				{
//					if (p[j].get_id() < p[j + 1].get_id() )
//					{
//						swap(p[j], p[j + 1]);
//					}
//				}
//			}
//			cout << "Patient records sorted successfully." << endl;
//		}
//		void rotate_r(int k) 
//		{
//			k = k % 5; 
//			patient_record* temp = new patient_record[k];
//			for (int i = 0; i < k; ++i) {
//				temp[i] = p[5 - k + i];
//			}
//			for (int i = 5 - k - 1; i >= 0; --i)
//			{
//				p[i + k] = p[i];
//			}
//			for (int i = 0; i < k; ++i) 
//			{
//				p[i] = temp[i];
//			}
//			delete[] temp;
//			cout << "Patient records rotated successfully." << endl;
//		}
//		void copyHospital(const hospital_management& obj1, hospital_management& obj2)
//		{
//			obj2 = obj1;
//		}
//};
//int main()
//{
//	int id;
//	int age;
//	string name;
//	string gender;
//	int k;
//	string m_history[5] = { "cold","fever","pain","rashes","cough" };
//	int size;
//	cout << "Enter the size of the dynamic array: ";
//	cin >> size;
//	hospital_management* hospitals = new hospital_management[size];
//	for (int i = 0; i < size; ++i) 
//	{
//		cout << "For Hospital " << i + 1 << ":" << endl;
//		cout << "Enter your ID: ";
//		cin >> id;
//		cout << "Enter your Age: ";
//		cin >> age;
//		cout << "Enter your name: ";
//		cin.ignore();
//		getline(cin, name);
//		cout << "Enter your Gender: ";
//		getline(cin, gender);
//		cin >> gender;
//		hospitals[i].add_r(id, age, name, gender, m_history);
//		hospitals[i].remove_r();
//		int searchID;
//		cout << "Enter the ID of the patient record to search: ";
//		cin >> searchID;
//		hospitals[i].search_r(searchID);
//		hospitals[i].display_r();
//		hospitals[i].sort_r();
//		cout << "Enter the number of positions to rotate right: ";
//		cin >> k;
//		hospitals[i].rotate_r(k);
//		hospital_management srcHospital = hospitals[0];
//		hospital_management destHospital;
//		hospitals[i].copyHospital(srcHospital, destHospital);
//	}
//	
//	delete[] hospitals;
//
//	system("pause");
//}
