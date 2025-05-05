#include <iostream>
using namespace std;

class mahasiswa
{
public :
    int nim;
    void shownim(){
        cout << "No Induk = "<<nim<<endl;
    }    
};

int main(){
    mahasiswa mhs; // object mhs
    mhs.nim = 2024; 
    mhs.shownim(); //Member Acces operator

    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Access operator
    mhs.shownim();

    mahasiswa *pMhs = &mhs; //pointer Dereference pMhs
    pMhs->nim = 3; //Arrow Operator
    pMhs->shownim();
    return 0;
}