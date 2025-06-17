#include <iostream>
using namespace std;

template <typename T> T add(T data[], int n) 
{
    T sum = data[0];
    for(int i=1; i<n; i++) sum += data[i];
    return sum;
}

int main() 
{
    int iarr[] = {1,2,3,4,5};
    double darr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    string sarr[] = {"Apple ", "Banana ", "Carrot "};
    cout << add(iarr, 5) << endl;
    cout << add(darr, 5) << endl;
    cout << add(sarr, 3) << endl;
    return 0;
}