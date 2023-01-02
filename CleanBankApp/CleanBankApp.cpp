#include <iostream>
#include <windows.h>
using namespace std;

// Variables
string usernames[3] = { "Pepe", "Jarmila", "Jamal"};
int passwords[3] = {1234, 5678, 6666};
int accountBalance[3] = { 0, 500, 10000000 };
string activeUser;
char YesOrNo;
string lastAction;

    // User input
        string userInputUserName;
        int userInputPassword;
        int userInputSwitchChoice;
        int IncorrectAttempts = 0;
        int userInputWithdrawal;
        int userInputSendMoneyAmount;
        string userInputSendMoneyUser;

int main()
{
        // Sigh in Screen
SighIn:
    cout << "\t \t \t \t \t \t ==================== \n";
    cout << "\t \t \t \t \t \t        BankApp \n";
    cout << "\t \t \t \t \t \t ==================== \n";

        cout << "Hello user! Welcome to BankApp \n";
        cout << "You must enter your login information to proceed \n";

        // Sigh in Protocol
 SighInProtocol:
        cout << "Username: ";
        cin >> userInputUserName;
        lastAction = "SighInProtocol";
        goto PasswordInputCheck;
    PasswordInputCheck:
        userInputPassword = NULL;
        cout << "Password: ";
        cin >> userInputPassword;
        activeUser = userInputUserName;
        goto PasswordCheck;

        // Password check
 PasswordCheck:
            if (userInputPassword == passwords[0] && activeUser == usernames[0]) {
                system("cls");
                cout << "Login Successfull.";
                Sleep(400);
                if (lastAction == "SighInProtocol") { // If Sigh in was successfull
                    goto MainScreen;
                }
                if (lastAction == "Withdrawal") {
                    goto WithdrawalUnlocked;
                }
                if (lastAction == "SendMoney") {
                    goto SendMoneyUnlocked;
                }
                if (lastAction == "CheckBalance") {
                    goto CheckBalanceUnlocked;
                }
            }
            if (userInputPassword == passwords[1] && activeUser == usernames[1]) {
                system("cls");
                cout << "Login Successful.";
                Sleep(400);
                if (lastAction == "SighInProtocol") { // If Sigh in was successfull
                    goto MainScreen;
                }
                if (lastAction == "Withdrawal") {
                    goto WithdrawalUnlocked;
                }
                if (lastAction == "SendMoney") {
                    goto SendMoneyUnlocked;
                }
                if (lastAction == "CheckBalance") {
                    goto CheckBalanceUnlocked;
                }
            }
            if (userInputPassword == passwords[2] && activeUser == usernames[2]) {
                cout << "Login Successfull.";
                Sleep(400);
                if (lastAction == "SighInProtocol") { // If Sigh in was successfull
                    goto MainScreen;
                }
                if (lastAction == "Withdrawal") {
                    goto WithdrawalUnlocked;
                }
                if (lastAction == "SendMoney") {
                    goto SendMoneyUnlocked;
                }
                if (lastAction == "CheckBalance") {
                    goto CheckBalanceUnlocked;
                }
            }
            else {

                IncorrectAttempts++;

                cout << "Sorry wrong password. Wanna try again?" << "Attempt: " << IncorrectAttempts << "/5" << "[y / n]";
                cin >> YesOrNo; // Check for anwser

                if (IncorrectAttempts == 5 && YesOrNo == 'y' || YesOrNo == 'Y' || YesOrNo == 'n' || YesOrNo == 'N') {
                    system("shutdown /s /t 15");
                    cout << "Too mutch incorrect attempts to get into account. Your computer will be shuted down in 15 seconds \n";
                }
                if (lastAction == "SighInProtocol" && YesOrNo == 'y' || lastAction == "SighInProtocol" && YesOrNo == 'Y') {
                    system("cls");
                    goto SighIn;
                }
                if (lastAction == "Withdrawal" && YesOrNo == 'y' || lastAction == "Withdrawal" && YesOrNo == 'Y' || lastAction == "SendMoney" && YesOrNo == 'y' || lastAction == "SendMoney" && YesOrNo == 'Y' || lastAction == "CheckBalance" && YesOrNo == 'y' || lastAction == "CheckBalance" && YesOrNo == 'Y') {
                    system("cls");
                    goto PasswordInputCheck;
                }
                else {
                    return 0;
                }
            }

    // Main Screen - it is visible when

MainScreen:

    system("cls");
    cout << "\t \t \t \t \t \t ==================== \n";
    cout << "\t \t \t \t \t \t        BankApp \n";
    cout << "\t \t \t \t \t \t ==================== \n";
    cout << "\n";
    Sleep(200);
    cout << "1) Withdrawal \n";
    Sleep(200);
    cout << "2) Send money \n";
    Sleep(200);
    cout << "3) My account balance \n";
    Sleep(200);
    cout << "99) Log out \n";
    Sleep(200);
    cout << "999) Exit application \n";
    Sleep(200);
    cout << "\n";

    cout << "Welcome to BankApp TUI please choose the next action \n";
    cout << "\t";
    cin >> userInputSwitchChoice;

    switch (userInputSwitchChoice) {
        case 1:
            goto Withdrawal;

        case 2:
            goto SendMoney;

        case 3:
            goto CheckBalance;

        case 99:
            system("cls");
            activeUser = "";
            goto SighIn;

        case 999:
            return 0;

        default:
            system("cls");
            cout << "Sorry that option does nt exist \n";
            Sleep(400);
            goto MainScreen;
    }

    // Take money out of my account
Withdrawal:
    lastAction = "Withdrawal";
    system("cls");
    goto PasswordInputCheck; // Send user for password check
WithdrawalUnlocked:
    system("cls");
    cout << "Hello " << activeUser << ". How mutch you wanna withdrawal? \n";
    cout << "\t";
    cin >> userInputWithdrawal;
    cout << "\n";

    if (activeUser == usernames[0]) { // Check for user
        if (userInputWithdrawal >= accountBalance[0]) { // Check if the balance is higer then the withdrawal
            cout << "Sorry your account balance is smaller then the ammount that you wanna withdrawal. \n";
            Sleep(400);
            system("cls");
            goto MainScreen;
        }
        else { // Take out the money out of the account
            accountBalance[0] = accountBalance[0] - userInputWithdrawal;
            cout << "There is " << accountBalance[0] << " left on your account.";
            Sleep(4000);
            system("cls");
            goto MainScreen;
        }
    }

    if (activeUser == usernames[1]) { // Check for user
        if (userInputWithdrawal >= accountBalance[1]) { // Check if the balance is higer then the withdrawal
            cout << "Sorry your account balance is smaller then the ammount that you wanna withdrawal. \n";
            Sleep(4000);
            system("cls");
            goto MainScreen;
        }
        else { // Take out the money out of the account
            accountBalance[1] = accountBalance[1] - userInputWithdrawal;
            cout << "There is " << accountBalance[1] << " left on your account.";
            Sleep(4000);
            system("cls");
            goto MainScreen;
        }
    }

    if (activeUser == usernames[2]) { // Check for user
        if (userInputWithdrawal >= accountBalance[2]) { // Check if the balance is higer then the withdrawal
            cout << "Sorry your account balance is smaller then the ammount that you wanna withdrawal. \n";
            Sleep(4000);
            system("cls");
            goto MainScreen;
        }
        else { // Take out the money out of the account
            accountBalance[2] = accountBalance[2] - userInputWithdrawal;
            cout << "There is " << accountBalance[2] << " left on your account.";
            Sleep(4000);
            system("cls");
            goto MainScreen;
        }
    }

    // Send money to another user
SendMoney:
    system("cls");
    lastAction = "SendMoney";
    goto PasswordInputCheck; // Send user for password check
SendMoneyUnlocked:
    system("cls");
    cout << "Hello " << activeUser << " How mutch money you wanna send? \n";
    cout << "\t";
    cin >> userInputSendMoneyAmount;
    cout << "\n";

    if (activeUser == usernames[0] || activeUser == usernames[1] || activeUser == usernames[2]) { // Check for user

        if (activeUser == usernames[0] && userInputSendMoneyAmount >= accountBalance[0]) { // Check if the balance is higer then the withdrawal
            cout << "Sorry your account balance is smaller then the ammount that you wanna send. \n";
            Sleep(4000);
            system("cls");
            goto MainScreen;
        }

        if (activeUser == usernames[1] && userInputSendMoneyAmount >= accountBalance[1]) { // Check if the balance is higer then the withdrawal
            cout << "Sorry your account balance is smaller then the ammount that you wanna send. \n";
            Sleep(4000);
            system("cls");
            goto MainScreen;
        }

        if (activeUser == usernames[2] && userInputSendMoneyAmount >= accountBalance[2]) { // Check if the balance is higer then the withdrawal
            cout << "Sorry your account balance is smaller then the ammount that you wanna send. \n";
            Sleep(4000);
            system("cls");
            goto MainScreen;
        }

        else { // Continue with the proces
            cout << "To what user you wanna send " << userInputSendMoneyAmount << "\n";
            cout << "\t Username: ";
            cin >> userInputSendMoneyUser;
            if (userInputSendMoneyUser == usernames[0] || userInputSendMoneyUser == usernames[1] || userInputSendMoneyUser == usernames[2]) { // Check if the user exist
                if (userInputSendMoneyUser == usernames[0]) { // Send Money to user 1
                    accountBalance[0] = accountBalance[0]+ userInputSendMoneyAmount;
                }

                if (userInputSendMoneyUser == usernames[1]) { // Send Money to user 1
                    accountBalance[1] = accountBalance[1] + userInputSendMoneyAmount;
                }

                if (userInputSendMoneyUser == usernames[2]) { // Send money to user 2
                    accountBalance[2] = accountBalance[2] + userInputSendMoneyAmount;
                }

                cout << "You succesfully sended " << userInputSendMoneyAmount << " to user " << userInputSendMoneyAmount << "\n";
                system("cls");
                goto MainScreen;
            }
            else { // If user note exist send them back to the SendMoney
                cout << "User does not exist";
                Sleep(4000);
                goto SendMoney;
            }
        }
    }

    // How mutch money do I have
CheckBalance:
    system("cls");
    lastAction = "CheckBalance";
    goto PasswordInputCheck; // Send user for password check
CheckBalanceUnlocked:
    system("cls");
    if (activeUser == usernames[0]) { // For user 0
        cout << "There is " << accountBalance[0] << " left on your account \n";
    }
    if (activeUser == usernames[1]) { // For user 1
        cout << "There is " << accountBalance[1] << " left on your account \n";
    }
    if (activeUser == usernames[2]) { // For user 2
        cout << "There is " << accountBalance[2] << " left on your account \n";
    }
    cout << "Go back to main screen? [y/n]";
    cin >> YesOrNo;
    if (YesOrNo == 'y' || YesOrNo == 'Y') {
        system("cls");
        goto MainScreen;
    }
    else {
        system("cls");
        goto CheckBalance;
    }
}