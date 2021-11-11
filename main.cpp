#include <iostream>
#include "funcs.h"
#include "coord3D.h"


int main(){

  Coord3D *ppos = createCoord3D(10, 20, 30);
  Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77);
  move(ppos, pvel, 10.0);

  std::cout << "Coordinates after 10 seconds: " 
            << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

  return 0;
}
