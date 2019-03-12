/*
NAMA      : TIVANI SHAKILLA ERVI
NPM       : 140810170014
KELAS     : B
MATKUL    : ANALISIS ALGORITMA
*/
#include <iostream>
using namespace std;

    int main() {
        a: double a1, a2, a3;
        cout << "========" << endl;
        cout << " * *" << endl;
        cout << "Menentukan Nilai Maksimal" << endl;
        cout << " * *" << endl;
        cout << "========" << endl;
        cout << "" << endl;

        cout << " 1. Masukan Nilai ke 1 : ";
        cin>>a1;
        cout << "" << endl;
        cout << " 2. Masukan Nilai ke 2 : ";
        cin>>a3;
        cout << "" << endl;
        cout << " 3. Masukan Nilai ke 3 : ";
        cin>>a3;
        cout << "" << endl;
        cout << " *************************************" << endl;
        if (a1==a2 && a1==a3)
            cout << " Ketiga nilai itu : SAMA BESAR" << endl;
        else if (a1>=a2 && a1 >= a3)
            cout << " Nilai tertinggi Adalah " <<a1;
        else if (a2>=a3 && a2 >= a1)
            cout << " Nilai tertinggi Adalah " <<a2;
        else if (a3>=a2 && a3 >= a1)
            cout << " Nilai tertinggi Adalah " <<a3;
                cout << "" << endl;
                    cout << "" << endl;
                        cout << "" << endl;
        goto a;
        return 0;
}
