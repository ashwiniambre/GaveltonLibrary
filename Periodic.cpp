#include "Periodic.h"
#include "Media.h"
#include <string>
#include <iostream>
using namespace std;

//Book Constructor
Periodic::Periodic(string p_cn, string p_ttl, string p_subs, string p_auth, string p_desc, string p_publish, string p_publishHist, string p_ser, string p_nts, string relTtl, string othFormTtl, string docNo) 
	:Media(p_cn, p_ttl, p_subs, p_nts), author(p_auth), description(p_desc), publisher(p_publish), publisherHistory(p_publishHist), series(p_ser), relTitle(relTtl), othFormTitle(othFormTtl), docNumber(docNo)
{

}

//member functions
void Periodic::display()
{
	cout << "---------This is an Entry in Periodic : ---------" << endl;
	cout << endl;
	Media::display();
	cout << "Author: " << author << endl;
	cout << endl;
	cout << "Description: " << description << endl;
	cout << endl;
	cout << "Publisher information: " << publisher << endl;
	cout << endl;
	cout << "Publishing History: " << publisherHistory << endl;
	cout << endl;
	cout << "Series Details: " << series << endl;
	cout << endl;
	cout << "Related titles are: " <<relTitle << endl;
	cout << endl;
	cout << "Other forms of title: " << othFormTitle << endl;
	cout << endl;
	cout << "Govt doc number: " << docNumber << endl;
	cout << endl;
	cout << "Notes :" << notes << endl;
	cout << endl;
	cout << "---------End of entry : ---------" << "\n" << endl;
}

bool Periodic::searchByOther(string key)
{
	//cout << "In search by other for Periodic.cpp" <<endl;
	if (this->author.find(key) != string::npos ||
		this->publisher.find(key) != string::npos ||
		this->publisherHistory.find(key) != string::npos ||
		this->series.find(key) != string ::npos ||
		this->relTitle.find(key) != string::npos ||
		this->docNumber.find(key) != string::npos ||
		this->notes.find(key) != string::npos ||
		this->othFormTitle.find(key) != string::npos )

		return true;
	else
		return false;
}
