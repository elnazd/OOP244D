/*Test one programming answer*/
#include <iostream>
#include <iomanip>
#include "Book.h"
using namespace std;

Book::Book(){
	ISBN=0;
	author[0]='\0';
	title[0]='\0';
	year= 0;
}

Book::Book(int isbn, char* aut, char* t,int y){
	if(ISBN >=100000000 && ISBN<1000000000 &&
	   aut!=nullptr && strlen(aut) &&
	   t!=nullptr && strlen(t) &&
	   y>0 && y<=2014){
    	ISBN=isbn;
    	strcpy(author,aut);
		strcpy(title,t);
    	year=y;
	}else
		*this=Book();

}
bool Book::isEqual(Book &book) const {
    if (!strcmp(book.title,title) && !strcmp(book.author,author))
        return true;
    else
        return false;
}
void Book::display()const {
	if(ISBN)
	cout << setw(13) << left << ISBN
	     << setw(21) << author
	     << setw(30) << setfill('-')<< title
	     << setw(5) << right << year
	     << setfill(' ') << endl;
}

 int main() {
     Book book1(123456789, "Jane Austen","Persuasion", 1818);
     Book book2(542163987, "Victor Hugo", "Les Miserables", 1862);

	 book1.display();
	 book2.display();
	 cout << endl;
     if (book1.isEqual(book2))
        cout << "The books are equal!"<< endl;
	 else
		cout << "The books are not equal!"<< endl;

	return 0;
 }


