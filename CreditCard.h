//The question is available at https://scs.senecac.on.ca/~oop244/pages/tests/111/t1a111.html

// CreditCard.h
//
class CreditCard {
    double limit;
    int number;
    int pin;
  public:
    CreditCard();
    CreditCard(int n, int p, double l);
    bool charge(int p, double c);
    void settle(double p);
    void display() const;
};
