#include<iostream>
using namespace std;

class animal{
    public:

    void sound(){
        cout << "all animal sound available";
    }

};

class dog: public animal{
    public:
    void sound(){
        cout << "barking loudly";
    }
};

class cat: public animal{
    public:
    void sound(){
        cout << "meow meow";
    }
};

int main(){

cat billi;
billi.sound();
billi.sound();

dog german;
german.sound();


}