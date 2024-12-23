// Practice 8

#include "SmartLight.h"
#include "SmartThermostat.h"
#include "SmartDoorLock.h"

// Function to demonstrate polymorphism with Appliance objects
void displaySmartApp(Appliance &app) 
{

    app.togglePower();
    app.displayInfo();

}

// Main function
int main() {
    SmartDoorLock doorLock(true);    // Create SmartDoorLock with lock initially locked
    SmartLight light(60);            // Create SmartLight with initial brightness of 60
    SmartThermostat thermostat(10);  // Create SmartThermostat with initial temperature of 10

    // Display information of each appliance
    displaySmartApp(doorLock);
    displaySmartApp(thermostat);
    displaySmartApp(light);

    // Unlock the door, set thermostat temperature, and adjust light brightness
    doorLock.toggleLock();           // Unlock the door
    thermostat.setTemperature(75);    // Set thermostat temperature to 75
    light.setBrightness(24);          // Set light brightness to 24

    return 0;
}