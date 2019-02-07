#ifndef STOPWATCHVIEW_H
#define STOPWATCHVIEW_H

#include <View.h>
#include <StopWatch.h>
#include <MessageRunner.h>

class StopwatchView : public BView
{
public:
	StopwatchView(void);
	void AttachedToWindow();
	virtual void MessageReceived(BMessage *);
	
	BMessageRunner 	*message_runner;
	BStopWatch		*stopwatch;
private:
    int TickTock(void);
	int UpdateClock(void);
	int DefaultButtonState(void);
    void Start();
	void Stop();
	void Reset();
};

#endif
