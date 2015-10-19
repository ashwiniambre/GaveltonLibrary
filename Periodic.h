#ifndef PERIODIC_H
#define PERIODIC_H

#include"Media.h"

#include<string>
#include<vector>
using namespace std;

class Periodic :public Media
{
private:
	string author;
	string description;
	string publisher;
	string publisherHistory;
	string series;
	string relTitle;
	string othFormTitle;
	string docNumber;

public:
	Periodic(string p_cn, string p_ttl, string p_subs, string p_auth, string p_desc, string p_publish, string p_publishHist, string p_ser, string p_nts, string relTtl, string othFormTitle, string docNumber);
	void display();
	bool searchByOther(string key);
};
#endif
