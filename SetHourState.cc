#include "SetHourState.h"

SetHourState::SetHourState() {
	hour = 0;
}

StateInterface* SetHourState::getNextState() {
	return new SetMinuteState();
} 

void SetHourState::inc() {
	hour += 1;
	if (hour > 23) {hour = 0;}
}

void SetHourState::dec() {
	hour -= 1;
	if (hour < 0) {hour = 23;}
}

std::string SetHourState::display() {
	if (hour < 10) {
		return "0" + std::to_string(hour) + " Alarm Hour";
	} else {
		return std::to_string(hour) + " Alarm Hour";
	}
}