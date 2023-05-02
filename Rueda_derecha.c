#include "cubelet.h"

void setup()
{

}

void loop()
{
    think();
}

void think()
{
    float wa = 0;
    wa = weighted_average();
    int cuarto_vuelta = 500;
    int media_vuelta = 2 * cuarto_vuelta;
    block_value = 225;
    
    if (wa >= 210){
        set_drive_direction(BACKWARD);
        wait(cuarto_vuelta);
        set_drive_direction(FORWARD);
        wait(600);
    }
    
    set_drive(block_value);
}
