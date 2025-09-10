#pragma once
#include <iostream>

class tEndD {
private:
  time_t _systemTime;

public:
  tEndD() {
    time_t now = time(nullptr);
    _systemTime = now;
  }

  tEndD(time_t systemTime) { _systemTime = systemTime; }

  tEndD(tEndD *other) { this->_systemTime = other->_systemTime; }

  ~tEndD() {
    std::cout << "Объект ";
    print();
    std::cout << " уничтожен" << std::endl;
    // WTF
  }

  time_t getSystemTime() { return _systemTime; }
  void setSystemTime(time_t time) { _systemTime = time; }

  void print() { std::cout << ctime(&_systemTime); }
};
