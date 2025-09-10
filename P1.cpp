//Beaux Dolf, Jacob Simon
#include <iostream>

using namespace std;

bool imp(bool a,bool b);   // a implies b
bool iff(bool a,bool b);   // a if and only if b
bool xor2(bool a,bool b);  // a exclusive or b
void printHeader();
void printRow(bool p, bool q, bool r);
void printSummary();

int main(){
    bool p, q, r;







    return 0;
}

bool imp(bool a, bool b){ // a implies b
    return (a == true && b == false) ? false : true;
}
bool iff(bool a, bool b){ // a if and only if b
    return (a == b)? true : false;
}
bool xor2(bool a, bool b){ // a exclusive or b
    return (a != b)? true : false;
}