//#include <iostream>
//#include <string>
//using namespace std;
//class student
//{
//private:
//   string name;
//    int age;
//    int roll_no;
//    string emails[5];
//
//public:
//    student()
//    {
//        name = "";
//        age = 0;
//        roll_no = 0;
//    }
//    student(string n, int a, int r, string* e)
//    {
//
//        name = n;
//        age = a;
//        roll_no = r;
//        for (int i = 0; i < 5; ++i) 
//        {
//            emails[i] = e[i];
//        }
//    }
//    ~student()
//    {
//       cout << "Destructor called for " << name << endl;
//    }
//    void display() 
//    {
//       cout << "Name: " << name <<endl;
//       cout << "Age: " << age <<endl;
//        cout << "Roll No: " << roll_no << endl;
//     cout << "Emails:" <<endl;
//        for (int i = 0; i < 5; ++i)
//        {
//            cout << emails[i] << endl;
//        }
//    }
//    friend void common_f(student* s1, student* s2, student* common);
//    friend void concat(student* s1, student* s2, student* concatenated);
//};
//void common_f(student* s1, student* s2, student* common) 
//{
//    for (int i = 0; i < 5; ++i)
//    {
//        for (int j = 0; j < 5; ++j) 
//        {
//            if (s1->emails[i] == s2->emails[j])
//            {
//                common->emails[i] = s1->emails[i];
//                break;
//            }
//        }
//    }
//}
//void concat(student* s1, student* s2, student* concatenated) 
//{
//    for (int i = 0; i < 5; ++i) 
//    {
//        concatenated->emails[i] = s1->emails[i] + ", " + s2->emails[i];
//    }
//}
//int main()
//{
//    student* s = new student[2];
//    for (int i = 0; i < 2; ++i) 
//    {
//        string name, email[5];
//        int age, roll_no;
//        cout << "Enter student " << i + 1 << " details:" << endl;
//        cout << "Name: ";
//        getline(cin, name);
//        cout << "Age: ";
//        cin >> age;
//        cout << "Roll No: ";
//        cin >> roll_no;
//        cin.ignore();
//        cout << "Enter 5 email addresses for the student:" << endl;
//        for (int j = 0; j < 5; ++j)
//        {
//            cout << "Email " << j + 1 << ": ";
//            getline(cin, email[j]);
//        }
//        s[i] = student(name, age, roll_no, email);
//    }
//    for (int i = 0; i < 2; ++i)
//    {
//        cout << "Student " << i + 1 << " details:" << endl;
//        s[i].display();
//        cout << endl;
//    }
//    student co("", 0, 0, nullptr);
//    common_f(&s[0], &s[1], &co);
//    cout << "Common email addresses:" << endl;
//    co.display();
//    cout << endl;
//    student concatenated("", 0, 0, nullptr);
//    concat(&s[0], &s[1], &concatenated);
//    cout << "Concatenated email addresses:" << endl;
//    concatenated.display();
//
//    delete[] s;
//    system("pause");
//}
