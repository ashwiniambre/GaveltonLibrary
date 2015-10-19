#ifndef FILM_H
#define FILM_H

#include"Media.h"

#include<string>

using namespace std;

class Film :public Media
{
private:
	string director;
	string year;

public:
	Film(string f_cn, string f_ttl, string f_subs, string f_dir, string f_yr, string f_nts);
	virtual void display();
	bool searchByOther(string key);
};

#endif
