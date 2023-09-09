#include<iostream>

using namespace std;

int main () {

    string food = "pav bhaji";
    string* ptr = &food ;


    cout << food ;
    cout << &food; 
    cout << ptr;

//----------derefrencing-------------

cout << *ptr; 


}