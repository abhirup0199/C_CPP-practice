#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account number and initial balance
    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New balance: " << balance << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal!" << endl;
        }
    }

    // Member function to display account details
    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    int accountNumber;
    double initialBalance, depositAmount, withdrawalAmount;

    // Taking user input for account number and initial balance
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    // Create a BankAccount object
    BankAccount myAccount(accountNumber, initialBalance);

    // Display initial account information
    myAccount.displayAccountInfo();

    // Taking input for deposit amount
    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    myAccount.deposit(depositAmount);

    // Taking input for withdrawal amount
    cout << "\nEnter amount to withdraw: ";
    cin >> withdrawalAmount;
    myAccount.withdraw(withdrawalAmount);

    // Display final account information
    cout << "\nFinal Account Details: " << endl;
    myAccount.displayAccountInfo();

    return 0;
}
