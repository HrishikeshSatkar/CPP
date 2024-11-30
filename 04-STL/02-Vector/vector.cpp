#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = {1, 2, 3};
    std::cout<<"v1:";
    for(int i = 0; i < v1.size(); i++)
    {
        std::cout<<v1[i]<<" ";
    }
    std::cout<<"\n";

    std::vector<int> v2(5,100);
    std::cout<<"v2:";
    for(auto& val: v2)
    {
        std::cout<<val<<" ";
    }
    std::cout<<"\n";

    std::cout<<"v3:";
    std::vector<int> v3 = {100, 200, 300, 400, 500};
    v3.insert(v3.begin(), 5, 12);
    v3.erase(v3.begin(), v3.begin()+2);
    std::vector<int>::iterator it = v3.begin();
    while (it != v3.end())
    {
        /* code */
        std::cout<<*it<<" ";
        it++;
    }
    std::cout<<"\n";
    v3.clear();
    std::cout<<std::boolalpha<<v3.empty();
    return (0);
}