#pragma once
#include <string>

class Student{
    private:
    std::string name; 
    int cls; 
    int roll; 
    float marks;
    float gpa;

    public:
    
    std::string get_name() const;
    void set_name(std::string n);

    int get_class() const;
    void set_class(int c);

    int get_roll() const;
    void set_roll(int r);

    float get_marks() const;
    void set_marks(float marks);

    float calculate_grade(float marks);

};