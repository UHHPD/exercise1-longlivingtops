#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int zahl_1;
  int zahl_2;
  ifstream fin("daten.txt");
  ofstream fout("datensumme.txt");
  for (int x=0; x<234; ++x) {
    fin >> zahl_1;
    fin >> zahl_2;
    int out = zahl_1 + zahl_2;
    cout<< zahl_1 << " " << zahl_2 << endl;
    cout<< out << endl;
    //cout << zahl_1 << " + " << zahl_2 << " = " << out << endl;
    fout << out << endl;
  }
  fin.close();
  fout.close();

} 