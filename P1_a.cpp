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


    //expression 1
    cout << "Check truth value for: Expression 1" << endl;

    int trueCount1 = 0, totalCases1= 0;
    for(int p = 0; p <= 1; p++) {
        for(int q = 0; q <= 1; q++) {
            bool expr1 = ((p || q) && (!p && !q));
            cout << p << " " << q << " " << expr1 << endl;
            if(expr1) trueCount1++;
            totalCases1++;
        }
    }

    cout << "The amount of true cases are " << trueCount1 << endl;
    if(trueCount1 == 0)
        cout << "Expression 1 is a contradiction." << endl;
    else if(trueCount1 == totalCases1)
        cout << "Expression 1 is a tautology." << endl;
    else
        cout << "Expression 1 is a contingency." << endl;
    cout << endl;


    //expression 2
    // (p <-> q) -> (p <-> q)  (tautology)
    cout << "Check truth value for: Expression 2" << endl;
    cout << "p q p<->q expr2\n";
    int trueCount2 = 0, totalCases2 = 0;
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            int expr2 = imp(iff(p, q), iff(p, q));
            cout << p << " " << q << " " << iff(p, q) << " " << expr2 << endl;

            if (expr2) trueCount2++;
            totalCases2++; 
        }
    }
    cout << "The amount of true cases are " << trueCount2 << endl;
    if(trueCount2 == 0)
        cout << "Expression 2 is a contradiction." << endl;
    else if(trueCount2 == totalCases2)
        cout << "Expression 2 is a tautology." << endl;
    else
        cout << "Expression 2 is a contingency." << endl;


    //expression 3
    cout << "Check truth value for: Expression 3" << endl;

    int trueCount3 = 0, totalCases3 = 0;
    for(int p = 0; p <= 1; p++) {
        for(int q = 0; q <= 1; q++) {
            for(int r =0; r <= 1; r++) {
                bool expr3 = imp(((p||q) && (!p||r)), (p && r));
                cout << p << " " << q << " " << r << " " << expr3 << endl;
                if (expr3) trueCount3++;
                totalCases3++;
            }
        }
    }


    cout << "The amount of true cases are " << trueCount3 << endl;
    if(trueCount3 == 0)
        cout << "Expression 3 is a contradiction." << endl;
    else if(trueCount3 == totalCases3)
        cout << "Expression 3 is a tautology." << endl;
    else
        cout << "Expression 3 is a contingency." << endl;
    cout << endl;
    

    //expression 4
    cout << "Check truth value for: Expression 4" << endl;

    int trueCount = 0; int totalCases = 0;
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            for (int r = 0; r <= 1; r++) {
                bool ex4 = iff( imp(imp(p,r), q), imp(p, imp(q,r)) );
                cout << p << " " << q << " " << r << " " << ex4 << endl;
                if (ex4) trueCount++;
                totalCases++;
            }
        }
    }

    cout << "The amount of true cases are " << trueCount << endl;
    if(trueCount == 0)
        cout << "Expression 4 is a contradiction." << endl;
    else if(trueCount == totalCases)
        cout << "Expression 4 is a tautology." << endl;
    else
        cout << "Expression 4 is a contingency." << endl;
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