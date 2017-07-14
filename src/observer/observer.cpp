#include "observer.hpp"

observer::observer() : name("observer")
{
    //ctor
}

observer::observer(bool todo) : name("observer")
{
    if(todo==true)
        std::cout << name << " TODO ALL" << std::endl ;

}

observer::~observer()
{
    //dtor
}


observable::observable() : name("observable")
{
    //ctor
}

observable::observable(bool todo) : name("observable")
{
    if(todo==true)
        std::cout << name << " TODO ALL" << std::endl ;

}

observable::~observable()
{
    //dtor
}
