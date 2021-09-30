#include "rect.h"
 
int Rect::getLon() const
 {
     return lon;
 }
 
std::string Rect::toString() const
    {
        return "Longueur : "+std::to_string(lon) +"\n";
    }
std::string Rect::prot() const
    {
        return "PROT\n";
    }
std::string Rect::priv() const
    {
        return "PRIV\n";
    }
 
std::string Rect::publ() const
    {
        return "PUB\n";
    }
