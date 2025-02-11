#include<iostream>

class Date
{
private:
    int day,month,year;

public:
    // [1] Default Constructor
	Date()
    {
		//body
	}
	
    //[2] Default Constructor with initializer list
	Date():day(31),month(10),year(1999)
    {
		//body
	}
	
    //[3] Default Constructor with Assingment
	
	Date()
    {
	    day = 31;
	    month = 10;
	    year = 1999;
	}

    //[4] Default Constructor with initializer list & Assingment
	Date():day(31)
	{
	    month = 10;
	    year = 1999;
	}	

    //[5]Parameterised Constructor
	
	Date(int DAY,int MONTH,int YEAR)
    {
	}


    //[6] Parameterised Constructor with initailizer list
	Date(int DAY,int MONTH,int YEAR):day(DAY),month(MONTH),year(YEAR)
    {
	}

    //[7] Paramerterised Constructor with assigment
	Date(int DAY,int MONTH, int YEAR)
    {
	    day = DAY;
	    month = MONTH;
	    year = YEAR;
	}

    //[8] Parameterised Constructor with initializer list & Assingment
	Date(int DAY,int MONTH,int YEAR):day(DAY)
	{
	    month = MONTH;
	    year = YEAR;
	}	
};

int main()
{
	int day = 12;
	int month = 07;
	int year = 1999;
    //All Constructor call
    return 0;
}
