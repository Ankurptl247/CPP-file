#include<iostream>

using namespace std;

int main (){


//----------------------oprator-----------------------------------------
    int a=10,b=10;

    cout << a+b <<"\n";
    cout << a-b <<"\n";
    cout << a*b <<"\n";
    cout << a/b <<"\n";
    cout << a%b <<"\n";
    

    cout << ++a <<"\n";
    cout << --b <<"\n";

    int c=10;
    int d=c;

d+=10;
    cout << d <<"\n";
d-=10;
    cout << d <<"\n";
d*=10;
    cout << d <<"\n";
d/=10;
    cout << d <<"\n";
d%=10;
    cout << d <<"\n\n";

//------------comparison---------------------------------

int x=10,y=20;

cout << (x>y) <<"\n";
cout << (x<y) <<"\n";

cout << (x == y) << "\n";
cout << (x <= y) << "\n\n";

//--------------logical--------------------------------

int z=50,w=100;

cout << (z>40 && w>120) <<"\n";
cout << (z>40 || w>120) <<"\n";
cout << !(z>40 && w>120) <<"\n";


}