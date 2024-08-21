#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize a new bank account
    BankAccount(string name, int accNumber, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to assign values to the account
    void assignValues(string name, int accNumber, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Amount withdrawn: $" << amount << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    // Function to display the name and balance
    void display() const {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Creating an instance of BankAccount
    BankAccount account("Vraj Patel", 123456, "Checking", 500.0);

    // Displaying initial account details
    account.display();
    
    // Depositing some amount
    account.deposit(150.0);
    
    // Withdrawing some amount
    account.withdraw(200.0);
    
    // Trying to withdraw more than balance
    account.withdraw(600.0);
    
    // Displaying account details after transactions
    account.display();

    return 0;
}

