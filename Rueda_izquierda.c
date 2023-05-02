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
    int cuarto_vuelta = 500;
    int media_vuelta = 2 * cuarto_vuelta;
    wa = weighted_average();

    block_value = 225;
    set_drive(block_value);
}
