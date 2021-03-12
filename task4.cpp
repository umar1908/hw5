#include <iostream>
#include <iomanip>
using namespace std;
// #include <functional>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <cmath>
// #include <cstdlib>
// #include<utility>
// #include <exception>
// #include <bitset>
// #include<random>
#include<regex>

int main(){ //YYYY.MM.DD
  system("chcp 1251"); //для корректного отображения кирилицы
  string test_string="2020.00.00 2020.00.01 2020.00.12 2020.01.00 2020.01.01 2020.01.02 2020.01.01 2020.05.30 2020.05.31 2020.05.32 2020.09.29 2020.10.01 2020.10.31 2020.11.31 2020.12.20 2020.13.22 ewr ee 34/3443/3 3.3.3. 33.3..3..3 ewrwe sdas --1002..3423;@ ";
  cout<<endl;
  regex pattern(R"([[:digit:]]{4}\.((1[0-2])|(0[1-9]))\.((3[01])|([12][
0-9])|(0[1-9])))");
sregex_iterator begin(test_string.begin(),test_string.end(),pattern);
sregex_iterator end;
for_each( begin,end,[](auto m){cout<<m[0]<<endl;});


}
