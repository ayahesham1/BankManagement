#include <stdio.h>
#include "admin.h"

void adminViewAllAccounts(CustomerManager* manager) {
    for (int i = 0; i < manager->count; ++i) {
        Customer* customer = &manager->customers[i];
        printf("Customer ID: %d, Name: %s, Balance: %.2f\n", 
               customer->id, customer->name, customer->balance);
    }
}

void adminViewTotalBalance(CustomerManager* manager) {
    float totalBalance = 0;
    for (int i = 0; i < manager->count; ++i) {
        totalBalance += manager->customers[i].balance;
    }
    printf("Admin: Total balance across all accounts: %.2f\n", totalBalance);
}

void adminViewAllTransactions(CustomerManager* manager) {
    printf("Admin: Viewing all transactions\n");
    for (int i = 0; i < manager->count; ++i) {
        const Customer* customer = &manager->customers[i];
        printf("Customer ID: %d, Name: %s\n", customer->id, customer->name);
        for (int j = 0; j < customer->transactionCount; ++j) {
            printf("Transaction %d: Amount: %.2f, Description: %s\n",
                   j + 1, customer->transactions[j].amount, customer->transactions[j].description);
        }
    }
}

