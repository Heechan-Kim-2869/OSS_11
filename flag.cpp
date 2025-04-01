
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int sum = 0;
    int num;
    ifstream infile;

    infile.open("numbers.dat");

    while ( infile >> num)
    {
        sum = sum + num;
    }

    cout << "합 = " << sum << endl;
    infile.close();
    return 0;
}