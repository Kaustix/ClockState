#ifndef __SETHOURSTATE_H
#define __SETHOURSTATE_H

#include "StateInterface.h"
#include "SetMinuteState.h"
#include <string>
#include <time.h>

class SetHourState : public StateInterface {
private:
	int hour;
public:
	/// Default constructor
	SetHourState();

	/// Default desctructor
	~SetHourState() {}

	/// return the next state after SetHourState
	virtual StateInterface* getNextState();

	/// Increments the hour of the alarm clock time
	virtual void inc();

	/// Decrement the hour of the alarm clock time
	virtual void dec();

	/// Returns the alarm clocks time
	virtual std::string display();
};

#endif