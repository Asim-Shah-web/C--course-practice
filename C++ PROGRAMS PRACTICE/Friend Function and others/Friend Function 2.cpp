#include <iostream>
using namespace std;
class BankAccount;
class Transaction {
public:
    static void transfer(BankAccount& from, BankAccount& to, double amount);
};
class BankAccount {
private:
    string ownerName;
    double balance;

public:
    BankAccount(string name, double initialBalance) : ownerName(name), balance(initialBalance) 
	{}

    // Allow the Transaction class to access private members
    friend void Transaction::transfer(BankAccount& from, BankAccount& to, double amount);

    void displayBalance() {
        cout << "Owner: " << ownerName << ", Balance: " << balance <<endl;
    }
};

// Friend function implementation
void Transaction::transfer(BankAccount& from, BankAccount& to, double amount) {
    if (amount <= from.balance) {
        from.balance -= amount;
        to.balance += amount;
        cout << "Transfer successful!" <<endl;
    } 
	else 
	{
        cout << "Insufficient funds for transfer!" <<endl;
    }
}

int main() 
{
    BankAccount acc1("Alice", 1000.0);
    BankAccount acc2("Bob", 500.0);

    acc1.displayBalance();
    acc2.displayBalance();

    // Perform a transfer from acc1 to acc2
    Transaction::transfer(acc1, acc2, 300.0);

    acc1.displayBalance();
    acc2.displayBalance();
    return 0;
}
