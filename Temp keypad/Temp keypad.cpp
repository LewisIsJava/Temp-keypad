// Temp keypad.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int tempHundreth, tempTenth, tempUnit;
    cout << "This program will take in the cooking temperature that you desire too cook at" << endl;
    cout << "However the digits 1,4 and 7 are broken so if you enter them they will be re adjusted" << endl;
    cout << "Enter the hundredth digit of your baking temperature: ";
    cin >> tempHundreth;
    cout << "Enter the tenth digit of your baking temperature: ";
    cin >> tempTenth;
    cout << "Enter the unit digit of your baking temperature: ";
    cin >> tempUnit;
    // the digits 1, 4 ,7 do not work so if these are entered the program must round to the next largest and smallest temp that does not contain 1,4 or 7
    // example if desired temp is 450 then the program should output 399 or 500
    // or if the desired temp is 375 then it should output 380 and 369

    while ((tempHundreth >= 0 && tempHundreth <= 9) && (tempTenth >= 0 && tempTenth <= 9) && (tempUnit >= 0 && tempUnit <= 9))
    {
        if (tempHundreth == 1)
        {
            if (tempTenth >= 50 )
            {
                tempHundreth = 2;
                tempTenth = 0;
                tempUnit = 0;
            }
            else
            {
                tempHundreth = 0;
                tempTenth = 9;
                tempUnit = 9;
            }
        }
        else if (tempHundreth == 4)
        {
            if (tempTenth >= 50)
            {
                tempHundreth = 5;
                tempTenth = 0;
                tempUnit = 0;
            }
            else
            {
                tempHundreth = 3;
                tempTenth = 9;
                tempUnit = 9;
            }
        }
        else if (tempHundreth == 7)
        {
            if (tempTenth >= 50)
            {
                tempHundreth = 8;
                tempTenth = 0;
                tempUnit = 0;
            }
            else
            {
                tempHundreth = 6;
                tempTenth = 9;
                tempUnit = 9;
            }
        }
        if (tempTenth == 1)
        {
            if (tempUnit >= 5)
            {
                tempTenth = 2;
                tempUnit = 0;
            }
            else
            {
                tempTenth = 0;
                tempUnit = 9;
            }
        }
        if (tempTenth == 4)
        {
            if (tempUnit >= 5)
            {
                tempTenth = 5;
                tempUnit = 0;
            }
            else
            {
                tempTenth = 3;
                tempUnit = 9;
            }
        }
        if (tempTenth == 7)
        {
            if (tempUnit >= 5)
            {
                tempTenth = 8;
                tempUnit = 0;
            }
            else
            {
                tempTenth = 6;
                tempUnit = 9;
            }
        }
        if (tempUnit == 1)
        {
            tempUnit = 0;
        }
        else if (tempUnit == 4)
        {
            tempUnit = 3;
        }
        else if (tempUnit == 7)
        {
            tempUnit = 8;
        }
        cout << "------------------------------------------------------------" << endl;
        cout << "Your cooking temperature is: " << tempHundreth << tempTenth << tempUnit << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << "If you would like to re enter a new temp just do so when prompted, if not just enter -1 when prompted for a temp;" << endl;
        cout << "Enter the hundredth digit of your baking temperature: ";
        cin >> tempHundreth;
        cout << "Enter the tenth digit of your baking temperature: ";
        cin >> tempTenth;
        cout << "Enter the unit digit of your baking temperature: ";
        cin >> tempUnit;
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
