#include "brainIF.hpp"

brainIF::brainIF() : name("brainIF")
{
    //ctor
}

brainIF::brainIF(bool todo) : name("brainIF")
{
    if(todo==true)
        std::cout << name << " TODO ALL"<< std::endl ;

}

brainIF::~brainIF()
{
    //dtor
}
