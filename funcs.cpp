/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 09
  - Functions for tasks A, B, C & E.
*/

#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3D.h"

// Task A
double length(Coord3D *p){
  return sqrt(pow((*p).x, 2) + pow((*p).y, 2) + pow((*p).z, 2));
}

// Task B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double x = length(p1);
    double y = length(p2);
    return x < y ? p2 : p1; // x > y ? p1 : p2;
}

// Task C
void move(Coord3D *ppos, Coord3D *pvel, double dt){
  (*ppos).x += (*pvel).x * dt;
  (*ppos).y += (*pvel).y * dt;
  (*ppos).z += (*pvel).z * dt;
}

// Task E
Coord3D* createCoord3D(double x, double y, double z){
  Coord3D *ppos = new Coord3D;
  (*ppos).x = x;
  (*ppos).y = y;
  (*ppos).z = z;
  return ppos;
}


void deleteCoord3D(Coord3D *p){
  delete p;
}

