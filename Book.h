/*Test one programming answer*/

class Book {
    int ISBN;
    char author[20];
	char title[30];
    int year;
  public:
  	Book ();
    Book(int isbn, char* aut, char* t,int y);
	bool isEqual(Book &book) const ;
	void display()const;
};


