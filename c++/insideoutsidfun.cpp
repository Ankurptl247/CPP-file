#include<iostream>

using namespace std;


class car{

    public:
    string name;

    void price(){
        cout << "model price coming soon";
    }

void abc();

};

void car::abc(){
    cout << "rating";
}

int main(){

car bmw;
bmw.name="BMW GT24";

cout << bmw.name;
bmw.price();
bmw.abc();

}