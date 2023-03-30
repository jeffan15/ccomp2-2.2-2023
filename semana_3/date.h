#include <iostream>
#include <string>
using namespace std;

class date{
private:
    int month{0};
    int day{0};
    int year{0};
public:
    date(int initMonth, int initDay, int initYear){
        month = initMonth;
        day = initDay;
        year = initYear;
    }
    void setDay(int initDay){
        if(initDay < 32 and initDay > 0)
            day = initDay;
        else
            day = 1;
    }
    void setMonth(int initMonth){
        if(initMonth < 13 and initMonth > 0)
            month = initMonth;
        else
            month = 1;
    }
    void setYear(int initYear){
        if(initYear > 0)
            year = initYear;
        else
            year = 2023;
    }
    int getDay() const {
        return day;
    }
    int getMonth() const {
        return month;
    }
    int getYear() const {
        return year;
    }
    void displayDate(){
        cout << day << "/" << month << "/" << year << endl;
    }
};