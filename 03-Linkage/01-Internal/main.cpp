#include <iostream>

extern int x;
extern int y;

extern void fun();

int main()
{
    std::cout<<"x = "<<x<<"\n"<<"y = "<<y<<"\n";
    fun();
}