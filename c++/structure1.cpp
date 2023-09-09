#include <iostream>

using namespace std;
 
 struct  mobile
 {
    /* data */

    string name;
    int price;
    float rating;

    void set(string a,int b,float c){
name=a;
price=b;
rating=c;
    }
    
     void get(){
   cout << name;
   cout << price;
   cout << rating;
 }
    
   };

 int main () {

struct mobile oppo;
// oppo.name="oppo reno";
// oppo.price=27000;
// oppo.rating=5.5;

string a;
int b;
float c;

cout << "name";
cin >> a;
cout << "price";
cin >> b;
cout << "rating";
cin >> c;


oppo.set(a,b,c);
oppo.get();
// cout << oppo.name;
// cout << oppo.price;
// cout << oppo.rating;


 }