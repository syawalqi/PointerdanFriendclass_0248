#include <iostream>
using namespace std;

class mahasiswa{
    public :
    int nim;
    void showNim(){
        cout << " No Induk =" << nim << endl;
    }
};

int main(){
    mahasiswa mhs{1}; // Object mhs
    mhs.showNim(); // member acces operator

    mahasiswa &refMhs = mhs; // pointer referense refMhs
    refMhs.nim = 2; // member acces operator
    mhs.showNim();

    mahasiswa *pHms = &mhs;
    pHms->nim = 3;
    pHms->showNim();
    return 0;
}
