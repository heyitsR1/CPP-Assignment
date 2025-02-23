#pragma once
#include <string>

class Triangle{
    private:
    float a; 
    float b;
    float c; 

    public:
    

    float get_a() const;
    void set_a(float a);

    float get_b() const;
    void set_b(float b);

    float get_c() const;
    void set_c(float c);

    std::string type(float a, float b, float c);
};