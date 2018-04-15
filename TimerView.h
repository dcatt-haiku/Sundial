#ifndef TIMERVIEW_H
#define TIMERVIEW_H

#include <View.h>
#include <StringView.h>

class TimerView : public BView
{
public:
	TimerView(void);
	BStringView *timerStringView;
	
private:
};

#endif
