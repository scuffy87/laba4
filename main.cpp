#include <iostream>
#include "bank.h"

int main() {
//===========================================================================
	int databuilt1, clnts = 0, crdts = 0, dep = 0, rait = 0;
	string name1 = "", country1 = "";
	int databuilt2, clnts2 = 0, crdts2 = 0, dep2 = 0, rait2 = 0;
	string name2 = "", country2 = "";
	int databuilt3, clnts3 = 0, crdts3 = 0, dep3 = 0, rait3 = 0;
	string name3 = "", country3 = "";

	cout << "1) Input country: ";
	cin >> country1;
	cout << "2) Input country: ";
	cin >> country2;
	cout << "3) Input country: ";
	cin >> country3;
	cout << "1) Input name: ";
	cin >> name1;
	cout << "2) Input name: ";
	cin >> name2;
	cout << "3) Input name: ";
	cin >> name3;
	cout << "1) Input data of built: ";
	cin >> databuilt1;
	cout << "2) Input data of built: ";
	cin >> databuilt2;
	cout << "3) Input data of built: ";
	cin >> databuilt3;
	cout << "1) Input clients: ";
	cin >> clnts;
	cout << "2) Input clients: ";
	cin >> clnts2;
	cout << "3) Input clients: ";
	cin >> clnts3;
	cout << "1) Input credits: ";
	cin >> crdts;
	cout << "2) Input credits: ";
	cin >> crdts2;
	cout << "3) Input credits: ";
	cin >> crdts3;
	cout << "1) Input deposit: ";
	cin >> dep;
	cout << "2) Input deposit: ";
	cin >> dep2;
	cout << "3) Input deposit: ";
	cin >> dep3;
	cout << "1) Input your rating of bank: ";
	cin >> rait;
	cout << "2) Input your rating of bank: ";
	cin >> rait2;
	cout << "3) Input your rating of bank: ";
	cin >> rait3;
//===========================================================================

	Bank firstBank(country1, name1, databuilt1, clnts, crdts, dep, rait);
	firstBank.Print();

	Bank secondBank(country2, name2, databuilt2, clnts2, crdts2, dep2, rait2);
	secondBank.Print();

	Bank thirdBank(country3, name3, databuilt3, clnts3, crdts3, dep3, rait3);
	thirdBank.Print();

	return 0;
}