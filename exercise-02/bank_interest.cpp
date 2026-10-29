#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    string holder;
    double balance;
    static double interestRate;

public:
    BankAccount(const string &name, double initialBalance)
        : holder(name), balance(initialBalance) {}

    static void setInterestRate(double rate) {
        if (rate < 0) {
            cout << "Invalid interest rate. Rate not changed.\n";
            return;
        }
        interestRate = rate;
    }

    static double getInterestRate() { return interestRate; }

    void applyInterest() {
        balance += balance * interestRate / 100.0;
    }

    void display() const {
        cout << left << setw(10) << holder
             << " | Balance: Rs. " << fixed << setprecision(2) << balance << endl;
    }
};

double BankAccount::interestRate = 4.0;

int main() {
    BankAccount a1("Aarav", 10000.0);
    BankAccount a2("Diya", 25000.0);
    BankAccount a3("Kabir", 50000.0);

    cout << "Default interest rate: " << BankAccount::getInterestRate() << "%\n\n";

    cout << "--- Initial balances ---\n";
    a1.display(); a2.display(); a3.display();

    cout << "\n--- Applying interest at default rate ---\n";
    a1.applyInterest(); a2.applyInterest(); a3.applyInterest();
    a1.display(); a2.display(); a3.display();

    BankAccount::setInterestRate(6.5);
    cout << "\nInterest rate updated to " << BankAccount::getInterestRate()
         << "% for all accounts\n";

    cout << "\n--- Applying interest at new rate ---\n";
    a1.applyInterest(); a2.applyInterest(); a3.applyInterest();
    a1.display(); a2.display(); a3.display();

    cout << "\n--- Trying an invalid rate ---\n";
    BankAccount::setInterestRate(-2);
    cout << "Current rate is still " << BankAccount::getInterestRate() << "%\n";
    return 0;
}
