#include<iostream>
#include<fstream>

using namespace std;

int main(){


    ifstream data("file.txt");

    // data << "welcome to the page\n\n";
    // data << "hello harry";

    string store;

    while(getline(data,store)){
        cout << store;
    }




}