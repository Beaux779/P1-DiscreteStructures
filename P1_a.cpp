//Beaux Dolf, Jacob Simon
#include <iostream>
#include <iomanip>

using namespace std;

int imp(int a,int b){ return (!a || b) ? 1 : 0;}   // a implies b
int iff(int a,int b){ return (a == b)? 1 : 0;}   // a if and only if b

void printVerdict(const char* name, int trues, int total){
    cout << "The amount of true cases are " << trues << endl;
    cout << name << "is a " << (trues ==0 ? "contradiction." : (trues == total ? "tautology." : "contingency.")) << endl;
    cout << endl;
}
int main(){


    //expression 1:(p + q) * (~p * ~q)
    cout << "Check truth value for: (p + q) * (~p * ~q)" << endl;
    cout << setw(4) << "p" << setw(8) << "q" << setw(14) << "expr1\n";
    int trueCount1 = 0, totalCases1= 0;
    for(int p = 0; p <= 1; p++) {
        for(int q = 0; q <= 1; q++) {
            int expr1 = ((p || q) && (!p && !q));
            cout << setw(4) << p << setw(8) << q << setw(12) << expr1 << endl;
            if(expr1) trueCount1++;
            totalCases1++;
        }
    }
    printVerdict("Expression 1 ", trueCount1, totalCases1);

    //expression 2: (p <-> q) -> (p <-> q)  (tautology)
    cout << "Check truth value for: (p <-> q) -> (~p <-> ~q)" << endl;
    cout << setw(4) << "p" << setw(8) << "q" << setw(14) << "expr2\n";
    int trueCount2 = 0, totalCases2 = 0;
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            int expr2 = imp(iff(p, q), iff(p, q));
            cout << setw(4) << p << setw(8) << q << setw(12) << " " << expr2 << endl;

            if (expr2) trueCount2++;
            totalCases2++; 
        }
    }
    printVerdict("Expression 2 ", trueCount2, totalCases2);
   
    //expression 3: (p + q) * (~p + r) -> (p * r)
    cout << "Check truth value for: (p + q) * (~p + r) -> (p * r)" << endl;
    cout << setw(4) << "p" << setw(8) << "q" << setw(12) << "r" << setw(18) << "expr3\n";
    int trueCount3 = 0, totalCases3 = 0;
    for(int p = 0; p <= 1; p++) {
        for(int q = 0; q <= 1; q++) {
            for(int r =0; r <= 1; r++) {
                int expr3 = imp(((p||q) && (!p||r)), (p && r));
                cout << setw(4) << p << setw(8) << q << setw(12) << r << setw(16) << expr3 << endl;
                if (expr3) trueCount3++;
                totalCases3++;
            }
        }
    }
    printVerdict("Expression 3 ", trueCount3, totalCases3);

    //expression 4: ((p -> r) -> q) <-> (p -> (q -> r))
    cout << "Check truth value for: ((p -> r) -> q) <-> (p -> (q -> r))" << endl;
    cout << setw(4) << "p" << setw(8) << "q" << setw(12) << "r" << setw(18) << "expr4\n";
    int trueCount = 0; int totalCases = 0;
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            for (int r = 0; r <= 1; r++) {
                int ex4 = iff( imp(imp(p,r), q), imp(p, imp(q,r)) );
                cout << setw(4) << p << setw(8) << q << setw(12) << r << setw(16) << ex4 << endl;
                if (ex4) trueCount++;
                totalCases++;
            }
        }
    }
    printVerdict("Expression 4 ", trueCount, totalCases); 

    return 0;
}