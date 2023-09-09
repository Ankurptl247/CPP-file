#include<iostream>

using namespace std;
int main (){

    string name[4]= {"ram" , "laxman" , "sita" , "hanuman"};

    cout << sizeof(name) << "\n";

    // cout << name[0];
    // cout << name[1];
    // cout << name[2];
    // cout << name[3];

    int i;

    for (i=3; i>=0; --i){
        cout << name[i] << "\n";

        
    }



//----------int sizeof-----------

int no[8] = {2,3,54,6,9,653,6,3};

cout << sizeof(no) << "\n";


//----------multidimesioal--------

string dict[2][3] = {{"a","b","c"} , {"d","e","f"}};

int a,j;

for (a=0; a<=2; ++a){
    for(j=0; j<=2; ++j){
        cout << dict[a][j] << "\n";
    }
}








}
