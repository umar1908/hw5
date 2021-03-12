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
#include <iterator>
#include <regex>


// “ак как у всех почтовых сервисов свои правила сильно сужающие множество возможных адрес, а если придерживатьс€ всех
// общих правил из стандарта, то выражение будет неоправдано огромным
// (например стандарт разрешает использование пробелов, если логин обрамлен в "",
// что на практике не встречаетс€ нигде), были выбраны средней строгости требовани€
// предложенные на лдном из интернет ресурсов

/*
ƒл€ E-Mail


1) –азрешены имена пользователей в email с 1 или 2 буквами, а также 3 и более. –азрешены символы "-", ".", "_" в середине ника пользовател€ email.

Ќе разрешено:

»м€ пользовател€ не может начинатьс€ с символов "-", ".", "_" или любого не буквенного символа.

2) –азрешены любые иерархические домены. Ќапример: admin.office.com. ѕравила символов такие же как и в 1-м пункте ƒомен первого уровн€
имеет минммум 2 символа.

3) –азрешаетс€ от 2 до 9 символов в TLD имени домена.

4) Ќе разрешены адреса с указанием IP.


*/


int main(){
  system("chcp 1251"); //дл€ корректного отображени€ кирилицы
  cout<<endl;
  string test_string="  2.w@a.l.lk asfsdf umsdf s d3929439 umar190801@gmail.com dfd -3423@@#$23.com 213@err.-com 23-ed_33@gpp.dss.ss.-2--.ru sss@_gm.aa 333s0@.os.cpm 1@a.uk s---s@_s.ss, s---s@1--s.ss.uz aaa32@s.u tash_selmash@c++.ru", s;
  regex pattern(R"( [[:alnum:]]([-._[:alnum:]]*[[:alnum:]])?(@[[:alnum:]]([[:alnum:]-.]*[[:alnum:]])?\.[[:alpha:]]{2,9}))");
  sregex_iterator begin(test_string.begin(),test_string.end(),pattern);
  sregex_iterator end;
  for_each(begin,end,[](auto m){cout<<setfill('.')<<setw(30)<<left<<m[0]<<" "<<" домен: "<<m[2]<<endl;});



}
