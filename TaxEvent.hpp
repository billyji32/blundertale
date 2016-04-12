/*********************************************************************
 ** Program Filename: TaxEvent.hpp
 ** Author: Billy Ji
 **  
 ** Description: Contains the definition of the TaxEvent class.  A
 **              TaxEvent represents a possibility for the user to get
 **              taxed.
 *********************************************************************/


#ifndef TAX_EVENT_HPP
#define TAX_EVENT_HPP

#include "Event.hpp"

class TaxEvent : public Event
{
public:
  TaxEvent(Pilot* p) : Event(p) { }
  
  virtual void run();
};

#endif /* TAX_EVENT_HPP */
