#include <iostream>

using namespace std;

class Stock 
{

    private:
        string symbol; // Stock symbol
        string name; // Stock name
        double previousClosingPrice; // Previous day's closing price
        double currentPrice; // Current price

    public:
        // Constructor to initialize symbol and name
        Stock(const string& _symbol, const string& _name)
        {

            symbol = _symbol;
            name = _name;

        }

        // Accessor functions (constant)
        const string getSymbol()
        {

            return symbol;

        }

        const string getName()
        {

            return name;

        }

        const double getPreviousClosingPrice() 
        {

            return previousClosingPrice;

        }

        const double getCurrentPrice() 
        {

            return currentPrice;

        }

        // Mutator functions
        void setPreviousClosingPrice(double price) 
        {

            previousClosingPrice = price;

        }

        void setCurrentPrice(double price) 
        {

            currentPrice = price;

        }

        // Function to calculate the percentage change
        const double getChangePercent() 
        {

            return (currentPrice - previousClosingPrice) / previousClosingPrice;

        }

};

int main()
{

    // Creates a Stock object with symbol 'NVDA' and name 'NVIDIA Corp'
    Stock stock("NVDA", "NVIDIA Corp.");

    // Sets the previous closing price and current price
    stock.setPreviousClosingPrice(27.5);
    stock.setCurrentPrice(27.6);

    // Displays the stock's information and percentage change
    cout << "Previous Closing Price: " << stock.getPreviousClosingPrice() << endl;
    cout << "Current Price: " << stock.getCurrentPrice() << endl;
    cout << "Percent Change: " << stock.getChangePercent() << endl;

    return 0;

}
