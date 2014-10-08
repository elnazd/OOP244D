//Please find the question at https://scs.senecac.on.ca/~oop244/pages/tests/111/t1a111.html

// CreditCard.cpp
//
#include <iostream>
#include <iomanip>
using namespace std;
#include "CreditCard.h"

CreditCard::CreditCard() {
    number = 0;
    limit  = 0.0;
    pin    = 0;
}

CreditCard::CreditCard(int n, int p, double l) {
    if (n > 0 && l > 0.0) {
        number = n;
        pin = p;
        limit = l;
    }
    else
        *this = CreditCard();
}

bool CreditCard::charge(int p, double amount) {
    bool rc;
    if (p == pin && amount > 0.0 && amount <= limit) {
        limit -= amount;
        rc = true;
    }
    else
        rc = false;
    return rc;
}

void CreditCard::settle(double payment) {
    limit += payment;
}

void CreditCard::display() const {
    if (number)
        cout << setw(8) << setfill('*') << number % 10000 << setfill(' ') 
             << setw(8) << fixed << setprecision(2) << limit << endl;
    else
        cout << "Card is inactive" << endl;
}

#include <iostream>
using namespace std;
#include "CreditCard.h"
int main() {
    bool accepted;
    CreditCard card1(51915166, 1234, 5000.0);
    CreditCard card2(51915167, 4321, -4000.0);
    card1.display();
    card2.display();
    accepted = card2.charge(4321, 4000.0);
    cout << (accepted ? "accepted" : "rejected") << endl;
    for (int i = 0; i < 2; i++) {
        accepted = card1.charge(1234, 325.00);
        cout << (accepted ? "accepted" : "rejected") << endl;
    }
    card1.settle(300.00);
    card1.display();
}
