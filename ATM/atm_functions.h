#ifndef ATM_FUNCTIONS_H
#define ATM_FUNCTIONS_H

#define PIN = 1234;
#define MAX_BALANCE = 10000 //EUR

public get_user_card(int pin, int transaction);
public withdraw_cash(int balance, int withdraw);
public show_balance(int balance);
public transfer_money(int balance, char iban[], int transfer);

#endif