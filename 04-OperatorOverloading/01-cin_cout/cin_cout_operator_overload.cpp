#include <iostream>
#include <string>
class Employee
{
private:
    /* data */
    std::string name;
    int age;
    double salary;
public:
    Employee(/* args */);
    ~Employee();
    friend std::istream& operator>>(std::istream& in, Employee& obj);
    friend std::ostream& operator<<(std::ostream& out, const Employee& obj);
};

Employee::Employee(/* args */)
{
}

Employee::~Employee()
{
}

std::istream& operator>>(std::istream& in, Employee& obj)
{
    getline(in, obj.name);
    in >>obj.age;
    in >> obj.salary;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Employee& obj)
{
    puts("=====Employee Information=====");
    out<<obj.name<<"\n";
    out<<obj.age<<"\n";
    out<<obj.salary<<"\n";
    puts("==============================");
    return out;
}

int main()
{
    Employee e1;
    std::cin>>e1;
    std::cout<<e1;
    return (0);
}