# Truth Table Generator (C++)

A compact (≤150 lines) C++ program that prints neatly formatted **truth tables** for a small set of **hard-coded propositional logic expressions**, and classifies each as a **contradiction**, **tautology**, or **contingency**.

---

## Overview

The program:
- Iterates over all binary assignments for variables (`p`, `q`, `r`).
- Computes each expression’s truth value using integer logic (`0/1`).
- Prints aligned tables with `iomanip::setw`.
- Totals “true” rows and prints a verdict.

**Operators implemented (helpers):**
- `imp(a,b)` → implication (`a -> b`) implemented as `(!a || b)`
- `iff(a,b)` → biconditional (`a <-> b`) implemented as `(a == b)`

> **Note:** There is **no expression parsing**. The four expressions are embedded in `main()`.

---

## Expressions Printed

1. **Expression 1:** `(p + q) * (~p * ~q)`  
   (In C++: `(p || q) && (!p && !q)`)

2. **Expression 2:** Labeled as `(p <-> q) -> (~p <-> ~q)` in the header,  
   but the code computes **`(p <-> q) -> (p <-> q)`** via `imp(iff(p,q), iff(p,q))`.  
   > If you intended the negated version, change the computation accordingly.

3. **Expression 3:** `(p + q) * (~p + r) -> (p * r)`  
   (In C++: `imp( (p||q) && (!p||r), (p && r) )`)

4. **Expression 4:** `((p -> r) -> q) <-> (p -> (q -> r))`  
   (In C++: `iff( imp(imp(p,r), q), imp(p, imp(q,r)) )`)

---

## Build & Run

### Using g++
```bash
g++ -std=c++17 main.cpp -o truth_tables
./truth_tables
