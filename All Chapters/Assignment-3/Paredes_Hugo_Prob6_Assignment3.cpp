#include <iostream>
#include <string>

class Spaceship
{

    public:
        // No-argument constructor to initialize starting position and orientation
        Spaceship()
        {

            x = 0; // Initialize x to 0
            y = 0; // Initialize y to 0
            direction = "up"; // Initialize direction to "up"
            updatePosition(); // Update the position string based on initial values

        }

        Spaceship(const std::string& path)
        {

            x = 0;  // Initialize x to 0
            y = 0; // Initialize y to 0
            direction = "up"; // Initialize direction to "up"

            // Process the flight path and update position and orientation
            for (char command : path) 
            {

                if (command == 'R') 
                {

                    turnRight();

                } 
                else if (command == 'L') 
                {

                    turnLeft();

                } 
                else if (command == 'A') 
                {

                    advance();

                }

            }

            updatePosition();    // Update the final position string after processing the path

        }

        // Constant accessor function to get the final position of the spaceship
        const std::string getPosition() 
        {

            return position;

        }

    private:
        int x, y; // Coordinates of the spaceship
        std::string direction; // Current direction of the spaceship (up, down, left, right)
        std::string position; // Final position in the specified format

        // Function to update the position string based on x, y, and direction
        void updatePosition() 
        {

            position = "{x: " + std::to_string(x) + ", y: " + std::to_string(y) + ", direction: '" + direction + "'}";

        }

        // Function to handle turning right
        void turnRight() 
        {

            if (direction == "up") 
            {

                direction = "right";

            } 
            else if (direction == "right") 
            {

                direction = "down";

            } 
            else if (direction == "down") 
            {

                direction = "left";

            } 
            else if (direction == "left") 
            {

                direction = "up";

            }

        }

        // Function to handle turning left
        void turnLeft() 
        {

            if (direction == "up") 
            {

                direction = "left";

            } 
            else if (direction == "left") 
            {

                direction = "down";

            } 
            else if (direction == "down") 
            {

                direction = "right";

            } 
            else if (direction == "right") 
            {

                direction = "up";

            }

        }

        // Function to handle advancing in the current direction
        void advance() 
        {

            if (direction == "up") 
            {

                y -= 1;

            } 
            else if (direction == "down") 
            {

                y += 1;

            } 
            else if (direction == "right") 
            {

                x += 1;

            } 
            else if (direction == "left") 
            {

                x -= 1;

            }
            
        }

};


int main(void) 
{

    // Test cases based on the problem statement
    Spaceship astrochuckler;
    std::cout << astrochuckler.getPosition() << std::endl;
    Spaceship lunacycle("RAALALL");
    std::cout << lunacycle.getPosition() << std::endl;
    Spaceship quirkonaut("AAAARAARLAAAARAAARRAAAALLLA");
    std::cout << quirkonaut.getPosition() << std::endl;
    Spaceship zanyverse("");
    std::cout << zanyverse.getPosition() << std::endl;
    Spaceship cosmocomedy("LAAA");
    std::cout << cosmocomedy.getPosition() << std::endl;

    return 0;

}