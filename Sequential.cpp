/*
NAMA      : TIVANI SHAKILLA ERVI
NPM       : 140810170014
KELAS     : B
MATKUL    : ANALISIS ALGORITMA
*/
#include <iostream>
using namespace std;

int main() {

 int i, x, cari;
 int indeksnya;
 bool ketemu = false;
 int A[10];
 int jwb;
  cout << "Banyak data yang akan diinput? ";
  cin >> x;

  for(i=0; i<x; i++)
  {
   cout << "\nData ke-" << i << " : ";
   cin >> A[i];
  }
  cout << "=====================================";
  cout << "\nMasukan data yang dicari: ";
  cin >> cari;
  cout << "=====================================" << endl;

  for(i=0; i<x; i++)
  {

   if(A[i] == cari)
   {
    ketemu = true;
    indeksnya = i;
    i = x;
   }
  }
  if(ketemu == true)
  {
   cout << "Data ditemukan pada index: " << indeksnya;
  }
  else
  {
   cout << "Data tidak ditemukan!";
  }
 cout << "\n";
 system("pause");
}
