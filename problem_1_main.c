// LD1 --> PA5 -- Homework
# if 1
#include "stdint.h"
#include "delay.h"
#include "stm32l475xx.h"
#include "system_stm32l4xx.h"

int main()
{
RCC -> AHB2ENR |= RCC_AHB2ENR_GPIOAEN;

GPIOA -> MODER &= ~GPIO_MODER_MODE5_1;
GPIOA -> MODER |=  GPIO_MODER_MODE5_0;

while(1)
{
  GPIOA -> ODR |= GPIO_ODR_OD5;
  delay(1000000);
  
  GPIOA -> ODR &= ~GPIO_ODR_OD5;//
  delay(1000000); 
    
}
  return 0;
}

#endif
