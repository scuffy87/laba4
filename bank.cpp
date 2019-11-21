#include "bank.h"

using namespace std;

Bank::Bank(){
	string country;
	string name;
	int databuilt;
	int clients;
	int credits;
	int deposit;
	int rating;
}

Bank::Bank(string valueCountry, string valueName, int valueDatabuilt, int valueClients, int valueCredits, int valueDeposit, int valueRating){
	country = valueCountry;
	name = valueName;
	databuilt = valueDatabuilt;
	clients = valueClients;
	credits = valueCredits;
	deposit = valueDeposit;
	rating = valueRating;
}
	
	string Bank::GetCountry(){
		return country;
	}
	string Bank::GetName(){
		return name;
	}
	int Bank::GetDatabuilt(){
		return databuilt;
	}
	int Bank::GetClients(){
		return clients;
	}
	int Bank::GetCredits(){
		return credits;
	}
	int Bank::GetDeposit(){
		return deposit;
	}
	int Bank::GetRating(){
		return rating;
	}
	
	void Bank::Print(){
		cout << "\n Country is: " << GetCountry() << "\n Your name is: " << GetName() << "\n Data of built: " << GetDatabuilt() << "\n Number of clients: " << GetClients() << "\n Number of credits: " << GetCredits() << "\n Your deposit is: " << GetDeposit() << "\n Your rate of bank: " << GetRating() << endl;
	}

	Bank::~Bank(){
		cout << "\n The end of program, tnx for using us!" << endl;
	}