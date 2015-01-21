#include <LiquidCrystal.h>
#include <Wire.h>
#include <algorithm>
#include <vector>

// define the data bus pins
#define d0 9     // connected to D4
#define d1 10    // connected to D5
#define d2 11    // connected to D6
#define d3 12    // connected to D7

// define the en (enable) and rs (read signal) pins
#define rs 7     // tells the lcd if a character or command is on the data bus
#define en 8    // tells the lcd if the data is stable on the data bus

// ***************************************

// set up the rows and columns of the lcd.
const int rows = 2;
const int columns = 16;


// set up all the inputs you want that will change the message on the LCD, I'm starting off with pins 2 and 4

const vector <int> inputs(2, 4);

// instantiate an lcd object with the pins we used.
LiquidCrystal lcd(rs, en, d0, d1, d2, d3);


// edit these!

const string defaultMessage("Message\n1");
const string message1("Message\n2");
const string message2("Message\n3");



// **********************************

// gonna test this function and debug it later, it's here as a prototype.
void printString(string msg)
{
    string top, bottom;

    top = msg.substr(0, msg.find("\n"));
    bottom = msg.substr(msg.find("\n"));

    lcd.print(top);
    lcd.setCursor(0, 1);
    lcd.print(bottom);
}

void setup()
{
    // set up the LCD

    lcd.begin(columns, rows);

    for each (int input in inputs)
    {
        pinMode(input, IN)
    }

}


void loop()
{

    if ( digitalRead( inputs.at(0) ) )
    {
        printString(message1);
    }
    else if ( digitalRead( inputs.at(1) ) )
    {
        printString(message2);
    }
    else{}



}
