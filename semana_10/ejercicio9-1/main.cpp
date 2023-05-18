#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

void displayTime(const string& message, const Time& time) {
    cout << message << "\nUniversal time: " << time.toUniversalString() << "\nStandard time: " << time.toStandardtString() << "\n\n";
}

int main (){
    Time T ;
    displayTime("InitialTime:",T);
    T.setTime(13, 27, 6);
    displayTime("After setTime:",T);
    try {
        T.setTime(99, 99, 99);
    }
    catch(invalid_argument& e){
        cout << "Exception: " << e.what() << "\n\n";
    }
    displayTime("After attempting to set an invalid time:", T);
}