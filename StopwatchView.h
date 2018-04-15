#ifndef STOPWATCHVIEW_H
#define STOPWATCHVIEW_H

#include <View.h>
#include <StringView.h>

class StopwatchView : public BView
{
public:
	StopwatchView(void);
	BStringView *stopwatchStringView;
	
private:
};

#endif
