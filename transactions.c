#include <string.h>
#include "transactions.h"


struct Expense createExpense(double value, char *date) {

	struct Expense exp;
	exp.value = value;
	strncpy(exp.date, date, DATE_LENGTH);

	return exp;
}

void expense(struct Account *accountIdentifier, struct Expense value) {
	accountIdentifier->balance += value.value;	
}
