
#include <iostream>
using namespace std;
class ATM {

  private:
    int balance;
  public:
    ATM(int bal) {
        balance = bal;
    }

    int getBalance() {
        return balance;
    }

    bool withdraw(int amount) {
        if (amount > balance) {
            return false;
        }
        balance = balance - amount;
        return true;
    }

    void deposit(int amount) {
        balance = balance + amount;
    }
};

int main() {
    ATM atm(1000);
    int choice, amount;
    char op;

    do {
        system("cls");

        cout << "1. View Balance" << endl;
        cout << "2. Cash Withdraw" << endl;
        cout << "3. Cash Deposit" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your Balance: " << atm.getBalance() << endl;
                break;

            case 2:
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (atm.withdraw(amount)) {
                    cout << "Withdraw Successful......." << endl;
                } else {
                    cout << "Insufficient Balance......." << endl;
                }
                break;

            case 3:
                cout << "Enter the amount to Deposit: ";
                cin >> amount;
                atm.deposit(amount);
                cout << "Deposit Successful......" << endl;
                break;

            case 4:
                cout << "Thanks for using ATM" << endl;
                return 0;

            default:
                cout << "Invalid Choice" << endl;
        }

        cout << "Do you want to try another Transaction [Yes/No]: ";
        cin >> op;

    } while (op == 'y' || op == 'Y');

    return 0;
}
