#include "Bush.h"
#include "Board.h"
#include "../LawnApp.h"
#include "../Resources.h"
#include "../GameConstants.h"
#include "../Sexy.TodLib/TodFoley.h"
#include "../Sexy.TodLib/TodDebug.h"
#include "../Sexy.TodLib/Reanimator.h"

Bush::Bush()
{
}

const ReanimationType BushReanims[] = { ReanimationType::REANIM_BUSH3,
                                        ReanimationType::REANIM_BUSH5,
                                        ReanimationType::REANIM_BUSH4,
                                        ReanimationType::REANIM_BUSH3_NIGHT,
                                        ReanimationType::REANIM_BUSH5_NIGHT,
                                        ReanimationType::REANIM_BUSH4_NIGHT 
};

void Bush::BushInitialize(int theX, int theY, int mRow, bool NightMode, int ID)
{
    int id = (ID + 3) % 3;
    if (NightMode)
        id += 3;
    mPosX = theX;
    mPosY = theY;
    mID = ID;
    mBushIndex = id;

    for (int i = 0; i < 6; i++)
    {
        switch (i)
        {
        case 0:
            BushImages[i] = IMAGE_BUSH3;
            break;
        case 1:
            BushImages[i] = IMAGE_BUSH5;
            break;
        case 2:
            BushImages[i] = IMAGE_BUSH4;
            break;
        case 3:
            BushImages[i] = IMAGE_NIGHT_BUSH3;
            break;
        case 4:
            BushImages[i] = IMAGE_NIGHT_BUSH5;
            break;
        case 5:
            BushImages[i] = IMAGE_NIGHT_BUSH4;
            break;
        default:
            break;
        }
        
    }
    mRenderOrder = Board::MakeRenderOrder(RenderLayer::RENDER_LAYER_ZOMBIE, mRow, 9);
    Reanimation* aBodyReanim = mApp->AddReanimation(mPosX, mPosY, mRenderOrder, BushReanims[mBushIndex]);
    if (ID == 3) {
        aBodyReanim->OverrideScale(1.2f, 1.3f);
    }
    mReanimID = mApp->ReanimationGetID(aBodyReanim);
    aBodyReanim->PlayReanim("base bush", REANIM_PLAY_ONCE_AND_HOLD, 0, 0.001f);
}

void Bush::AnimateBush()
{
    if (mApp->Is3DAccelerated())
    {
        Reanimation* mReanim = mApp->ReanimationTryToGet(mReanimID);
        if (mReanim)
            mReanim->PlayReanim("anim_rustle", REANIM_PLAY_ONCE_AND_HOLD, 10, RandRangeFloat(8.0f, 10.0f));
    }
}

void Bush::Update()
{
    if (mApp->Is3DAccelerated())
    {
        Reanimation* mReanim = mApp->ReanimationTryToGet(mReanimID);
        if (mReanim)
            mReanim->Update();
    }
}

void Bush::Draw(Graphics* g) {
    Graphics aBushGraphics(*g);
    if (mApp->Is3DAccelerated())
    {
        Reanimation* mReanim = mApp->ReanimationTryToGet(mReanimID);
        if(mReanim)
            mReanim->Draw(&aBushGraphics);
    }
    else
    {
        g->SetColorizeImages(true);
        aBushGraphics.DrawImage(BushImages[mBushIndex], mPosX, mPosY);
        g->SetColorizeImages(false);
    }
}