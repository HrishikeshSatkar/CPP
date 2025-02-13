#include <iostream>
#include <signal.h>

class String
{
private:
    /* data */
    char* m_buffer;
    unsigned int m_size;
public:
    String(const char*);
    ~String();
    String(const String& other) = delete;
    char& operator[](unsigned int);
    friend std::ostream& operator<<(std::ostream&, const String&);
};

String::String(const char* string)
{
    //code
    m_size = strlen(string);
    m_buffer = new char[m_size];
    memcpy(m_buffer, string, m_size);
}

String::~String()
{
    //code
    std::cout<<"destructor\n";
    delete []m_buffer;
}

char& String::operator[](unsigned int index)
{
    return m_buffer[index];
}

std::ostream& operator<<(std::ostream& out, const String& obj)
{
    //code
    out<<obj.m_buffer<<"\n";
    return out;
}

int main()
{
    String str1 = "Hrishikesh";
    String str2 = str1;
    std::cout<<str1;
    std::cout<<str2;
    str1[2] = 'u';
    std::cout<<str1;
    std::cout<<str2;
    return (0);
}
