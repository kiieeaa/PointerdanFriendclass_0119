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

class Lingkaran
{
    public:
        int jarijari;

    void input()
    {
        cout << "masukan jari-jari :" ;
        cin >> jarijari;
    }
    int luasLingkaran(int r)
    {
        return 3.14 * r * r ;
    }
};

int main()
{
    PersegiPanjang objekPP;
    Lingkaran ol;

    cout << "masukan panjang : ";
    cin >> objekPP.panjang;
    cout << "masukan Lebar : ";
    cin >> objekPP.lebar;
    cout << "Luas persegi panjang : " <<
    objekPP.luasPp(objekPP.panjang, objekPP.lebar) << endl;

}