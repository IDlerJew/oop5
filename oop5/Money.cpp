#include "Money.h"


void Money:: Setruble(long aruble) {

    this->chisl = aruble;
}

long Money::Getruble() const {
    return chisl;
}

unsigned char Money::Getkop() {

    return znamen;
}

void Money::Setkop(long kop1) {
    while (kop1 > 100) {
        kop1 -= 100;
        chisl++;
    }
    znamen = kop1;
}

void  Money::Multi(double a, Money b) {
    //long sum;
    //sum = (b.Getruble()*100)+
    chisl = b.Getruble() * a;
    Setkop(long(b.Getkop()) * a);
}
void Money::Degres(double a, Money b) {

    chisl = b.Getruble() / a;
    Setkop(long(b.Getkop()) / a);
}
void Money::Degres(long a, Money b) {
    double kop1 = ((double)b.Getruble() / a) - (long)((double)b.Getruble() / a); //считаем те самые копейки которые при делении будут
    chisl = b.Getruble() / a;
    Setkop((long(b.Getkop()) / a) + (long)(kop1 * 100)); // прибавляем и приводим и норме
    //cout << (long(b.Getkop()) / a)<<endl;
    //chisl = b.Getruble() / a;
    //Setkop(long(b.Getkop()) / a);
}

void  Money::Sum(Money a, Money b) {
    chisl = (a.Getruble() + b.Getruble());
    Setkop(long(b.Getkop()) + long(a.Getkop()));

}

void Money::Minus(Money a, Money b) {

    chisl = (a.Getruble() - b.Getruble());
    if (long(a.Getkop()) - long(b.Getkop()) < 0) {
        Setkop(long(a.Getkop()) - long(b.Getkop()) + 100);
        chisl--;
    }
    else Setkop(long(a.Getkop()) - long(b.Getkop()));

}

void Money::Cout() {
    if ((long)znamen < 10) {
        cout << chisl << "," << "0" << (long)znamen << endl;
    }
    else cout << chisl << "," << (long)znamen << endl;
}

bool Money::Sravn(Money b) {


    if (Getruble() > b.Getruble()) {
        return true;
    }
    if (Getruble() < b.Getruble()) {
        return false;
    }
    else if ((long)Getkop() > (long)b.Getkop()) return true;
    else {

        ((long)Getkop() < (long)b.Getkop());
        return false;
    }

}

Pair* Money::operator+(const Pair* a)
{
    Pair* temp = new Money(a->Getchisl() + Getchisl(), a->Getznamen()+ Getznamen());
    return temp;
}

Pair* Money::operator-(const Pair* a)
{
    Pair* temp = new Money(Getchisl() - a->Getchisl(), Getznamen() - a->Getznamen());
    return temp;
}

Pair* Money::operator*(double& a)
{
    Pair* temp = new Money(a*  Getchisl(), a* Getznamen());
    return temp;
}

Pair* Money::operator/(double& a)
{
    Pair* temp = new Money( Getchisl()/a,  Getznamen()/a);
    return temp;
}
ostream& operator<<(ostream& strm, Money money) {
    if (money.Getznamen() >= 100) {
        int i = 0;
        while (money.Getznamen() >= 100) {
            money.znamen -= 100;
            i++;
        }
        money.chisl += i;
    }
    if (money.Getznamen() < 10&& money.Getznamen()>=0) {
        strm << money.Getchisl() << " Рублей " <<"0" << money.Getznamen() << " Копеек ";
        return strm;
    }

    strm << money.Getchisl() << " Рублей " << money.Getznamen() << " Копеек  ";
    return strm;
}