#include "BankAccount.h"

BankAccount::BankAccount()
{
	BankName = '\0';
	Branch = '\0';
	TotalCash = 0.0;
}

BankAccount::BankAccount(string Bname, string branch, float cash)
{
	BankName = Bname;
	Branch = branch;
	TotalCash = cash;
}

void BankAccount::setBankName(string Bname)
{
	BankName = Bname;
}

void BankAccount::setBranch(string bran)
{
	Branch = bran;
}

void BankAccount::setTotalCash(float Cash)
{
	TotalCash = Cash;
}

string BankAccount::getBankName() const
{
	return BankName;
}

string BankAccount::getBranch() const
{
	return Branch;
}

float BankAccount::getTotalCash() const
{
	return TotalCash;
}
