#ifndef __BUSH_H__
#define __BUSH_H__

#include "GameObject.h"

namespace Sexy
{
    class Graphics;
}
using namespace Sexy;

class Bush : public GameObject
{
public:
    int                     mPosX;
    int                     mPosY;
    int                     mID;
    int                     mBushIndex;
    ReanimationID           mReanimID;

public:
    Bush();

    void                    BushInitialize(int theX, int theY, int mRow, bool NightMode);
    void                    Update();
    void                    Draw(Graphics* g);
    void                    AnimateBush();
};

#endif
