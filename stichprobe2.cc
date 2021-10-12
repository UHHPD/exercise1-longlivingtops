#include<iostream>
#include<fstream>
#include<cmath>

int main() {
  std::ifstream fin1("datensumme.txt"); 
  std::ifstream fin2("datensumme.txt");
  std::ofstream fmit("mittelwerte.txt");
  std::ofstream fvar("varianzen.txt");
  double summit = 0;
  double sumvar = 0;
  for(int j = 0 ; j < 26 ; ++j) {
    int sum;
    double mittelwert = 0;
    for(int i = 0 ; i < 9 ; ++i) {
        fin1 >> sum;
        mittelwert += sum;
    }
    mittelwert /= 9;
    fmit << mittelwert << std::endl;
    summit += mittelwert;
    double varianz = 0;
    for(int i = 0 ; i < 9 ; ++i) {
        fin2 >> sum;
        varianz += (sum-mittelwert)*(sum-mittelwert);
    }
    varianz /= 9;
    fvar << varianz << std::endl;
    sumvar += varianz;
  }
  fin1.close();
  fin2.close();
  summit /= 26;
  sumvar /= 26;
  std::cout << "Mittelwert der Mittelwerte:" << summit << std::endl;
  std::cout << "Mittelwert der Varianzen :" << sumvar << std::endl;
}

