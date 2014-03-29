#include "CurrentTimeState.h"

StateInterface* CurrentTimeState::getNextState() {
	return new SetHourState();
} 

void CurrentTimeState::inc() {}
void CurrentTimeState::dec() {}

std::string CurrentTimeState::display() {
	time_t t = time(0); // get time now
	struct tm * now = localtime(&t);
	char buf[80];
	strftime(buf, sizeof(buf), "%R", now);
	return buf;
}