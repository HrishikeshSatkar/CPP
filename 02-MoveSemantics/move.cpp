#include <iostream>

class Test
{
private:
    int* m_data;

public:
    Test(int val = 10):m_data(new int(val)){}

    Test(Test&& other)
    {
        m_data = other.m_data;
        other.m_data = nullptr;
    }

    Test& operator=(Test&& other)
    {
        if(this == &other)
            return *this;

        if(m_data)
            delete m_data;

        m_data = other.m_data;
        other.m_data = nullptr;
    }

    ~Test()
    {
        delete m_data;
    }

    bool isNull()
    {
        return m_data == nullptr;
    }
};

int main()
{
    Test obj1;
    std::cout<<std::boolalpha<<obj1.isNull()<<"\n";
    Test obj2 = std::move(obj1);
    std::cout<<std::boolalpha<<obj1.isNull()<<"\n";
    std::cout<<std::boolalpha<<obj2.isNull()<<"\n";
    return (0);
}