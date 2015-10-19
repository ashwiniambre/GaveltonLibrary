#ifndef MEDIA_H
#define MEDIA_H

#include<string>

using namespace std;

class Media
{
private:
	string callNumber;
	string title;
	string subjects;
protected:
	string notes;

public:
	Media(string cn, string ttl, string subs, string nts);
	bool searchByCallNumber(string cn);
	bool searchByTitle(string ttl);
	bool searchBySubjects(string subs);

	virtual bool searchByOther(string key) = 0;
	virtual void display();
};
#endif
