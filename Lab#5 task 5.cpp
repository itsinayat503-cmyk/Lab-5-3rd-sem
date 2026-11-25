#include <iostream>
using namespace std;
class Account {
protected:
    double Balance;
public:
    void setBalance(double b) {
        Balance = b;
    }
    double getBalance() {
        return Balance;
    }
};
class SavingsAccount : public Account {
public:
    SavingsAccount(double initialBalance) {
        Balance = initialBalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            Balance += amount;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= Balance) {
            Balance -= amount;
        }
    }
};
int main() {
    SavingsAccount sa(10000);

   sa.deposit(2000);
    cout << sa.getBalance() << endl;

   sa.withdraw(3000);
    cout << sa.getBalance() << endl;
}