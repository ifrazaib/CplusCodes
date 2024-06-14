//#include <iostream>
//#include <string>
//using namespace std;
//
//class dayType {
//private:
//    int day;
//
//public:
//    dayType() {
//        day = 0;
//    }
//
//    dayType(int d) {
//        day = d;
//    }
//
//    void set_day(int d) {
//        day = d;
//    }
//
//    int get_day() {
//        return day;
//    }
//
//    string get_dayName()
//    {
//        string days[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
//        return days[day];
//    }
//
//    void next_day()
//    {
//        day = (day + 1) % 7;
//    }
//
//    void previous_day() 
//    {
//        day = (day - 2+7 )%7;
//    }
//
//    void add_days(int numDays)
//    {
//        day = (day + numDays+1) % 7;
//    }
//    friend void AddElements(dayType* obj1, dayType* obj2, dayType* result);
//};
//void AddElements(dayType* obj1, dayType* obj2, dayType* result)
//{
//    int sum = obj1->get_day() + obj2->get_day();
//    result->set_day(sum % 7);
//}
//int main() 
//{
//    int currentDayIndex;
//    cout << "Enter the index of the current day " << endl;
//    cout << "0:Sunday" << endl;
//    cout << "1:Monday" << endl;
//    cout << "2:Tuesday" << endl;
//    cout << "3:Wednesday" << endl;
//    cout << "4:Thursday" << endl;
//    cout << "5:Friday" << endl;
//    cout << "6:Saturday" << endl;
//    cin >> currentDayIndex;
//    dayType* currentDay = new dayType(currentDayIndex);
//    cout << "Current Day: " << currentDay->get_dayName() << endl;
//    currentDay->next_day();
//    cout << "Next Day: " << currentDay->get_dayName() << endl;
//    currentDay->previous_day();
//    cout << "Previous Day: " << currentDay->get_dayName() << endl;
//    int numDaysToAdd;
//    cout << "Enter the number of days to add: ";
//    cin >> numDaysToAdd;
//    currentDay->add_days(numDaysToAdd);
//    cout << "Day after adding " << numDaysToAdd << " days: " << currentDay->get_dayName() << endl;
//    delete currentDay;
//    system("pause");
//}
