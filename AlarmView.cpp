#include "AlarmView.h"

AlarmView::AlarmView(void)
	:	BView(BRect(0,0,400,300), "Alarm", B_FOLLOW_ALL_SIDES, B_WILL_DRAW)
{
	alarmStringView = new BStringView(Bounds(), "Alarm", "This is the alarm view!");
	AddChild(alarmStringView);
	alarmStringView->ResizeToPreferred();
}
