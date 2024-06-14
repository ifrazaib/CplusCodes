//// customer_data.cpp
//#include "customer_data.h"
//
//customer_data::customer_data(std::string f_name, std::string l_name, std::string add, double amo)
//    : person_data(f_name, l_name, add), amount(amo) {
//    update_discount();
//}
//
//void customer_data::update_discount() {
//    if (amount >= 2000) {
//        discount = 0.10;
//    }
//    else if (amount >= 1500) {
//        discount = 0.07;
//    }
//    else if (amount >= 1000) {
//        discount = 0.06;
//    }
//    else if (amount >= 500) {
//        discount = 0.05;
//    }
//    else {
//        discount = 0.0;
//    }
//}
//
//void customer_data::display() {
//    std::cout << "Total Purchase $ = " << amount << std::endl;
//    std::cout << "Discount level = " << (discount * 100) << "%" << std::endl;
//}
// customer_data.cpp
//#include "customer_data.h"
//#include <iostream>
//using namespace std;
//int customer_data::get_customer_number() {
//    return customer_number;
//}
//
//void customer_data::set_customer_number(int c_num) {
//    customer_number = c_num;
//}
//
//bool customer_data::get_mailing_list() {
//    return mailing_list;
//}
//
//void customer_data::set_mailing_list(bool m_list) {
//    mailing_list = m_list;
//}
//
//void customer_data::input_data() {
//    std::string f_name;
//    std::string l_name;
//    std::string address;
//    int customer_number;
//    bool m_list;
//
//    std::cout << "Enter your first name: ";
//    getline(std::cin, f_name);
//
//    std::cout << "Enter your last name: ";
//    getline(std::cin, l_name);
//
//    std::cout << "Enter your address: ";
//    getline(std::cin, address);
//
//    std::cout << "Enter 1 if you are on the mailing list, or 0 if you are not: ";
//    std::cin >> m_list;
//    cout << "enter your customer number:";
//    cin >> customer_number;
//    set_first_name(f_name);
//    set_last_name(l_name);
//    set_mailing_list(m_list);
//    set_customer_number(customer_number);
//    set_address(address);
//}
//
//void customer_data::output_data() {
//    std::cout << "First Name = " << get_first_name() << std::endl;
//    std::cout << "Last Name = " << get_last_name() << std::endl;
//    std::cout << "Address of = " << get_address() << std::endl;
//    std::cout << "Mailing list = " << get_mailing_list() << std::endl;
//    std::cout << "Customer Number = " << get_customer_number() << std::endl;
//}
//
