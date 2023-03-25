#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

//implement the book class
class Book
{
	private :
		int bookID;
		char bookName[50];	
		char author[50];
	public :
		void setBookDetails(int pID , char *pName , char *pAuther);
		void displayBookDetails();
		void setBookID(int pID);
};

//implement public functions
void Book::setBookDetails(int pID , char *pName , char *pAuthor)
{
	bookID = pID;
	strcpy (bookName , pName);
	strcpy (author , pAuthor);
}
void Book::displayBookDetails()
{
	cout << endl;
	cout << "BookID = " << bookID << endl;
	cout << "BookName = " << bookName << endl;
	cout << "Author = " << author << endl;
}
void Book::setBookID(int pID)
{
	bookID = pID;
}
//implement main function
int main()
{
	int ID[3] , i;
	
	//create objects
	Book b1 , b2 , b3;
	
	//set details
	b1.setBookDetails(1212 , "Jane Eyre" , "Charlotte Bronte");
	b2.setBookDetails(1234 , "Disvergent" , "Veronica Roth");
	b3.setBookDetails(3456 , "Matilda" , "Ronald Dahl");
	
	//set book ID
	for (i = 0 ; i < 3 ; i++)
	{
		cout << "Enter new bood ID " << i + 1 << " : " << flush;
		cin >> ID[i];
	}
	b1.setBookID(ID[0]);
	b2.setBookID(ID[1]);
	b3.setBookID(ID[2]);
	
	//display details
	b1.displayBookDetails();
	b2.displayBookDetails();
	b3.displayBookDetails();
	
	return 0;
}
