#include <iostream>
using namespace std;

void showMenu(){
    cout<<"*****MENU*****"<<endl;
    cout<<"1. Check balance" <<endl;
    cout<<"2. Deposit" <<endl;
    cout<<"3. Withdraw" <<endl;
    cout <<"4. Exit" << endl;
    cout<< "**************" <<endl;
}

int main()
{
    //Show menu, Check Balance , Deposit , Withdrawl
    int option;
    double balance =  500;
    system("cls");

    do
    {
        showMenu();
        cout << "Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Balance is: " << balance << "Rs" << endl;
            break;

        case 2:
            cout << "Deposit Amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;

        case 3:
            cout << "Withdraw Amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "not enough money" << endl;
            break;
        }
    } 
    
    while (option != 4);
    

    
    return 0;
}