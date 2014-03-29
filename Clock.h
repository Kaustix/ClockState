#ifndef __CLOCK_H
#define __CLOCK_H

#include <string>
#include "StateInterface.h"
#include "CurrentTimeState.h"
#include "SetHourState.h"
#include "SetMinuteState.h"

class Clock {
 private:
  State state;
 public:

  /// default constructor called if not specifying clock state, defaults to CurrentTimeState
  Clock();

  /// constructor for Clock
  /**
    \param s the State of the Clock being initialized
  */
  Clock(State s);

  /// default destructor
  ~Clock() {delete state;}

  /// called when the mode key is pressed
  void mode();

  /// called when the + key is pressed
  void inc();

  /// called when the - key is pressed
  void dec();

  /// the display function
  /**
     \return a string representing what is currently displayed by the
     clock. 
   */
  std::string display();
};

#endif
