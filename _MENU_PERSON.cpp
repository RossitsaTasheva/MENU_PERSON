//============================================================================
// Name        : _MENU_PERSON.cpp
// Author      : t
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
//-------------------------------------------------------------
//Globals
string PersonName;
string Occupation;
string Location;
string References;
//-------------------------------------------------------------
//Function Prototypes
void CreatePerson();
void EditPerson();
void DisplayPerson();
void SavePerson();
void LoadPerson();

//-------------------------------------------------------------
int main(int argc, char *argv[]) {

	char CHOICE[10];

	cout << "\n\t Personal Datebase 1.0\n";

	while (CHOICE[0] != 'q') {
		cout << "\n\t-----------------Main Menu---------------";
		cout << "\n\t|                                       |";
		cout << "\n\t|        (C)reat a PERSON               |";
		cout << "\n\t|        (E)dit information for PERSON  |";
		cout << "\n\t|        (D)isplay a PERSON             |";
		cout << "\n\t|        (S) ave a PERSON               |";
		cout << "\n\t|        (L)oad a PERSON                |";
		cout << "\n\t----------------------------------------\n\n\t";

		cin >> CHOICE;

		switch (CHOICE[0]) {
		case 'c':	CreatePerson();	break;
		case 'e':	EditPerson();	break;
		case 'd':	DisplayPerson();break;
		case 's':	SavePerson();	break;
		case 'l':	LoadPerson();	break;
		case 'q':cout << "\n\tExiting Main Menu....";	break;
		default: cout << "\n\tInvalid input!";
		}
	}

	system("PAUSE");

	return 0;
}
//-------------------------------------------------------------
void CreatePerson() {

}
//-------------------------------------------------------------
void EditPerson() {
	system("CLS");
	cout<<"\n\t------------------Edit PERSON-----------------\n";

	cout << "\n\tName: ";
	cin.ignore();
	getline(cin,PersonName);
	cout <<endl;
	cout << "\n\tOccupation: ";
	getline(cin,Occupation);
	cout <<endl;
	cout << "\n\tLocation: ";
	getline(cin,Location);
	cout <<endl;
	cout << "\n\tReferences: ";
	getline(cin,References);

}
//-------------------------------------------------------------
void DisplayPerson() {
	system("CLS");
cout << "\n\n\t--------------PERSON Information------------\n";
cout <<endl<< "Name: " << PersonName <<endl;
cout <<endl<< "Occupation: " << Occupation <<endl;
cout <<endl<< "Location: " << Location <<endl;
cout <<endl<< "References: " << References<<endl;
cout << "\n\t--------------------------------------------\n\n";
}
//-------------------------------------------------------------
void SavePerson() {
	try{
		ofstream DATEFILE;
		DATEFILE.open("DATA1.FILE", ios::out);

		DATEFILE << PersonName << "\n";
		DATEFILE << Occupation << "\n";
		DATEFILE << Location << "\n";
		DATEFILE <<References << "\n";

		DATEFILE.close();
		cout << "\n\tSuccess! DATA was saved to file.";
	}catch(exception &X)
	{ cout << "\n\tFile Error! Could not SAVE PERSON";}
}
//-------------------------------------------------------------
void LoadPerson() {
try{
		ifstream DATEFILE;
		DATEFILE.open("DATA1.FILE", ios::in);

		getline(DATEFILE,PersonName);
		getline(DATEFILE,Occupation);
		getline(DATEFILE,Location);
		getline(DATEFILE,References);

		DATEFILE.close();
		cout << "\n\tSuccess! DATA was loaded.";
}catch(exception &X)
{ cout << "\n\tFile Error! Unable to LOAD data";}
}
//-------------------------------------------------------------
