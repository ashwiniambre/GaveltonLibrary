#include "Film.h"
#include "Media.h"

#include <string>
#include <iostream>

using namespace std;

//Book Constructor
Film::Film(string f_cn, string f_ttl, string f_subs, string f_dir, string f_yr, string f_nts)
	:Media(f_cn, f_ttl, f_subs, f_nts), director(f_dir), year(f_yr)
{

}

//member functions
void Film::display()
{
	cout << "---------This is an entry in Film : ---------"<<endl;
	cout << endl;
	Media::display();
	cout << "Director of the film is : " << director << "\n"<<endl;
	cout << endl;
	cout << "Year of Publication is: " << year << "\n" << endl;
	cout << endl;
	cout << "Notes :" << notes << endl;
	cout << endl;
	cout << "---------End of entry : ---------" << "\n" << endl;
}

bool Film::searchByOther(string key)
{
	//cout<<"Search By Other for Film.cpp"<<endl;
	if (this->director.find(key) != string::npos ||
		this->notes.find(key) != string::npos ||
		this->year.find(key) != string::npos)

		return true;
	else
		return false;
}
