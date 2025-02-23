#include<string>
#include<iostream>

#include "Date.h"

using std::cout;
using std::endl;



int Date::get_day() const{
    return day;
}

void Date::set_day(int d){
    day = d;
}

int Date::get_month() const{
    return month;
}

void Date::set_month(int m){
    month = m;
}

int Date::get_year() const{
    return year;
}

void Date::set_year(int y){
    year = y;
}
bool Date::isValid(int d, int m, int y) {
    if (m < 1 || m > 12 || d < 1) return false; 

    int days_in_month;

    switch (m) {
        case 2: // February
            // Leap year check
            days_in_month = ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            days_in_month = 30;
            break;
        default: 
            days_in_month = 31;
    }
    return d <= days_in_month;
}


