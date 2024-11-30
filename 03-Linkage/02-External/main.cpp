#include <iostream>

extern int g_x;
extern const int g_y;

int main()
{
    std::cout<<"x = "<<g_x<<"\n"<<"y = "<<g_y<<"\n";
    return (0);
}
