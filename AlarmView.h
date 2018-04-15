#ifndef ALARMVIEW_H
#define ALARMVIEW_H

#include <View.h>
#include <StringView.h>

class AlarmView : public BView
{
public:
	AlarmView(void);
	BStringView *alarmStringView;
	
private:
};

#endif
