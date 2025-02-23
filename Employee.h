#pragma once
#include <string>

class Employee{
    private:
    std::string name; 
    int id; 
    float salary;
    public:
    
    std::string get_name() const;
    void set_name(std::string n);

    int get_id() const;
    void set_id(int i);

    float get_salary() const;
    void set_salary(float s);

    float calculate_salary(float salary, float performance);

};