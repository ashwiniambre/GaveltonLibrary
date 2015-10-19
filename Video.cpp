#include "Video.h"
#include "Media.h"

#include <string>
#include <iostream>

using namespace std;

//Book Constructor
Video::Video(string v_cn, string v_ttl, string v_subs, string v_desc, string v_distri, string v_nts, string v_ser, string v_lbl)
	:Media(v_cn, v_ttl, v_subs, v_nts), description(v_desc), distributor(v_distri), label(v_lbl)
{

}

//member functions
void Video::display()
{
	cout << "---------This is an entry in Video : ---------" << endl;
	cout << endl;
	Media::display();
	cout << "Description of the Video : " << description<< endl;
	cout << endl;
	cout << "Distributor is: " << distributor << endl;
	cout << endl;
	cout << "Series is :" << series << endl;
	cout << endl;
	cout << "Label is: " << label << endl;
	cout << endl;
	cout << "Notes :" << notes << endl;
	cout << endl;
	cout << "---------End of entry : ---------" << "\n" << endl;
}

bool Video::searchByOther(string key)
{
	//cout << "In search by other for Video.cpp" <<endl;
	if (this->description.find(key) != string::npos ||
		this->distributor.find(key) != string::npos ||
		this->notes.find(key) != string::npos ||
		this->label.find(key) != string::npos)
		return true;
	else
		return false;
}
