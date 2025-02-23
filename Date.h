#pragma once

class Date{
    private:
    int day; 
    int month;
    int year; 

    public:
    

    int get_day() const;
    void set_day(int d);

    int get_month() const;
    void set_month(int m);

    int get_year() const;
    void set_year(int y);

    bool isValid(int d, int m, int y);

};