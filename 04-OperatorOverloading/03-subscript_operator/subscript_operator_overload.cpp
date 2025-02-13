#include <iostream>

class Array
{
private:
    int* m_ptr;
    size_t m_size;
public:
    Array(size_t);
    ~Array();
    int& operator[](size_t);
    void set(int,int);
};

Array::Array(size_t arr_size = 0):m_size(arr_size)
{
    m_ptr = new int[m_size];
}

Array::~Array()
{
    delete[] m_ptr;
}

void Array::set(int index, int data)
{
    m_ptr[index] = data;
}

int& Array::operator[](size_t index)
{
    if(index < 0 || index >= m_size)
        throw std::out_of_range("Array index out of range");
    return m_ptr[index];
}
int main()
{
    Array* obj = new Array(10);

    for(int i = 0; i < 10; i++)
        obj->set(i, (i+1)*10);

    for(int i = 0; i < 15; i++)
    {
        try
        {
            std::cout<<(*obj)[i]<<std::endl;
        }
        catch(std::out_of_range& obj)
        {
            std::cout<<obj.what()<<std::endl;
        }
    }

    delete obj;
}
