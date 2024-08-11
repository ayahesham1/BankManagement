#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    float balance;
} Customer;

void createAccount(Customer* customer, int id, const char* name, float initialBalance) {
    customer->id = id;
    strncpy(customer->name, name, sizeof(customer->name));
    customer->balance = initialBalance;
}

void processTransaction(Customer* customer, float amount) {
    customer->balance += amount;
    printf("New balance for %s: %.2f\n", customer->name, customer->balance);
}

int main() {
    Customer customer;
    createAccount(&customer, 1, "John Doe", 1000.00f);
    processTransaction(&customer, 500.00f);
    return 0;
}
