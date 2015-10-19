#include "Book.h"
#include "Media.h"
#include <string>
#include <iostream>
using namespace std;

//Book Constructor
Book::Book(string b_cn, string b_ttl, string b_subs, string b_auth, string b_desc, string b_publish, string b_city, string b_yr, string b_ser, string b_nts)
	:Media(b_cn, b_ttl, b_subs, b_nts), author(b_auth), description(b_desc), publisher(b_publish), city(b_city), year(b_yr), series(b_ser)
{
	
}

//member functions
void Book::display()
{
	cout << "---------This is an entry in Book : ---------" << endl;
	cout << endl;
	Media::display();
	cout << "Author: "<<author << endl;
	cout << endl;
	cout << "Description: "<<description << endl;
	cout << endl;
	cout << "Publisher information: "<<publisher << endl;
	cout << endl;
	cout << "City: "<<city << endl;
	cout << endl;
	cout << "Year of Publication: "<<year << endl;
	cout << endl;
	cout << "Series Details: "<<series << endl;
	cout << endl;
	cout << "Notes :" << notes << endl;
	cout << endl;
	cout << "---------End of entry : ---------" << "\n" << endl;
}

bool Book::searchByOther(string key)
{
	//cout << "In search by other for Book.cpp" <<endl;
	if (this->author.find(key) != string::npos ||
		this->notes.find(key) != string::npos ||
		this->description.find(key) != string::npos ||
		this->city.find(key) != string::npos ||
		this->publisher.find(key) != string::npos ||
		this->year.find(key) != string::npos ||
		this->series.find(key) != string::npos)
		return true;
	else
		return false;
}
