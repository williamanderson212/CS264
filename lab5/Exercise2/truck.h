// William ANDERSON 15494372
<<<<<<< HEAD
=======

// Chapter 9 of C++ How to Program
// truck.h
>>>>>>> a87e195ed681bd16c7624df72759b9d111777731
#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>

#include "vehicle.h"

<<<<<<< HEAD
class Truck : public Vehicle {
    public:
        /* Constructor */
        Truck(double);

        /* Getter */
        bool hasCargo() const;
        
        /* Setter */
        void setCargo(bool);

    private:
        /* Private Member */
        bool cargo;

        /* Printer */
        friend ostream& operator<<(ostream &, const Truck &);
};

#endif

/**************************************************************************
* (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
* Hall. All Rights Reserved.                                             *
*                                                                        *
* DISCLAIMER: The authors and publisher of this book have used their     *
* best efforts in preparing the book. These efforts include the          *
* development, research, and testing of the theories and programs        *
* to determine their effectiveness. The authors and publisher make       *
* no warranty of any kind, expressed or implied, with regard to these    *
* programs or to the documentation contained in these books. The authors *
* and publisher shall not be liable in any event for incidental or       *
* consequential damages in connection with, or arising out of, the       *
* furnishing, performance, or use of these programs.                     *
*************************************************************************/
=======
/* Write contents of truck.h, which defines class Truck */
class Truck : public Vehicle {
  friend ostream& operator<<( ostream &, const Truck & );

public:
  Truck(double);
  bool hasCargo() const;
  void setCargo(bool);

private:
  bool cargo;
};

#endif // TRUCK_H


/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
>>>>>>> a87e195ed681bd16c7624df72759b9d111777731