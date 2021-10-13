#include <iostream>
#include <vector>
//#include <test.hh>


using namespace std;
int main () {
string word="Test";
cout << "Hallo Welt!"+word<< endl ;

for (int i=1; i<31;i++)
{
  cout << i << endl;
}
cout << "TEST"<< endl ;
vector<int> v_test={3,2,1,29};
v_test.push_back(3);
for (int i:v_test)
{
  cout << i << endl;
}


return 0;
}
//heyo i am hereeeeeeeeeeeeeeesadasdasddasds