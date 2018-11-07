#include <iostream>
#include "box.h"
using namespace std;



Box::Box()
{

}
Box::Box(int l,int w,int h)
{
  length=l;
  width=w;
  height=h;
}

void Box::set_length(int l)
{
length=l;
}
void Box::set_width(int w)
{
width=w;
}
void Box::set_height(int h)
{
height=h;
}


int Box::get_length()
{
return length;
}
int Box::get_width()
{
return width;
}
int Box::get_height()
{
return height;
}














