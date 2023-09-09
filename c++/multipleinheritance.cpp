#include<iostream>

using namespace std;

class google{
public:

void g1(){
    cout << "available on every phone" <<"\n";
}
};
class microsoft{
    public:
    void g2(){
        cout << "available on every windows pc" <<"\n";
    }
};

class searchengine:public google,public microsoft{
    public:
    void g3(){
        cout << "available for 24hr";
    }

};


int main (){

    searchengine task;

    task.g1();
    task.g2();
    task.g3();


}