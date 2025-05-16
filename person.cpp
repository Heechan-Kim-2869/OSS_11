#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
        string name;
    
    public:
        Person( string defaultName );
        ~Person();
        string getName() const;
        void setName( string newName );

};

Person::Person( string defaultName )
:name(defaultName) {}

Person::~Person()
{
    cout << "name destroyed" << endl;
}

string Person::getName() const
{
    return name;
}

void Person::setName( string newName )
{
    string familyName = "고";
    int len = familyName.size();

    if ( name.substr(0, len) == newName.substr(0, len))
    {
        name = newName;
        cout << name << "로 변경 완료" << endl;

    }
    else 
    {
        cout << "Family name change not allowed" << endl;
    }
}

int main()
{
    Person p1("고길동");
    cout << p1.getName() << endl;
    string newName;
    cout << "새로운 이름 입력: ";
    cin >> newName;
    p1.setName( newName );

    return 0;
}