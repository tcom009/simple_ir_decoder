#include <IRremote.h>

byte receiver = 7;

IRrecv irrecv(receiver);
decode_results results;

void setup()
{
    Serial.begin(9600);
    Serial.println("Listo para recibir señales");
    irrecv.enableIRIn();
    //    pinMode(13, OUTPUT);
}

void loop()
{
    if (irrecv.decode())
    {
        irrecv.printIRResultShort(&Serial);
        Serial.println(results.value);
    }
    irrecv.resume();
}
