#include <LiquidCrystal.h>
#include <Wire.h>

LiquidCrystal lcd(7, 8, 9, 10, 4, 2);

int brightness = 255;

/*
 *  Change this function to have messages for each line on the display and keep incrementing the row in the setCursor method each time you move to the next line.
 */
void printMessage(String mess1, String mess2)
{
    lcd.clear();
    lcd.print(mess1);
    lcd.setCursor(0, 1);
    lcd.print(mess2);
}

void setup()
{
	Serial.begin(9600);
	lcd.begin(16, 2);

	pinMode(1, INPUT_PULLUP);
	
	printMessage("RGB 16x2 Display", "Sweetness!");
}

void loop()
{

//    Serial.println(digitalRead(1), DEC);	

    if (!digitalRead( 1 ) )
    {
        printMessage("  Message Top4  ", " Message Bottom ");
    }


}
