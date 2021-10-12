#include<iostream>
#include<fstream>
#include<cmath>

int main() {
  std::ifstream fin1("datensumme.txt"); 
  int sum;
  double mittelwert = 0;
  for(int i = 0 ; i < 234 ; ++i) {
    fin1 >> sum;
    mittelwert += sum;
  }
  mittelwert /= 234;
  fin1.close();
  std::ifstream fin2("datensumme.txt");
  double varianz = 0;
  for(int i = 0 ; i < 234 ; ++i) {
    fin2 >> sum;
    varianz += (sum-mittelwert)*(sum-mittelwert);
  }
  fin2.close();
  varianz /= 234;
  std::cout << "Mittelwert:" << mittelwert << std::endl;
  std::cout << "Varianz:" << varianz << std::endl;
  std::cout << "Standardabweichung:" << sqrt(varianz) << std::endl;
}