#ifndef bank_H
#define bank_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Bank{
private:
	string name;

	int clients;
	int credits;
protected:
	int deposit;
	int rating;
public:
	string country;
	int databuilt;

	Bank(); // konstruktor po umolchianiu

	~Bank(); // destruktor

	Bank(string valueCountry, string valueName, int valueDatabuilt, int valueClients, int valueCredits, int valueDeposit, int valueRating);
	
	string GetCountry();

	string GetName();

	int GetDatabuilt();

	int GetClients();

	int GetCredits();
		
	int GetDeposit();
		
	int GetRating();
		
	void Print();
};

#endif