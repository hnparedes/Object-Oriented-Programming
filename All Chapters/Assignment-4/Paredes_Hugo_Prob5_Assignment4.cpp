#include <iostream>
#include <ctime>

class MyDate
{

    private:
        int year;
        int month; // 0 based, so its january
        int day;

    public:
        //No-arg constructor that sets the date to the current date
        MyDate() 
        {

            time_t now = time(0);
            setDate(now);

        }

        // Constructor with elapsed time since January 1, 1970, in seconds
        MyDate(unsigned long int elapsedTime)
        {

            setDate(elapsedTime);

        }

        // Constructor with specified year, month, and day
        MyDate(int year, int month, int day) 
        {

            this->year = year; 
            this->month = month;
            this->day = day;

        }

        // Constant get functions for year, month, and day
        int getYear() const 
        { 

            return year; 

        }

        int getMonth() const 
        { 

            return month; 

        }

        int getDay() const 
        { 

            return day; 

        }

        // Set functions for year, month, and day
        void setYear(int year) 
        { 
            
            this->year = year; 

        }

        void setMonth(int month) 
        { 

            this->month = month; 

        }

        void setDay(int day) 
        { 

            this->day = day; 

        }

        void setDate(unsigned long int elapsedTime)
        {

            // Convert elapsed time to struct tm
            time_t rawTime = static_cast<time_t>(elapsedTime);
            tm *timeInfo = localtime(&rawTime);

            // Extract year, month, and day from timeInfo
            year = timeInfo->tm_year + 1900;
            month = timeInfo->tm_mon + 1;
            day = timeInfo->tm_mday;

        }

};

int main()
{

    // Create MyDate object with no-arg constructor (current date)
    MyDate date1;
    std::cout << "Date 1 (Current Date): " << date1.getYear() << "-" << date1.getMonth() << "-" << date1.getDay() << std::endl;

    // Create MyDate object with elapsed time constructor
    MyDate date2(3435555513);
    std::cout << "Date 2 (Elapsed time 3435555513 seconds): " << date2.getYear() << "-" << date2.getMonth() << "-" << date2.getDay() << std::endl;

    return 0;

}