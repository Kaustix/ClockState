#ifndef __CLOCK_H
#define __CLOCK_H

#include <string>

class StateInterface;
typedef StateInterface* State;

class Clock {
 private:
  State state;
 public:
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
