#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya function dari base Class";
    }
};

class derivedclass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "Hallo saya function dari derived Class";
    }
};

int main()
