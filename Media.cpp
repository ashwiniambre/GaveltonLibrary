#include "Media.h"
#include "SearchEngine.h"

#include<iostream>

using namespace std;

//Media Constructor
Media::Media(string cn, string ttl, string subs, string nts)
{
	callNumber = cn;
	title = ttl;
	subjects = subs;
	notes = nts;
}

//Date Member Function
bool Media::searchByCallNumber(string cn)
{
	if (this->callNumber.find(cn) != string::npos)
		return true;
	else
		return false;
}
bool Media:: searchByTitle(string ttl)
{
	if (this->title.find(ttl) != string::npos)
		return true;
	else
		return false;
}
bool Media::searchBySubjects(string subs)
{
	if (this->subjects.find(subs) != string::npos)
		return true;
	else
		return false;
}

void Media::display()
{
	cout << "Call Number : " << callNumber << "\n" << endl;
	cout << "Title : " << title << "\n" << endl;
	cout << "Subject : " << subjects << "\n" << endl;
}
