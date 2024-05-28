#pragma once
#include "Box.h"

box::box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;

}
box::box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    breadth = newBreadth;
    height = newHeight;

}
box::~box(){

}
double box::GetVolume(){
    return length * breadth * height;
}
void box::SetLength(double len){
    length = len;
}
void box::SetBreadth(double bre){
    breadth = bre;
}
void box::SetHeight(double hei){
    height = hei;
}
box box::operator+(const box& b){
    box box;

    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
}
//main function for the program
int main(){
    box box1;  //declare Box1 of type Box
    box box2;  //declare Box2 of the type Box
    box box3;  //declare Box3 of the type Box
    double volume = 0.0;  //store the volume of a box here
   
   //box 1 specification
   box1.SetLength(6.0);
   box1.SetBreadth(7.0);
   box1.SetHeight(5.0);

   //box2 specifications
   box2.SetLength(12.0);
   box2.SetBreadth(13.0);
   box2.SetHeight(10.0);

   //volume of box 1
   volume = box1.GetVolume();
   cout<<"volume of box1: " << volume <<endl;

   //volume of box 2
   volume = box2.GetVolume();
   cout<<"volume of box2: "<<volume<<endl;

   //add two objects as follows:
   box1 + box2 = box3;

   //volume of box3
   volume = box3.GetVolume();
   cout << "volume of box3 : "<<volume<<endl;
   return 0;
   }