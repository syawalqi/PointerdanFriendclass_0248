#include <iostream>
using namespace std;

class PersegiPanjang{
    public:
    int panjang, lebar;

    int LuasPersegiPanjang(int b, int a)
    {
        return a * b;
    }
};

class segitiga
{
    public:
    int alas, tinggi;
    int LuasSegitiga(int f, int g)
    {
        return 0.5 * f * g;
    }

    int hitung(PersegiPanjang p){
        return p.panjang;
    }
};

int main () {
    PersegiPanjang pp;
    segitiga sg;
    cout << "Masukan Panjang :";
    cin >> pp.panjang;
    cout << "Masukan Lebar :";
    cin >> pp.lebar;
    cout << "Masukan Tinggi :";
    cin >> sg.tinggi;
    cout << "Masukan Alas :";
    cin >> sg.alas;
    cout << "Luas Persegi Panjang :" << pp.LuasPersegiPanjang(pp.panjang, pp.lebar) << endl;
    cout << "Luas Segitiga :" << sg.LuasSegitiga(sg.alas, sg.tinggi) << endl;
}