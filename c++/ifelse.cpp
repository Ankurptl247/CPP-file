#include<iostream>

using namespace std;

int main()
{
    int a;
    cout << "ENTER TIME: ";
    cin >> a;

    if (a < 6)
    {
        cout << "GOOD MORNING" <<"\n";
    }
    else if (a < 12)
    {
        cout << "GOOD EVNING" <<"\n";
    }
    else
    {
        cout << "GOOD NIGHT" <<"\n";
    }

//------------short hande if else-------------------------

int time;
cout << "Enter time";
cin >> time;
string result = (time<6)? "good day" : "modrate day";
cout << result;



}