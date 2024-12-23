#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>
#include <string>
using namespace std;

// Abstract base class Appliance
class Appliance 
{
    protected:
        bool powerStatus; // Tracks whether the appliance is ON or OFF

    public:
        // Constructor initializes powerstatus to OFF
        Appliance()
        {

            powerStatus = false;

        }

        virtual void displayInfo() const = 0; // Pure virtual function

        // Toggles power status and prints new status
        virtual void togglePower()
        {

            powerStatus = !powerStatus;
            cout << "Power toggled. Status: " << (powerStatus ? "ON" : "OFF") << endl;

        }

        // Virtual destructor
        virtual ~Appliance() = default;

};

#endif