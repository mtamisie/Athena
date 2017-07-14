#ifndef HEARINGSYSTEMIF_H
#define HEARINGSYSTEMIF_H

#include "observer.hpp"
#include "vector"
#include "list"
#include <string>
#include <iostream>


class hearingSystemIF : public observable
{
    public:
        hearingSystemIF();
        hearingSystemIF(bool todo);
        virtual ~hearingSystemIF();

    protected:
        std::vector<double> buffer;
        std::string name;
};

#endif // HEARINGSYSTEMIF_H
