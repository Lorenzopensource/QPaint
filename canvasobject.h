#ifndef CANVASOBJECT_H
#define CANVASOBJECT_H

#include <list>

class CanvasObject
{
private:
    struct Coords{
        short x:8;
        short y:8;
    };
    std::list<Coords> CoordsOccupation;
public:
    CanvasObject();
    virtual ~CanvasObject()=0;
};

#endif // CANVASOBJECT_H
