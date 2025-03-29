#include <iostream>
using namespace std;

int main() {
    int pin, enteredPin, option;
    float balance = 10000.0, deposit, withdraw;

    cout << "Welcome to Simple ATM Interface\n";
    cout << "Set your 4-digit PIN: ";
    cin >> pin;

    cout << "\nPlease enter your PIN to access the ATM: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN! Access Denied.\n";
        return 0;
    }

    do {
        cout << "\n------ ATM Menu ------\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Your current balance is: Rs. " << balance << "\n";
                break;
            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> deposit;
                balance += deposit;
                cout << "Rs. " << deposit << " deposited successfully.\n";
                break;
            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> withdraw;
                if (withdraw > balance) {
                    cout << "Insufficient balance!\n";
                } else {
                    balance -= withdraw;
                    cout << "Rs. " << withdraw << " withdrawn successfully.\n";
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                cout << "Invalid option! Please try again.\n";
        }
    } while (option != 4);

    return 0;
}
