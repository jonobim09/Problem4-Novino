/******************************************************************************
Problem 04
Programmed by: Jolly Novino
Date Accomplished: 07/17/2022

//This program is a fish locator.
*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    fstream iFile;
    iFile.open("jolly.txt", ios::in);
    if (!iFile)
    {
        cout << "File not created!";
        return 0;
    }

    string str;

    while (getline(iFile, str)) {
        if (str.find("<><") != string::npos || str.find("><>") != string::npos) {
            cout << "Found";
        }
        else {
            cout << "Not Found";
        }
    }

    iFile.close();

    return 0;
}