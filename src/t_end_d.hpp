#pragma once
#include <iostream>


class TEndD {
private:
  time_t _systemTime;

public:
  TEndD() {
    time_t now = time(nullptr);
    _systemTime = now;
  }

  TEndD(time_t systemTime) { _systemTime = systemTime; }

  TEndD(const TEndD &other) { _systemTime = other._systemTime; }

  ~TEndD();

  time_t getSystemTime() { return _systemTime; }
  void setSystemTime(time_t time) { _systemTime = time; }

  void print() { std::cout << ctime(&_systemTime); }
};
