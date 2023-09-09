#include<iostream>

using namespace std;

int main(){
    
int a=10;

try{
    if(a>5){
        cout << "you are allow";
    }

    else{
        throw(404);
    }
}
catch(int b){
    cout << b;
}

}


