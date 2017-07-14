#ifndef BRAINIF_H
#define BRAINIF_H

#include "observer.hpp"
#include <string>
#include <iostream>


class brainIF : public observer
{
    public:
        brainIF();
        brainIF(bool todo);
        virtual ~brainIF();
    protected:
        std::string name;
};

#endif // BRAINIF_H
