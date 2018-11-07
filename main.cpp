#include <iostream>
using namespace std;
#include "box.h"
int main()
{
  Box b1(10,15,20);
  Box b2;
  int l,w,h;
cout<<"box 1"<<endl;
  cout<<"Length= "<<b1.get_length()<<endl;
  cout<<"Width ="<<b1.get_width()<<endl;
  cout<<"Height= "<<b1.get_height()<<endl;
cout<<"box2"<<endl;
cout<<"Enter your length"<<endl;
cin>>l;
b2.set_length(l);
cout<<"Enter your width"<<endl;
cin>>w;
b2.set_width(w);
cout<<"Enter your height"<<endl;
cin>>h;
b2.set_height(h);

cout<<"Length= "<<b2.get_length()<<endl;
cout<<"Width="<<b2.get_width()<<endl;
cout<<"Height= "<<b2.get_height()<<endl;
return 0;
}
