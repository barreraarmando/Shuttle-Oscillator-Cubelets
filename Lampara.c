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
    if (wa >= 120){
        block_value = 255;
    }
    else{
        block_value = 50;
    }
    set_actuator_value(block_value);
}
