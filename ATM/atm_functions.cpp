#include <iostream>
#include "atm_functions.h"

public get_user_card(int pin, int transaction)
{
	if (pin == PIN)
	{
		printf("Welcome, please choose your transaction\n");
		printf("1. Withdraw cash");
		printf("2. Check balance");
		printf("3. Transfer money to IBAN");

		if (transaction == 1)
		{
			withdraw_cash();
		}
		else if (transaction == 2)
		{
			show_balance();
		}
		else if (transaction == 3)
		{
			transfer_money();
		}
		else
		{
			printf("Invalid operation!");
			return 0;
		}
	}
	else
	{
		printf("The pin is incorrect please remove your card and try again!")
			return 0;
	}
	return 0;
}

public withdraw_cash(int balance, int withdraw)
{
	int new_balance = balance - withdraw;
	printf("You withdrawed %i EUR", withdraw);
	show_balance(new_balance);
	return 0;
}

public show_balance(int balance)
{
	printf("Your current balance is: %i EUR", balance);
	return 0;
}

public transfer_money(int balance, char iban[], int transfer)
{
	printf("Insert IBAN: \n");
	scanf("%c", &iban[]);

	printf("Insert the amount you would like to transfer: ");
	scanf("%i", &transfer);

	int new_balance = 0;


	if (strlen(iban) > 15)
	{
		printf("Invalid IBAN!");
		return 0;
	}
	else
	{
		new_balance = balance - transfer;
		printf("Transaction completed successfully!");
		show_balance(new_balance);
	}
	return 0;
}

