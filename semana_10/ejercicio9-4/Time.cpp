#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second);
}

void Time::setTime(int h, int m, int s) {
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h) {
    if (h >= 0 && h < 24) {
        hour = h;
    }
    else {
        throw invalid_argument("hour must be 0-23");
    }
}