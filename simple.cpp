#include <LiquidCrystal.h>
#include <Wire.h>

// define the data bus pins
#define d0 9     // connected to D4
#define d1 10    // connected to D5
#define d2 11    // connected to D6
#define d3 12    // connected to D7

// define the en (enable) and rs (read signal) pins
#define rs 7     // tells the lcd if a character or command is on the data bus
#define en 8    // tells the lcd if the data is stable on the data bus


// instantiate an lcd object with the pins we used.
LiquidCrystal lcd(rs, en, d0, d1, d2, d3);


void setup()
{
    // set up the LCD with columns, rows

    lcd.begin(16, 2);


    // Setup pins as input
    pinMode(2, IN);
    pinMode(4, IN);

    lcd.print("  Message Top!  ");
    lcd.setCursor(0, 1);
    lcd.print(" Message Bottom ");

}

void printMessage(string mess1, string mess2)
{
    lcd.clear();
    lcd.print(mess1);
    lcd.setCursor(0, 1);
    lcd.print(mess2);
}


void loop()
{

    if ( digitalRead( inputs.at(0) ) )
    {
        printMessage("  Message Top2  ", " Message Bottom ");
    }
    else if ( digitalRead( inputs.at(1) ) )
    {
        printMessage("  Message Top3  ", " Message Bottom ");
    }
    else if ( digitalRead( inputs.at(0) ) & digitalRead( inputs.at(1) ) )
    {
        printMessage("  Message Top4  ", " Message Bottom ");
    }


}
