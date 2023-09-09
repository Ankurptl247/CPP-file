#include<iostream>

using namespace std;

class google{

    public:

    string wname;

};

class ai: public google{

    public:

    string ans;
};

class gpt: public ai{

    public:

    string que;
};

int main(){

    gpt q1;


    q1.que="what is HTML ?";
    q1.ans="hyper text markup language.";
    q1.wname="www.w3school.com";

    cout << q1.que <<"\n" << q1.ans <<"\n" << q1.wname <<"\n\n";

    gpt q2;

    q2.que="what is css ?";
    q2.ans="cascading style sheet.";
    q2.wname="www.w3schol.com";

    cout << q2.que <<"\n" << q2.ans <<"\n" << q2.wname <<"\n\n";

    gpt q3;

    q3.que="what is javascript ?";
    q3.ans="scripting language for creating dynamic web page content.";
    q3.wname="www.w3schol.com";

    cout << q3.que <<"\n" << q3.ans <<"\n" << q3.wname <<"\n\n";

    gpt q4;

    q4.que="what is bootstrap ?";
    q4.ans="css framework for devloping responsive and mobile first website.";
    q4.wname="www.w3schol.com";

    cout << q4.que <<"\n" << q4.ans <<"\n" << q4.wname <<"\n\n";

    gpt q5;

    q5.que="what is react js?";
    q5.ans="front-end javascript library for using building interfaces based on components.";
    q5.wname="www.w3schol.com";

    cout << q5.que <<"\n" << q5.ans <<"\n" << q5.wname;



    

   







}
