#ifndef SMARTTHERMOSTAT_H
#define SMARTTHERMOSTAT_H

#include "Appliance.h"

// Derived class SmartThermostat
class SmartThermostat : public Appliance
{

    private:
        double temperature; // Temperature setting

    public:
        SmartThermostat(double temp)
        {

            temperature = temp;

        }

        // Displays power status and temperature
        // Overriding void Function
        void displayInfo() const
        {

            cout << "SmartThermostat Info: Status - " << (powerStatus ? "ON" : "OFF") << ", Temperature - " << temperature << "*C\n" << endl;

        }

        // Sets temperature if the thermostat is ON
        void setTemperature(double temp)
        {

            if(powerStatus)
            {

                temperature = temp;
                cout << "Temperature set to " << temperature << "*C" << endl;

            }
            else
            {

                cout << "Cannot set temperature. SmartThermostat is OFF." << endl;

            }

        }

};


#endif