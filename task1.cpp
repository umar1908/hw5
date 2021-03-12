#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <locale>
#include <sstream>
using namespace std;

int main(){
  cout<<"Введите сумму в долларах:\n (стандартный формат: $xxx.yy или xxx.yy$)\n";
  long double dollars;
  long double euro;
  const long double convert_rate=0.84;
  cin.imbue(locale("en_US.utf-8"));
  cin>>get_money(dollars);
  cout.imbue(locale("en_US.utf-8"));
  cout<<"Введенная сумма: "<<showbase<<put_money(dollars,false)<<endl;
  euro=dollars*convert_rate;
  cout.imbue(locale("de_DE.utf-8"));

  cout<<"Конвертированная сумма: "<<put_money(euro);



}
