#pragma once
#include<iostream>
#include<ctime>
using namespace std;

#include"Card.h"
#include"CheckingAccount.h"
#include"SavingAccount.h"

class User
{
private:
	string Name;
	string PhoneNumber;
	string Address;
	string acc_type;
	Card C;
	SavingAccount SA;
	CheckingAccount CA;
public:
	// C O N S T R U C T O R S
	User();
	User(string, string, string, int, string, string, float, float, float, string);
	User(const User&);

	// S E T T E R S
	void setName(string);
	void setPhoneNumber(string);
	void setAddress(string);
	void setAcc_Type(string);

	void setSavingAccount(string, string, float, float);
	void setCheckingAccount(string, string, float, float);

	void setTransferedMoney_S_C(User&, float, float);
	void setTransferedMoney_C_C(User&, float, float);
	void setTransferedMoney_S_S(User&, float, float);
	void setTransferedMoney_C_S(User&, float, float);

	// G E T T E R S
	string getName() const;
	string getPhoneNumber() const;
	string getAddress() const;
	string getAcc_Type() const;

	// M E M B E R	F U N C T I O N S
	int getCardPIN();
	long long int getCardNum();
	float getBalance(string);
	void Withdrawl(float&);
	void FAST_CASH(float&, bool&);
	void Choose_Account(string, string, float, float, float);

	// O P E R A T O R	O V E R L O A D I N G
	User operator=(const User&);
	User operator-();
	User operator*();
	User operator%(User&);
	User operator^(User&);

	friend istream& operator>>(istream&, User&);
	friend ostream& operator<<(ostream&, const User&);

	~User();
};