#include <iostream>

int add(int num1, int num2)
{
    return num1+num2;
}

int sub(int num1, int num2)
{
    return num1-num2;
}

int mul(int num1, int num2)
{
    return num1*num2;
}

int division(int num1, int num2)
{
    return num1/num2;
}

class CallableObject
{
private:
    int (*m_pfn)(int,int);
public:
    CallableObject(int (*)(int,int));
    void set(int(*)(int,int));
    int operator()(int,int);
    ~CallableObject();
};

CallableObject::CallableObject(int (*init_pfn)(int,int)):m_pfn(init_pfn)
{
}

CallableObject::~CallableObject()
{
}

void CallableObject::set(int(*new_fun)(int,int))
{
    m_pfn = new_fun;
}

int CallableObject::operator()(int arg1, int arg2)
{
    return m_pfn(arg1, arg2);
}

int main()
{
    CallableObject obj(add);
    std::cout<<obj(10, 20)<<std::endl;
    obj.set(sub);
    std::cout<<obj(100, 20)<<std::endl;
    obj.set(mul);
    std::cout<<obj(10, 20)<<std::endl;
    obj.set(division);
    std::cout<<obj(100, 20)<<std::endl;
    return (0);
}
