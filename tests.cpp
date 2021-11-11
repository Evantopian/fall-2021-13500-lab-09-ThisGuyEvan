#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
// #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

TEST_CASE("Task A:"){
  SUBCASE("Zero Case:"){
    Coord3D pointP = {0, 0, 0};
    CHECK(length(&pointP) == 0);
  }
  
  SUBCASE("Normal:"){
    Coord3D pointP = {10, 20, 30};
    CHECK(length(&pointP) == sqrt(10*10+20*20+30*30));

    pointP = {6, 13, 4};
    CHECK(length(&pointP) == sqrt(6*6+13*13+4*4));

    pointP = {25, 25, 25};
    CHECK(length(&pointP)== sqrt(25*25*3));
  }
}


TEST_CASE("Task B"){
  SUBCASE("Normal:"){
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);

    pointP = {50, 10 ,10};
    pointQ = {100, 50, 30};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointQ);
  }
  
  SUBCASE("Equal:"){
    Coord3D pointP = {10, 10, 10};
    Coord3D pointQ = {10, 10, 10};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);

    pointQ = {30, 75, 93};
    pointP = {93, 75, 30};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
  }  
}


TEST_CASE("Task C:"){
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  CHECK((pos.x == 2 && pos.y == -10 && pos.z == 100.4));

  pos = {0, 2, 4};
  vel = {8, 10, 12};
  move(&pos, &vel, 5.0);
  CHECK((pos.x == 40 && pos.y == 52 && pos.z == 64));

  pos = {5.5, 11.0, 16.5};
  vel = {-1.5, 3.5, -7.2};
  move(&pos, &vel, 5.5);
  CHECK((pos.x == -2.75 && pos.y == 30.25 && pos.z == -23.1));
}


TEST_CASE("Task E:"){
  Coord3D * ppos = createCoord3D(25, 50, 100);
  CHECK((ppos-> x == 25 && ppos-> y == 50 && ppos-> z == 100));
  Coord3D * pvel = createCoord3D(-33.33, 66.67, -99.99);
  CHECK((pvel-> x == -33.33 && pvel-> y == 66.67 && pvel-> z == -99.99));
  
  deleteCoord3D(ppos);
  deleteCoord3D(pvel);
}
