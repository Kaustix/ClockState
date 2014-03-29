#include "SetMinuteState.h"

SetMinuteState::SetMinuteState() {
	minute = 0;
}

StateInterface* SetMinuteState::getNextState() {
	return new CurrentTimeState();
} 

void SetMinuteState::inc() {
	minute += 1;
	if (minute > 59) {minute = 0;}
}

void SetMinuteState::dec() {
	minute -= 1;
	if (minute < 0) {minute = 59;}
}

std::string SetMinuteState::display() {
	if (minute < 10) {
		return "0" + std::to_string(minute) + " Alarm Minute";
	} else {
		return std::to_string(minute) + " Alarm Minute";
	}
}