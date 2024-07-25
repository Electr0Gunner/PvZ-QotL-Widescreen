#include "CursorWidget.h"

using namespace Sexy;

CursorWidget::CursorWidget(SexyAppBase* theApp)
{
	mApp = theApp;
	mMouseVisible = false;
	mImage = NULL;
	mDraw = false;
}

void CursorWidget::Draw(Graphics* g)
{
	if (mImage != NULL && mDraw)
		g->DrawImage(mImage, 0, 0);
}

void CursorWidget::SetImage(Image* theImage)
{
	mImage = theImage;
	if (mImage != NULL)
		Resize(mX, mY, theImage->mWidth, theImage->mHeight);
}

void CursorWidget::Update()
{
	mX = mApp->mWidgetManager->mLastMouseX - 30;
	mY = mApp->mWidgetManager->mLastMouseY - 25;
	mDraw = mApp->mCursorNum != CURSOR_NONE;
}