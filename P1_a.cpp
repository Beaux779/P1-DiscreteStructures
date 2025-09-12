//Beaux Dolf, Jacob Simon
#include <iostream>

using namespace std;

int imp(int a,int b);   // a implies b
int iff(int a,int b);   // a if and only if b
int xor2(int a,int b);  // a exclusive or b
void printHeader();
void printRow(int p, int q, int r);
void printSummary();

int main(){

    cout << "Check truth value for: Expression 1" << endl;

    int trueCount = 0, totalCases = 0;
    for(int p = 0; p <= 1; p++) {
        for(int q = 0; q <= 1; q++) {
            bool expr1 = ((p || q) && (!p && !q));
            cout << p << " " << q << " " << expr1 << endl;
            if(expr1) trueCount++;
            totalCases++;
        }
    }

    cout << "The amount of true cases are " << trueCount << endl;
    if(trueCount == 0)
        cout << "Expression 1 is a contradiction." << endl;
    else if(trueCount == totalCases)
        cout << "Expression 1 is a tautology." << endl;
    else
        cout << "Expression 1 is a contingency." << endl;
    cout << endl;



    cout << "Check truth value for: Expression 3" << endl;

    int trueCount = 0, totalCases = 0;
    for(int p = 0; p <= 1; p++) {
        for(int q = 0; q <= 1; q++) {
            for(int r =0; r <= 1; r++) {
                bool expr3 = imp(((p||q) && (!p||r)), (p && r));
                cout << p << " " << q << " " << r << " " << expr3 << endl;
                if (expr3) trueCount++;
                totalCases++;
            }
        }
    }

    cout << "The amount of true cases are " << trueCount << endl;
    if(trueCount == 0)
        cout << "Expression 1 is a contradiction." << endl;
    else if(trueCount == totalCases)
        cout << "Expression 1 is a tautology." << endl;
    else
        cout << "Expression 1 is a contingency." << endl;
    cout << endl;




    return 0;
}

int imp(int a, int b){ // a implies b
    return (!a || b) ? 1 : 0;
}
int iff(int a, int b){ // a if and only if b
    return (a == b)? 1 : 0;
}
int xor2(int a, int b){ // a exclusive or b
    return (a != b)? 1 : 0;
}