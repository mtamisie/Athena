#ifndef HEARINGSYSTEMIF_H
#define HEARINGSYSTEMIF_H


class hearingSystemIF : public observable
{
    public:
        hearingSystemIF();
        virtual ~hearingSystemIF();
    protected:
    private:
        std::vector<double> buffer;;
        std::list<observer> observerList;;;
};

#endif // HEARINGSYSTEMIF_H
