//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book
//{
//private:
//    static int total_books;
//    static int available_books;
//    string author;
//    string title;
//
//public:
//    Book() : author(""), title("")
//    {
//        total_books++;
//        available_books++;
//    }
//
//    Book(string a, string t) 
//    {
//        author = a;
//        title = t;
//        total_books++;
//        available_books++;
//    }
//    ~Book() 
//    {
//        total_books--;
//        available_books--;
//    }
//
//    void displayInfo()
//    {
//        cout << "Title: " << title << ", Author: " << author << endl;
//    }
//
//    static int get_totalBooks() {
//        return total_books;
//    }
//
//    static int get_availableBooks() 
//    {
//        return available_books;
//    }
//};
//int Book::total_books = 0;
//int Book::available_books = 0;
//class Library 
//{
//private:
//    static const int max_books = 100;
//    Book books_library[max_books];
//    int numbooks_library;
//public:
//    Library() : numbooks_library(0) {}
//    void addBook(const Book& book) 
//    {
//        if (numbooks_library < max_books) 
//        {
//            books_library[numbooks_library] = book;
//            numbooks_library++;
//            cout << "Book added successfully." << endl;
//        }
//        else 
//        {
//            cout << "Library is full. Cannot add more books." << endl;
//        }
//    }
//
//    void displayBooksInLibrary() 
//    {
//        cout << "Books available in the library:" << endl;
//        for (int i = 0; i < numbooks_library; ++i) {
//            books_library[i].displayInfo();
//        }
//    }
//};
//
//int main()
// {
//    Book book1("Author1", "Title1");
//    Book book2("Author2", "Title2");
//    Book book3("Author3", "Title3");
//
//    Library library;
//    library.addBook(book1);
//    library.addBook(book2);
//    library.addBook(book3);
//
//    cout << "Total Books: " << Book::get_totalBooks() << endl;
//    cout << "Available Books: " << Book::get_availableBooks() << endl;
//
//    library.displayBooksInLibrary();
//
//    system("pause");
//}
