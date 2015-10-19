#ifndef BOOK_H
#define BOOK_H
#include<string>
#include<vector>
#include"Media.h"
using namespace std;
class Book :public Media
{
private:
	string author;
	string description;
	string publisher;
	string city;
	string year;
	string series;
public:
	Book(string b_cn, string b_ttl, string b_subs, string b_auth, string b_desc, string b_publish, string b_city, string b_yr, string b_ser, string b_nts);
	void display();
	bool searchByOther(string key);
};
#endif
