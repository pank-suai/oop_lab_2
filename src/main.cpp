#include "t_end_d.hpp"
#include <ctime>
#include <iostream>

int main() {
  TEndD t1;
  std::cout << "Конструктор по умолчанию: ";
  t1.print();

  std::tm tm{};

  tm.tm_year = 2003 - 1900;
  tm.tm_mon = 11 - 1;
  tm.tm_mday = 6;
  time_t birthday = std::mktime(&tm);
  TEndD tBirth(birthday);
  TEndD tBirthCopy(tBirth);
  std::cout << "Объект 1: ";
  tBirth.print();
  std::cout << "Объект 2: ";
  tBirthCopy.print();
  return 0;
}
