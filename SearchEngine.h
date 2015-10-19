#ifndef SEARCHENGINE_H
#define SEARCHENGINE_H

#include "Media.h"
#include "Book.h"
#include "Periodic.h"
#include "Film.h"
#include "Video.h"

#include<string>
#include<iostream>
#include<vector>
using namespace std;

//All 'Search by <parameter>'queries should hit search engine.
//For search engine to serve the queries it should do real time comparisons with available data
//Read the Library Data <.txt input files> in SearchEngine

class SearchEngine
{
public:
	SearchEngine();
	vector<Media*> searchByCallNumber_SE(string cn);
	vector<Media*> searchByTitle_SE(string ttl);
	vector<Media*> searchBySubjects_SE(string subs);
	vector<Media*> searchByOther_SE(string ttl);

private:
	string p;
	vector <Media*> catalogVector;
	vector <Media*> resultVector;
	
};
#endif
