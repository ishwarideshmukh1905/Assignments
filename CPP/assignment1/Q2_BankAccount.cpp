#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    void setDetails(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited\n";
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal Successful\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    void displayAccountDetails()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    int choice;
    double amount;

    b.setDetails(101, "Ishwari", 5000);

    do
    {
        cout << "\n1.Deposit";
        cout << "\n2.Withdraw";
        cout << "\n3.Display Account";
        cout << "\n4.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount: ";
            cin >> amount;
            b.deposit(amount);
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            b.withdraw(amount);
            break;

        case 3:
            b.displayAccountDetails();
            break;
        }

    } while (choice != 4);

    return 0;
}