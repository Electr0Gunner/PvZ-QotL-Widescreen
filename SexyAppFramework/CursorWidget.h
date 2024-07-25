#ifndef __CURSORWIDGET_H__
#define __CURSORWIDGET_H__

#include "../../SexyAppFramework/Widget.h"
#include "../../SexyAppFramework/SexyAppBase.h"
#include "../../SexyAppFramework/WidgetManager.h"

namespace Sexy
{

	class Image;

	class CursorWidget : public Widget
	{
	public:
		SexyAppBase* mApp;
		Image* mImage;
		bool					mDraw;

	public:
		CursorWidget(SexyAppBase* theApp);

		virtual void			Draw(Graphics* g);
		void					SetImage(Image* theImage);
		void					Update();
	};

}

#endif //__CURSORWIDGET_H__