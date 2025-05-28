#include "RandomInteger.h"

RandomInteger::RandomInteger(int lw, int hh)
:low(lw), high(hh) // 파라미터로 받은 내용 그대로 데이터 멤버 저장
{
    srand(time(0));
    int temp = rand();
    value = temp %(high - low + 1) + low; // 계산 후 데이터 멤버 저장
}

RandomInteger::~RandomInteger()
{
}

void RandomInteger::print() const
{
    cout << value << endl;

}