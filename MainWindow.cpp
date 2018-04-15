#include "MainWindow.h"
#include "AlarmView.h"
#include "StopwatchView.h"
#include "TimerView.h"

#include <Application.h>
#include <TabView.h>

MainWindow::MainWindow(void)
	:	BWindow(BRect(100,100,500,400), "Sundial", B_TITLED_WINDOW, B_ASYNCHRONOUS_CONTROLS)
{
	BView *mainView = new BView(Bounds(), "mainView", B_FOLLOW_ALL, B_WILL_DRAW);
	BTabView *tabView = new BTabView(Bounds(), "tabView", B_WIDTH_AS_USUAL, B_FOLLOW_ALL);
	AlarmView *alarmView = new AlarmView();
	StopwatchView *stopwatchView = new StopwatchView();
	TimerView *timerView = new TimerView();
	
	AddChild(mainView);
	mainView->AddChild(tabView);
	
	tabView->AddTab(alarmView);
	tabView->AddTab(stopwatchView);
	tabView->AddTab(timerView);
	tabView->ResizeToPreferred();
	
	alarmView->SetViewColor(ui_color(B_PANEL_BACKGROUND_COLOR));
	alarmView->alarmStringView->SetViewColor(ui_color(B_PANEL_BACKGROUND_COLOR));
	
	stopwatchView->SetViewColor(ui_color(B_PANEL_BACKGROUND_COLOR));
	stopwatchView->stopwatchStringView->SetViewColor(ui_color(B_PANEL_BACKGROUND_COLOR));
	
	timerView->SetViewColor(ui_color(B_PANEL_BACKGROUND_COLOR));
	timerView->timerStringView->SetViewColor(ui_color(B_PANEL_BACKGROUND_COLOR));
}


void
MainWindow::MessageReceived(BMessage *msg)
{
	switch (msg->what)
	{
		default:
		{
			BWindow::MessageReceived(msg);
			break;
		}
	}
}


bool
MainWindow::QuitRequested(void)
{
	be_app->PostMessage(B_QUIT_REQUESTED);
	return true;
}
