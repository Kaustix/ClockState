#ifndef __CURRENTTIMESTATE_H
#define __CURRENTTIMESTATE_H

#include "StateInterface.h"
#include "SetHourState.h"
#include <string>
#include <time.h>

class CurrentTimeState : public StateInterface {
public:
	/// Default constructor
	CurrentTimeState() {};

	/// Default desctructor
	~CurrentTimeState() {};

	/// return the next state after current time state
	virtual StateInterface* getNextState();

	/// empty implementation, does not increment the time
	virtual void inc();

	/// empty implementation, does not decrement the time
	virtual void dec();

	/// return the current date/time now
	virtual std::string display();
};

#endif