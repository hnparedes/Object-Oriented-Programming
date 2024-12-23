#ifndef SMARTLIGHT_H
#define SMARTLIGHT_H

#include "Appliance.h"

// Derived class SmartLight
class SmartLight : public Appliance
{

    private:
        int brightness; // Brightness level (0-100)

    public:
        SmartLight(int brightnessLevel)
        {

            brightness = brightnessLevel;

        }

        // Displays power status and brightness
        // Overriding void Function
        void displayInfo() const
        {

            cout << "SmartLight Info: Status - " << (powerStatus ? "ON" : "OFF") << ", Brightness - " << brightness << "\n" << endl;

        }

        // Sets brightness if the light is ON
        void setBrightness(int level)
        {
            if (powerStatus)
            {

                brightness = level;
                cout << "Brightness set to " << brightness << endl;

            }
            else
            {

                cout << "Cannot set brighness. SmartLight is OFF." << endl;

            }

        }

};

#endif