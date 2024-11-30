#include <iostream>
#include <utility>

int main()
{
    std::pair<int,int> p1 = {12,7};
    std::cout<<p1.first<<" "<<p1.second<<"\n";

    std::pair<int,std::pair<int,int>> p2 = {1, {5, 7}};
    std::cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<"\n";

    std::pair<int,int> p3[] = {{1,2},{3,4},{5,6}};
    std::cout<<p3[0].first<<" "<<p3[0].second<<"\n"
             <<p3[1].first<<" "<<p3[1].second<<"\n"
             <<p3[2].first<<" "<<p3[2].second<<"\n";

    return (0);
}
