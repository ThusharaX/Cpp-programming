// Paper Version : D

#include<iostream>

using namespace std;

// Class declarration
class Book {
    private:
        int bookID;
        string bookName;
        string author;
    public:
        void setBookDetails(int bID, string bN, string a);
        void displayBookDetails();
        void setBookID(int i);
};


int main() {

	// Create an Objects
    Book b1, b2, b3;
	
	// Set values to Objects
    b1.setBookDetails(1212, "Jane Eyre", "Charlotte Bronte");
    b2.setBookDetails(1234, "Divergent", "Veronica Roth");
    b3.setBookDetails(3456, "Matilda", "Roald Dahl");

    // Calling setBookID() Method
	b1.setBookID(1);
	b2.setBookID(2);
	b3.setBookID(3);
	
    // Calling displayBookDetails() Method
    b1.displayBookDetails();
    b2.displayBookDetails();
    b3.displayBookDetails();

    return 0;
}

// Class methods definition 
void Book::setBookDetails(int bID, string bN, string a) {
    bookID = bID;
    bookName = bN;
    author = a;
}

void Book::displayBookDetails() {
    cout << endl << "BookID = " << bookID << endl;
    cout << "BookName = " << bookName << endl;
    cout << "Author = " << author << endl;
}

void Book::setBookID(int i) {
    cout << "Input new book ID " << i << ": ";
    cin >> bookID;
}
