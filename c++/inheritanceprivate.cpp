#include<iostream>
using namespace std;

class bank{

    public:

    string name;
    long long int acno;

    protected:

    int bal;

};

class hdfc: public bank{
    public:
  
      public:
    void set(int x){
        bal=x;
    }
    void get(){
        cout <<"Bal available:" << bal << "\n\n";
    }

};

int main(){

    hdfc a1;
    a1.name="ankit";
    a1.acno=123456789101112;

    cout << a1.name <<"\n" << a1.acno << "\n";

    a1.set(3627726);
    a1.get();

    hdfc a2;
    a2.name="Nilesh";
    a2.acno=36070360;

    cout << a2.name <<"\n" << a2.acno << "\n";

    a2.set(4800000);
    a2.get();

    hdfc a3;
    a3.name="Mahesh";
    a3.acno=2476742;

    cout << a3.name <<"\n" << a3.acno << "\n";

    a3.set(880000);
    a3.get();
    
    hdfc a4;
    a4.name="Jay";
    a4.acno=8489249;

    cout << a4.name <<"\n" << a4.acno << "\n";

    a4.set(2700000);
    a4.get();

    hdfc a5;
    a5.name="Ram";
    a5.acno=23875872;

    cout << a5.name <<"\n" << a5.acno << "\n";

    a5.set(2360000);
    a5.get();







    


    
}