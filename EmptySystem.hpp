/*********************************************************************
 ** Program Filename: EmptySystem.hpp
 ** Author: Billy Ji
 **  
 ** Description: Contains the definition of the EmptySystem class.  An
 **              EmptySystem contains no enemies nor planet to land on.
 *********************************************************************/


#ifndef EMPTY_SYSTEM_HPP
#define EMPTY_SYSTEM_HPP

#include "AidEvent.hpp"
#include "Pilot.hpp"
#include "System.hpp"


class EmptySystem : public System
{
public:
  EmptySystem(std::string nm, const std::vector<Item>& items, Pilot* p, Map* m) :
            System(nm, items, EMPTY)
  {
    player = p;
    map = m;
  }
  
  virtual void special();
};

#endif /* EMPTY_SYSTEM_HPP */
