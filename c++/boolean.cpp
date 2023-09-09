#include<iostream>

using namespace std;

int main (){

    int c=10,b=20;

    cout << (c>b) <<"\n";
    cout << (c<b) <<"\n";


    int a;
    cout << "Enter your age: ";
    cin >> a;

    if(a>18){
        cout << "Old enogh to vote";
    }
    else{
        cout << "not old enogh to vote";
    }

}