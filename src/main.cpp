#include "t_end_d.hpp"
#include <ctime>
#include <iostream>

int main() {
  tEndD t1;
  t1.print();

  std::tm tm{};

  tm.tm_year = 2003 - 1900;
  tm.tm_mon = 11 - 1;
  tm.tm_mday = 6;
  time_t birthday = std::mktime(&tm);
  tEndD tBirth(birthday);
  tEndD tBirthCopy(tBirth);
  tBirth.print();
  tBirthCopy.setSystemTime(tBirthCopy.getSystemTime() + 1000);
  tBirthCopy.print();
  return 0;
}
