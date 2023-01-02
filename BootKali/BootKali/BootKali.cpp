// BootKali.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

char YesOrNo;

int main()
{
    cout << "Hello you just entered the Boot Kali TUI do you wanna reboot this computer and launch advaced settings of restart. [y/n]";
    cin >> YesOrNo;
    if (YesOrNo == 'y' || YesOrNo == 'Y') {
        system("cls");
        cout << "to boot kali you need to have the special flesh drive (the cesky lev flesh drive) in the computer then you enter the \"run from USB option\" and lunch(just click on it) the first option \n";
        cout << "Are you ready to reboot [y/n]";
        cin >> YesOrNo;
        if (YesOrNo == 'y' || YesOrNo == 'Y') {
            cout << "\n";
            cout << "Ok when you gonna launch that USB it will take a while. After some time you will see several options you need to launch the live option. After that it will take even more time, you will need to just wait for it to boot up so dont be stresed or scared good luck.";
            cout << "\n \n \n Press any key and after that press enter to continue";
            cin >> YesOrNo;
            system("cls");
            system("shutdown /r /o");
        }
        else {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
