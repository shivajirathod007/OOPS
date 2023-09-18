#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>

using namespace std;

class banac // here we created a class in public mostly
{
public:
    int acn;
    char achn[50];
    float acb;

private:
    int nothing;
};

class banac accounts[100]; // here we defined the accounts limit has less than 100;
int numac = 0;             // in this variable all type of data using maloc(mamory allocation)

void createbac()
{
    int acn;
    char achn[50];
    float acb;
    cout << "Enter your name: ";
    cin >> achn;
    cout << "Enter your bank number: ";
    cin >> acn;
    cout << "Enter your account balance: ";
    cin >> acb;
    accounts[numac].acn = acn;
    strcpy(accounts[numac].achn, achn);
    accounts[numac].acb = acb;
    numac++;
    cout << "Account created successfully!" << endl;
}

void checkbal()
{
    int acn;
    cout << "Enter your bank number: ";
    cin >> acn;
    for (int i = 0; i < numac; i++)
    {
        if (accounts[i].acn == acn)
        {
            cout << "Account holder name: " << accounts[i].achn << endl;
            cout << "acount numer is: " << accounts[i].acn;
            cout << "The balance is: " << accounts[i].acb << endl;
            return;
        }
    }
    cout << "chotiya hain to" << endl;
}

void deposit()
{
    int acn;
    int amount;
    cout << "Enter your bank number: ";
    cin >> acn;
    cout << "Enter the amount: ";
    cin >> amount;
    for (int i = 0; i < numac; i++)
    {
        if (accounts[i].acn == acn)
        {
            accounts[i].acb += amount;
            cout << "Balance added successfully..." << endl;
            cout << "account holder name is: " << accounts[i].achn;
            cout << "acount numer is: " << accounts[i].acn;
            cout << "Your new balance is now: " << accounts[i].acb << endl;
            return;
        }
    }
    cout << "to marja." << endl;
}

void withdraw()
{
    int acn;
    int amount;
    cout << "Enter your bank number: ";
    cin >> acn;
    cout << "Enter the amount: ";
    cin >> amount;

    for (int i = 0; i < numac; i++)
    {
        if (accounts[i].acn == acn)
        {
            if (accounts[i].acb >= amount)
            {
                accounts[i].acb -= amount;
                cout << "Balance withdraw successfully..." << endl;
                cout << "account holder name is: " << accounts[i].achn;
                cout << "acount numer is: " << accounts[i].acn;
                cout << "Your new balance is now: " << accounts[i].acb << endl;
            }
            else
            {
                system("color 0a");
                cout << "neet tak re number baba ka account che nahi toza heya bank madhe." << endl;
            }
            return;
        }
    }
    cout << "Account not found." << endl;
}

int main()
{
    system("Color 0A");
    int choice;
    do
    {
        cout << "*************************WELCOME TO SHIVA'S BANK******************************" << endl;
        cout << "Press 1 to Create account" << endl;
        cout << "Press 2 to Check bank balance" << endl;
        cout << "Press 3 to Deposit in your account" << endl;
        cout << "Press 4 to Withdraw from your account" << endl;
        cout << "number tak tas ka ata: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            createbac();
            break;
        case 2:
            checkbal();
            break;
        case 3:
            deposit();
            break;
        case 4:
            withdraw();
            break;
        default:
            cout << "neet tak re number madrch***d!" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}