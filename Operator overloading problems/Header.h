#pragma once
#pragma once
# include <iostream>
#include<string>
# include <fstream>
# include <iomanip>
using namespace std;
class item
{
private:
	int item_no;
	char item_name[20];
	float price, discount;

public:
	void write_to_file();
	void display_All();
	void display_specific_record(int n);
	void delete_record();
	void Admin_Menu();
	void menu();
	void place_order();
	void Edit();
	void getdata();
	void showdata();
	int retitem_no();
	float retprice();
	char* retitem_name();
	int retdis();


};
class shopkeeper
{
private:
	char First_Name[20], Last_Name[20];
	string User_Name, E_MAIL, Address;
	string S_ID, Password, Pass;
	int  Reg_Date, Contact_No;
	char Gender[2], Blood_Group[2];
public:
	void getdata();
	void showdata();
	char* retFirst_Name();
	char* retLast_Name();
	string retS_ID();
	string retUser_Name();
	string retE_MAIL();
	string retPassword();
	int retReg_Date();
	char* retGender();
	char* retBlood_Group();
	int retContact_NO();
	string retAddress();
	void write_to_file();
	void EDIT();
	void delete_SHOPKEEPER_RECORD();
	void Admin_Menu_1();
};

class Customer
{
private:
	char  First_Name[20], Last_Name[20];
	string Password, User_Name, E_MAIL, Address;
	int  Contact_No;
public:
	void getdata();
	void showdata();
	char* retFirst_Name();
	char* retLast_Name();
	string retUser_Name();
	string retE_MAIL();
	string retPassword();
	int retContact_NO();
	string retAddress();
	void write_to_file();
	void EDIT();
	void delete_CUSTOMER_RECORD();
	void Admin_Menu_2();


};

class product
{
private:
	char Category[20], Product_Name[20], Product_Discription[50];
	int  Product_Quantity;
	string Product_ID;
public:
	void getdata();
	void showdata();
	char* retcategory();
	char* retProduct_Name();
	char* retProduct_Discription();
	string retProduct_ID();
	void write_to_file();
	void display_All();
	void Edit();
};




