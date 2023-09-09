#include<iostream>

using namespace std;


class emp{
private:

int salary;



public:

void set(int s){
    salary=s;
}
int get(){
    return salary;
}

};


int main(){

// emp karan;
// karan.salary=50000;
// cout << karan.salary;



emp karan;
karan.set(50000);
cout << karan.get();


}