//This project is prepared by dev patel,hari patel,rony padmani
#include<iostream>
#include<string>
using namespace std;

class atm{
private:										// private member varibles
	long int account_No;
	string name;
	int PIN;
	double balance;
	string mobile_No;
public:											// public member functions

	// setData function is setting the Data into the private member variables
	void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
	{
		account_No = account_No_a;	 // assigning the formal arguments to the private member var's
		name = name_a;
		PIN = PIN_a;
		balance = balance_a;
		mobile_No = mobile_No_a;
	}

	//getAccountNo function is returning the user's account no.
	long int getAccountNo()
	{
		return account_No;
	}

	//getName function is returning the user's Name
	string getName()
	{
		return name;
	}
};
