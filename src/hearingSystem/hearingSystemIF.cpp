#include "hearingSystemIF.hpp"

hearingSystemIF::hearingSystemIF() : name("hearingSystemIF")
{
    //ctor
}

hearingSystemIF::hearingSystemIF(bool todo) : name("hearingSystemIF")
{
    if(todo==true)
        std::cout << name << " TODO ALL" << std::endl ;

}

hearingSystemIF::~hearingSystemIF()
{
    //dtor
}
