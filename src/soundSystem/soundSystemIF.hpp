#ifndef SOUNDSYSTEMIF_H
#define SOUNDSYSTEMIF_H
#include <string>
#include <iostream>

class soundSystemIF
{
    public:
        soundSystemIF();
        soundSystemIF(bool todo);
        virtual ~soundSystemIF();
    protected:
    private:
        std::string name;
};

#endif // SOUNDSYSTEMIF_H
