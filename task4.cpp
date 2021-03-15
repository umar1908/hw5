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
  string test_time="00:00:00 00:00:01 00::34:33 00:00:30: 00:00:59 00:00:60 00:00:61 00:01:23 00:59:59 10:22:44 10:33:43 23:45:44 24:00:00 23:59:59 33:45:66 sdf s /// 44\":55:55 dfd " ;
  cout<<endl;
  regex pattern1(R"([[:digit:]]{4}\.((1[0-2])|(0[1-9]))\.((3[01])|([12][
0-9])|(0[1-9])))");
//HH:MM:SS
  regex pattern2(R"(((2[0-3])|([0-1][[:digit:]])):(([0-5][[:digit:]])):(([0-5][[:digit:]])))");
sregex_iterator begi1(test_string.begin(),test_string.end(),pattern1);
sregex_iterator begi2(test_time.begin(),test_time.end(),pattern2);
sregex_iterator end;
for_each( begi1,end,[](auto m){cout<<m[0]<<endl;});
for_each( begi2,end,[](auto m){cout<<m[0]<<endl;});


}
