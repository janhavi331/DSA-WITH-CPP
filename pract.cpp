#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
// Base class Publication
class Publication {
protected:
 string title;
 float price;
public:
 // Constructor
 Publication(const string& title = "", float price = 0.0f)
 : title(title), price(price) {}
 // Virtual display function
 virtual void display() const {
 cout << "Title: " << title << endl;
 cout << "Price: $" << price << endl;
 }
};
// Derived class Book
class Book : public Publication {
private:
 int page_count;
public:
 // Constructor
 Book(const string& title = "", float price = 0.0f, int page_count = 0)
 : Publication(title, price), page_count(page_count) {}
 // Display function
 void display() const override {
 Publication::display();
 cout << "Page Count: " << page_count << endl;
 }
};
// Derived class Tape
class Tape : public Publication {
private:
 float playing_time;
public:
 // Constructor
 Tape(const string& title = "", float price = 0.0f, float playing_time = 0.0f)
 : Publication(title, price), playing_time(playing_time) {}
 // Display function
 void display() const override {
 Publication::display();
 cout << "Playing Time: " << playing_time << " minutes" << endl;
 }
};
int main() {
 try {
 string book_title, tape_title;
 float book_price, tape_price, tape_playing_time;
 int book_page_count;
 // Get input for Book
 cout << "Enter details for the Book:" << endl;
 cout << "Enter book title: ";
 getline(cin, book_title); // to handle multi-word titles
 cout << "Enter book price: ";
 cin >> book_price;
 cout << "Enter page count: ";
 cin >> book_page_count;
 // Clear the buffer before getting tape title
 cin.ignore(); // Ignore any leftover newline characters
 // Get input for Tape
 cout << "\nEnter details for the Tape:" << endl;
 cout << "Enter tape title: ";
 getline(cin, tape_title); // to handle multi-word titles
 cout << "Enter tape price: ";
 cin >> tape_price;
 cout << "Enter playing time in minutes: ";
 cin >> tape_playing_time;
 // Instantiate the objects
 Book book(book_title, book_price, book_page_count);
 Tape tape(tape_title, tape_price, tape_playing_time);
 // Display the entered information
 cout << "\nBook Details:" << endl;
 book.display();
 cout << "\nTape Details:" << endl;
 tape.display();
 }
 catch (const exception& e) {
 cout << "An error occurred. Replacing all values with default zero values." << endl;
 // Create zero-value objects
 Book book("No Title", 0.0f, 0);
 Tape tape("No Title", 0.0f, 0.0f);
 // Display zero values
 cout << "\nBook Details:" << endl;
 book.display();
 cout << "\nTape Details:" << endl;
 tape.display();
 }
 return 0;
}