

#ifndef TAXI_H
#define TAXI_H

#include <iostream>

#include "vehicle.h"


class Taxi : public Vehicle {

public:
   Taxi( double );

   bool hasCustomers() const;
   void setCustomers( bool );

   

   virtual void print() const;
   virtual string getClassName() const;

private:
   bool customers;

}; 

#endif 





