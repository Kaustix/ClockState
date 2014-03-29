#ifndef __STATEINTERFACE_H
#define __STATEINTERFACE_H

#include <string>

class StateInterface {
 public:
 	StateInterface() {};
 	~StateInterface() {};
 	virtual StateInterface* getNextState() = 0;
	virtual void inc() = 0;
	virtual void dec() = 0;
	virtual std::string display() = 0;
};

typedef StateInterface* State;

#endif