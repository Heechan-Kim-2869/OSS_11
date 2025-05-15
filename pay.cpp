#include <iostream>
using namespace std;

double calcEarnings(double rate, double hours = 40);

int main()
{
    cout << "1 pay: " << calcEarnings(22.0) << endl;
    cout << "2 pay: " << calcEarnings(12.50, 18) << endl;
    return 0;
}

double calcEarnings(double rate, double hours)
{
    double pay;
    pay = rate * hours;
    return pay;
}