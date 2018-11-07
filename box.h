#include <iostream>
class Box{
public:
Box();
Box(int l,int w,int h);
void set_length(int l);
void set_width(int w);
void set_height(int h);
int get_length();
int get_width();
int get_height();
~Box();
private:
int length,width,height;
};
