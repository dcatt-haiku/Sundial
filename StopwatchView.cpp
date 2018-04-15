#include "StopwatchView.h"

StopwatchView::StopwatchView(void)
	:	BView(BRect(0,0,400,300), "Stopwatch", B_FOLLOW_ALL_SIDES, B_WILL_DRAW)
{
	stopwatchStringView = new BStringView(Bounds(), "Stopwatch", "This is the stopwatch view!");
	AddChild(stopwatchStringView);
	stopwatchStringView->ResizeToPreferred();
}