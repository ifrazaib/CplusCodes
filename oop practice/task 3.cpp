//#include<iostream>
//using namespace std;
//class Time
//{
//private:
//	int hr;
//	int min;
//public:
//	Time()
//
//	{
//		hr = 0;
//		min = 0;
//	}
//	Time(int h, int m)
//	{
//		hr = h;
//		min = m;
//	}
//	void setTime(int h, int m)
//	{
//		hr = h;
//		min = m;
//	}
//	void getTime(int& h, int& m)
//	{
//		hr = h;
//		min = m;
//	}
//
//	void printTime()
//	{
//		cout << "time" << hr << endl;
//		cout << "min" << min << endl;
//	}
//	void incrementHours()
//	{
//		hr = (hr + 1) % 24;
//	}
//	void incrementMinutes()
//	{
//		min = (min + 1) % 60;
//	}
//};
//class Date
//{
//private:
//	int month;
//	int day;
//	int year;
//public:
//	Date()
//	{
//		month = 0;
//		day = 0;
//		year = 0;
//	}
//	Date(int m, int d, int y)
//	{
//		month = m;
//		day = y;
//		year = d;
//	}
//	void setDate(int m, int d, int y)
//	{
//		month = m;
//		day = d;
//		year = y;
//	}
//	void getDate(int& m, int& d, int& y)
//	{
//		month = m;
//		day = d;
//		year = y;
//	}
//	void printDate()
//	{
//		cout << "MOnth:" << month << endl;
//		cout << "Day:" << day << endl;
//		cout << "Year" << year << endl;
//	}
//
//};
//class Event
//{
//private:
//	string eventName;
//	Time eventTime;
//	Date eventDay;
//public:
//	Event(int hours = 0, int minutes = 0, int m = 1,
//		int d = 1, int y = 1900, string name = "Christmas")
//	{
//		eventTime.setTime(hours, minutes);
//		eventDay.setDate(m, d, y);
//		eventName = name;
//
//	}
//	void setEventData(int hours, int minutes, int m, int d, int y, string
//		name)
//	{
//		eventTime.setTime(hours, minutes);
//		eventDay.setDate(m, d, y);
//		eventName = name;
//	}
//	void printEventData()
//	{
//		cout << "event name is:" << eventName << endl;
//		eventTime.printTime();
//		cout << "Event Date: ";
//		eventDay.printDate();
//	}
//};
//int main()
//{
//	Event event1(12, 30, 12, 25, 2023, "New Year's Day");
//	Event event2(18, 0, 11, 1, 2023, "Halloween");
//	event1.printEventData();
//	cout << endl;
//	event2.printEventData();
//	system("pause");
//}
