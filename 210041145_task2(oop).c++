#include<iostream>
#include<cmath>
using namespace std;

class BankAccount
{
private:
    float account_number;
    string account_hname;
    string account_type;
    float min_balance;
    float current_balance;
    static int bankAccount;

public:
    BankAccount(float number, string hname, string type) :
        account_number(number), account_hname(hname), account_type(type), min_balance(0), current_balance(0) {
        bankAccount++;
    }
    void showall()
    {
        cout << "Account Number: " << account_number << endl;
        cout << "Account Holder Name: " << account_hname << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Minimum Balance: " << min_balance << endl;
        cout << "Current Balance: " << current_balance << endl;
    }
    void name()
    {
        cin >> account_hname;
    }

    void showBalance()
    {
        cout << "Current balance: " << current_balance << endl;
    }

    void deposit()
    {
        float money;
        cin >> money;
        if (money > 0)
        {
            current_balance = current_balance + money;
        }
    }

    void withdrawal()
    {
        float money;
       
        cin >> money;
        if (money > 0 && money <= current_balance)
        {
            current_balance = current_balance - money;
        }
    }

    void giveInterest()
    {
        float interest = (current_balance * 0.03) + (current_balance*0.1);
        current_balance = current_balance + interest;
    }

    ~BankAccount() {
        cout << "Account of " << account_hname << " " << account_number << " is destroyed with a balance BDT " << current_balance << endl;
        bankAccount--;
    }
};

int BankAccount::bankAccount = 0;

int main()
{
    BankAccount account(100000, "Mr. X", "current");
    account.deposit();
    account.withdrawal();
    account.giveInterest();
    account.showBalance();
    account.showall();
    return 0;
}
