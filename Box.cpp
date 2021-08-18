#include "Box.h"

// Implement setters and getters
void Box::setLength(int l){
  length = l;
}

void Box::setWidth(int W){
  Width = W;
}

void Box::setHeight(int H){
  Height h;
}

int Box::getLength(){
  return length;
}

int Box::getWidth(){
 return width;
}

int Box::geHeight(){
 return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}
