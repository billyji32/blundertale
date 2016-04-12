/*********************************************************************
 ** Program Filename: Bolq.hpp
 ** Author: Billy Ji
 **  
 ** Description: Contains the definition of the Bolq class.  A Bolq
 **              is a powerful, slow Fighter ship.
 *********************************************************************/


#ifndef BOLQ_HPP
#define BOLQ_HPP

#include "Fighter.hpp"


class Bolq : public Fighter
{
public:
  Bolq() : Fighter("Bolq XXXL", 500, 8, 100, 7)
  {
    weapon = new Weapon("Bomb.com", 80, 0.4, true);
    set_description();
  }
  
  virtual ~Bolq() { delete weapon; }
};

#endif /* BOLQ_HPP */
