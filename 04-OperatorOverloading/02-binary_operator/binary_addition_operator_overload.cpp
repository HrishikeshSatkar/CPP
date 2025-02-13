#include <iostream>

class Complex
{
private:
    /* data */
    int m_real;
    int m_img;
public:
    Complex(int, int);
    Complex(const Complex&);
    ~Complex();
    Complex operator+(const Complex& other);
    Complex& operator=(const Complex& other);
    friend std::ostream& operator<<(std::ostream& out, const Complex& obj);
};

Complex::Complex(int real = 0, int img = 0):m_real(real), m_img(img)
{
    std::cout<<"constructor called!!!\n";
}

Complex::Complex(const Complex& other)
{
    std::cout<<"copy constructor called!!!\n";
    this->m_real = other.m_real;
    this->m_img = other.m_img;
}

Complex::~Complex()
{
}

Complex Complex::operator+(const Complex& other)
{
    return {this->m_real + other.m_real, this->m_img + other.m_img};
}

Complex& Complex::operator=(const Complex& other)
{
    std::cout<<"copy assignment operator called!!!\n";
    this->m_real = other.m_real;
    this->m_img = other.m_img;
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Complex& obj)
{
    out<<obj.m_real<<"+"<<obj.m_img<<"i"<<"\n";
    return out;
}

int main()
{
    Complex c1 = {12, 7};
    std::cout<<"C1 = "<<c1;
    Complex c2(4,4);
    std::cout<<"C2 = "<<c2;
    Complex c3 = c1 + c2;
    std::cout<<"C3 = "<<c3;
    Complex c4 = c3;
    std::cout<<"C4 = "<<c4;
    c2 = c3;
    std::cout<<"C2 = "<<c2;
    return (0);
}
