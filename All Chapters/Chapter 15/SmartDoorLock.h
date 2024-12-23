#ifndef SMARTDOORLOCK_H
#define SMARTDOORLOCK_H

#include "Appliance.h"

// Derived class SmartDoorLock
class SmartDoorLock : public Appliance
{

    private:
        bool isLocked; // Lock status

    public:
        SmartDoorLock(bool locked)
        {

            isLocked = locked;

        }

        // Displays power status and lock status
        // Overriding void Function
        void displayInfo() const
        {

            cout << "SmartDoorLock Info: Status - " << (powerStatus ? "ON" : "OFF") << ", Lock - " << (isLocked ? "Locked" : "Unlocked") << "\n" << endl;

        }

        // Toggles lock if the lock is ON
        void toggleLock()
        {

            if (powerStatus) 
            {
                isLocked = !isLocked;
                cout << "Lock toggled. Status: " << (isLocked ? "Locked" : "Unlocked") << endl;
            } 
            else 
            {

                cout << "Cannot toggle lock. SmartDoorLock is OFF." << endl;

            }

        }

};

#endif