#include "soundSystemIF.hpp"

soundSystemIF::soundSystemIF() : name("soundSystemIF")
{
    //ctor
}

soundSystemIF::soundSystemIF(bool todo) : name("soundSystemIF")
{
    if(todo==true)
        std::cout << name << " TODO ALL" << std::endl ;

}

soundSystemIF::~soundSystemIF()
{
    //dtor
}
