// TerminalNotebook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <istream>

using namespace std;
int main()
{
    char NoteP[2000];
    char TimeP[2000];
    char TimeP2[2000];
    while (true)
    {
        cout << "\nNew note: ";
        gets_s(NoteP);
        cout << "\nTime in hours: ";
        gets_s(TimeP);
        cout << "Time in Minutes: ";
        gets_s(TimeP2);
        cout << NoteP << "\n";
        cout << TimeP << ":" << TimeP2;
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
