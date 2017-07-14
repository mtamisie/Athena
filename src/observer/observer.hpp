#ifndef OBSERVER_H
#define OBSERVER_H
#include <string>
#include <iostream>
#include <list>
#include <memory>

class observer
{
    public:
        observer();
        observer(bool todo);
        virtual ~observer();
       // virtual bool notify() = 0;
    protected:
        std::string name;
};

class observable
{
    public:
        observable();
        observable(bool todo);
        virtual ~observable();
       //virtual void addObserver(observer& obs) const = 0;
       //virtual void deletObserver(observer& obs) const = 0;
       //virtual void notifyObserver() const = 0;
    protected:
        std::string name;
        std::list<std::shared_ptr<observer>> obsList;
};


#endif // OBSERVER_H
