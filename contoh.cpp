#include <iostream>
using namespace std;

class PersegiPanjang
{
public:
     int panjang, lebar;

public:
    void input()
    {
        cout << "masukan panjang : " ;
        cin >> panjang;
        cout << "masukan lebar : " ;
        cin >> lebar;
    }
    int luasPp(int a, int b)
    {
        return a * b;
    }

};
