#ifndef __SETMINUTESTATE_H
#define __SETMINUTESTATE_H

#include "StateInterface.h"
#include "CurrentTimeState.h"
#include <string>
#include <time.h>

class SetMinuteState : public StateInterface {
private:
	int minute;
public:
	/// Default Constructor
	SetMinuteState();

	/// Default Desctructor
	~SetMinuteState() {}

	/// Return the next state after SetMinuteState
	virtual StateInterface* getNextState();

	/// Increment the minutes of Alarm Time
	virtual void inc();

	/// Decrement the minutes of Alarm Time
	virtual void dec();

	/// Returns the alarm clocks time
	virtual std::string display();
};

#endif