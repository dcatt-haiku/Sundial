#include "TimerView.h"

TimerView::TimerView(void)
	:	BView(BRect(0,0,400,300), "Timer", B_FOLLOW_ALL_SIDES, B_WILL_DRAW)
{
	timerStringView = new BStringView(Bounds(), "Timer", "This is the timer view!");
	AddChild(timerStringView);
	timerStringView->ResizeToPreferred();
}