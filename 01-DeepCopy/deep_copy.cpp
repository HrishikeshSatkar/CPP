#include <iostream>

class Test
{
private:
    int* m_data;

public:
    Test(int val = 10):m_data(new int(val)){}

    Test(const Test& other)
    {
        m_data = new int(*other.m_data);
    }

    Test& operator=(const Test& other)
    {
        if(this == &other)
            return *this;

        if(m_data)
            delete m_data;

        m_data = new int(*other.m_data);

        return *this;
    }

    void setValue(int value)
    {
        *this->m_data = value;
    }

    int getValue() const
    {
        return *this->m_data;
    }
};

int main()
{
    Test obj1;
    Test obj2(obj1);
    std::cout<<obj1.getValue()<<"\n";
    std::cout<<obj1.getValue()<<"\n";
    obj1.setValue(200);
    std::cout<<obj1.getValue()<<"\n";
    std::cout<<obj2.getValue()<<"\n";
    return 0;
}