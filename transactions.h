#include <stdio.h>


#define		DATE_LENGTH		6
#define		NAME_LENGTH		16


struct Account {
	double balance;
	char name[NAME_LENGTH];
	// TODO: include pointer to .CSV file to store account information and transaction history
};

struct Expense {
	double value;
	char date[DATE_LENGTH];
};

struct Revenue {
	double value;
	char date[DATE_LENGTH];
};


struct Account initAccount(char *name, double initBalance);

struct Expense createExpense(double value, char *date);
void expense(struct Account *accountIdentifier, struct Expense value);

struct Revenue createRevenue(double value, char *date);
void revenue(struct Account *accountIdentifier, struct Revenue value);
