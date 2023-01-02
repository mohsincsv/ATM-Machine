#pragma once
#include<iostream>
using namespace std;

class BankAccount
{
protected:
	string BankName;
	string Branch;
	float TotalCash;
public:
	BankAccount();
	BankAccount(string, string, float);

	void setBankName(string);
	void setBranch(string);
	void setTotalCash(float);

	string getBankName() const;
	string getBranch() const;
	float getTotalCash() const;


};