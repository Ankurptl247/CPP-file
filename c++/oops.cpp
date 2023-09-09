#include<iostream>

using namespace std;


// class,properties,object


// cpo


class mobile{

// public,private,protected

public:

string name;
int price;
float rating;

void set(){
    cout << name << price << rating ;
}
};


int main(){

mobile oppo;
oppo.name="oppo reno 10";
oppo.price=50000;
oppo.rating=8.8;


// cout << oppo.name <<oppo.price <<oppo.rating;

mobile vivo;
vivo.name="\nvivo v27";
vivo.price=30000;
vivo.rating=9.5;

oppo.set();
vivo.set();

// cout<<vivo.name<<vivo.price<<vivo.rating;

}