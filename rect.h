#pragma once
#include <string>
 
class Rect
 {
    private:
    int lon;
    std::string priv() const;
 
 
    protected:
    std::string prot() const;
 
 
    public:
    Rect() : lon(0) {}
    Rect(int toto) : lon(toto) {}
 
    int getLon() const;
    std::string toString() const;
    std::string publ() const;
 
 
 
 };
