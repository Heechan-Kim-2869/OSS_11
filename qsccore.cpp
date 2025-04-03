
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    int count = 0;
    double sum, average, score, maxScore = 0.00;
    string name, maxStudent;


    ifstream fin;
    fin.open("scores.txt");
    if ( !fin )
    {
        cerr << "Error opening scores.txt" << endl;
        return -1;
    }
    while ( fin >> name >> score )
    {
        sum += score;
        count++;
        if ( score > maxScore )
        {
            maxScore = score;
            maxStudent = name;
        }
    }
    fin.close();


    average = sum / count;


    ofstream fout;
    fout.open("result.txt");
    if ( !fout )
    {
        cerr << "Error opening result.txt" << endl;
        return -1;
    }
    fout << "총 " << count << " 명" << endl;
    fout << "합계: " << fixed << setprecision(2) << showpoint << sum << endl;
    fout << "평균: " << fixed << setprecision(2) << showpoint << average << endl;
    fout << "최고점: " << maxStudent << " " << fixed << setprecision(2) << showpoint << maxScore << endl;
    fout.close();


    cout << "Results saved in result.txt." << endl;

    
    return 0;
}