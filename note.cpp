#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

int main()
{
    ifstream fin("scores.txt");
    ofstream fout("result.txt");
    assert(fin || fout);

    string name;

    int count = 0;
    double score[100] = {0,};
    while (fin >> name >> score[count])
    {
        count++;
    }

    sort(score, score + count);

    for (int i = 0; i < count; i++)
    {
        fout << score[i] << endl;
    }

    cout << "작성완료" << endl;
    fin.close();
    fout.close();

    return 0;
}