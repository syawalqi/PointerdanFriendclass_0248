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