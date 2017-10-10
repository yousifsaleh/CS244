#ifndef Squares.h
#define Squares.h

#include <iostream>
#include <sstream>
#include <string>

namespace shapes
{
  class Square1
  {
  public
  int side;
  Square1()
  {
    side=1;
    std::cout << "Square1: Object has been with default constructor \n";
  }
  Square1(int side)
  {
    this -> side = side;
    std::cout << "Square1: Object has been created by overloaded constructor \n";
  }
  ~Square1()
  {
    std::cout << "Square1: object has been destroyed\n";
  }
  };

  class Square2
  {
  public:
    int* slide;
    Square2()
    {
      side= new int;
      *side = 1;
      std::cout << "Square2: Object has been with default constructor \n";
  }
  Square2(int size)
  {
    this -> side= new int;
    *(this -> side)=side;
    std::cout << "Square2: Object has been with default constructor \n";
  }
  ~Square2()
  {
    delete slide;
    std::cout << "Square2: Object has been destroyed\n";
  }
  };
#endif
