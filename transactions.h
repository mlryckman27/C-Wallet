#include <stdio.h>
#include <string.h>


#define		DATE_LENGTH		6


struct Account;
struct Expense;
struct Revenue;


struct Expense createExpense(double value, char date[DATE_LENGTH]);
void expense(struct Account *accountIdentifier, struct Expense value);
