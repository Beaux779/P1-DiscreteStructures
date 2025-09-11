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

    cout << "Check truth value for: Expression 1" << endl;

    int trueCount = 0, totalCases = 0;
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            bool expr1 = ((p || q) && (!p && !q));
            cout << p << " " << q << " " << expr1 << endl;
            if (expr1) trueCount++;
            totalCases++;
        }
    }

    cout << "The amount of true cases are " << trueCount << endl;
    if (trueCount == 0)
        cout << "Expression 1 is a contradiction." << endl;
    else if (trueCount == totalCases)
        cout << "Expression 1 is a tautology." << endl;
    else
        cout << "Expression 1 is a contingency." << endl;
    cout << endl;




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