//
//  SerachEngine.cpp
//  Gavelton Library
//
//  Created by Ashwini Ambre
//  Date : 9/10/2014.
// 

#include "SearchEngine.h"
#include "Media.h"
#include "Book.h"
#include "Periodic.h"
#include "Video.h"
#include "Film.h"

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

SearchEngine::SearchEngine()
{

	//Read input files
	string lineBook;
	ifstream readFromBook("C:\\Users\\ashwi\\Downloads\\511_OOP_Fall2014_Library_Ashwini\\book.txt");
	
	//Other way to do this can be 
	//ifstream var; 
	//var.open("filename.extension");
	//Book has 10 attributes
	string at1, at2, at3, at4, at5, at6, at7, at8, at9, at10;
	if (readFromBook.is_open())
	{
		//reading input in 'line'. 'line'=all data in book.txt
		while (!readFromBook.eof())
		{
			while (!getline(readFromBook, lineBook).eof())
			{ 
				getline(readFromBook, at1, '|');
				getline(readFromBook, at2, '|');
				getline(readFromBook, at3, '|');
				getline(readFromBook, at4, '|');
				getline(readFromBook, at5, '|');
				getline(readFromBook, at6, '|');
				getline(readFromBook, at7, '|');
				getline(readFromBook, at8, '|');
				getline(readFromBook, at9, '|');
				getline(readFromBook, at10);

				Book *book = new Book(at1, at2, at3, at4, at5, at6, at7, at8, at9, at10);
				catalogVector.push_back(book);
			}
			//stringstream tempRead(lineBook);
		}
	}
	
	//else part for the above if statement is not required since the input file is already present
	//Also we are not asking user to provide input for the file that is to be read
	else
	{
		cout << "File not found";
	}
	readFromBook.close();

	string linePeriodic;
	ifstream readFromPeriodic("C:\\Users\\ashwi\\Downloads\\511_OOP_Fall2014_Library_Ashwini\\periodic.txt");
	string p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12;
	if (readFromPeriodic.is_open())
	{
		//reading input in 'line'. 'line'=all data in book.txt
		while (!getline(readFromPeriodic, linePeriodic).eof())
		{
			stringstream tempRead(linePeriodic);
			getline(tempRead, p1, '|');
			getline(tempRead, p2, '|');
			getline(tempRead, p3, '|');
			getline(tempRead, p4, '|');
			getline(tempRead, p5, '|');
			getline(tempRead, p6, '|');
			getline(tempRead, p7, '|');
			getline(tempRead, p8, '|');
			getline(tempRead, p9, '|');
			getline(tempRead, p10, '|');
			getline(tempRead, p11, '|');
			getline(tempRead, p12);

			Periodic *periodic = new Periodic(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
			catalogVector.push_back(periodic);
		}
	}
	
	else
	{
		cout << "File not found";
	}
	readFromPeriodic.close();


	string lineFilm;
	ifstream readFromFilm("C:\\Users\\ashwi\\Downloads\\511_OOP_Fall2014_Library_Ashwini\\film.txt");
	string f1, f2, f3, f4, f5, f6;
	if (readFromFilm.is_open())
	{
		//reading input in 'line'. 'line'=all data in film.txt
		while (!getline(readFromFilm, lineFilm).eof())
		{
			stringstream tempRead(lineFilm);
			getline(tempRead, f1, '|');
			getline(tempRead, f2, '|');
			getline(tempRead, f3, '|');
			getline(tempRead, f4, '|');
			getline(tempRead, f5, '|');
			getline(tempRead, f6);
			//Film(string f_cn, string f_ttl, string f_subs, string f_dir, string f_yr, string f_nts)
			Film *film = new Film(f1, f2, f3, f4, f6, f5);
			catalogVector.push_back(film);
		}
	}

	else
	{
		cout << "File not found";
	}
	readFromFilm.close();
	
	string lineVideo;
	ifstream readFromVideo("C:\\Users\\ashwi\\Downloads\\511_OOP_Fall2014_Library_Ashwini\\video.txt");
	string v1, v2, v3, v4, v5, v6, v7, v8;
	if (readFromVideo.is_open())
	{
		//reading input in 'line'. 'line'=all data in book.txt
		while (!getline(readFromVideo, lineVideo).eof())
		{
			stringstream tempRead(lineVideo);
			getline(tempRead, v1, '|');
			getline(tempRead, v2, '|');
			getline(tempRead, v3, '|');
			getline(tempRead, v4, '|');
			getline(tempRead, v5, '|');
			getline(tempRead, v6, '|');
			getline(tempRead, v7, '|');
			getline(tempRead, v8);

			Video *video = new Video(v1, v2, v3, v4, v5, v6, v7, v8);
			catalogVector.push_back(video);
		}
	}

	else
	{
		cout << "File not found";
	}
	readFromVideo.close();

	
}

vector<Media*> SearchEngine:: searchByCallNumber_SE(string cn)
{
	resultVector.clear();
	for (unsigned int i = 0; i < catalogVector.size(); i++)
	{
		bool answer=catalogVector[i]->searchByCallNumber(cn);
		if (answer)
		{
			resultVector.push_back(catalogVector[i]);
		}
	}
	return resultVector;
	//cout << resultVector.size();//To check if vector had any results when the search function was called
}

vector<Media*> SearchEngine::searchByTitle_SE(string ttl)
{
	resultVector.clear();
	for (unsigned int i = 0; i < catalogVector.size(); i++)
	{
		bool answer = catalogVector[i]->searchByTitle(ttl);
		if (answer)
		{
			resultVector.push_back(catalogVector[i]);
		}
	}
	return resultVector;
}

vector<Media*> SearchEngine::searchBySubjects_SE(string subs)
{
	resultVector.clear();
	for (unsigned int i = 0; i < catalogVector.size(); i++)
	{
		bool answer = catalogVector[i]->searchBySubjects(subs);
		if (answer)
		{
			resultVector.push_back(catalogVector[i]);
		}
	}
	return resultVector;
}

vector<Media*> SearchEngine::searchByOther_SE(string key)
{
	resultVector.clear();
	for (unsigned int i = 0; i < catalogVector.size(); i++)
	{
		bool answer = catalogVector[i]->searchByOther(key);
		if (answer)
		{
			resultVector.push_back(catalogVector[i]);
		}
	}
	return resultVector;
}
