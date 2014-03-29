#include "Clock.h"

Clock::Clock() {
	state = new CurrentTimeState();
}

Clock::Clock(State s) : state(s) {};

void Clock::mode() {
	State temp = state;
	state = state->getNextState();
	delete temp;
	//state = state->getNextState();
}

void Clock::inc() {
	state->inc();
}

void Clock::dec() {
	state->dec();
}

std::string Clock::display() {
	return state->display();
}