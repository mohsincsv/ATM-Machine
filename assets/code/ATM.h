#pragma once
#include"User.h"

class ATM
{
protected:
	// Take Input From User And Validate the Card Number and PIN entered by user.
	User U;
public:
	ATM();
	ATM(User*);

	User TakeInputs(User*, int&, int);
	bool Validate(User&, int = 0, long long int = 0);
};