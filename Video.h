#ifndef VIDEO_H
#define VIDEO_H

#include"Media.h"

#include<string>
#include<vector>
using namespace std;
class Video :public Media
{
private:
	string description;
	string distributor;
	string series;
	string label;

public:
	Video(string v_cn, string v_ttl, string v_subs, string v_desc, string v_distri, string v_nts, string v_ser, string v_lbl);
	void display();
	bool searchByOther(string key);
};
#endif
