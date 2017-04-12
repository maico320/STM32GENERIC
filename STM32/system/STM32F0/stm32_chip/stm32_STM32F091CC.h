//Autogenerated file
//MCU name: STM32F091CC
//MCU  xml: STM32F091C(B-C)Tx.xml
//GPIO remap/alternate function xml: GPIO-STM32F091_gpio_v1_0_Modes.xml

/*
const stm32_port_pin_type port_pin_list[] = {
  { GPIOA, GPIO_PIN_0 },
  { GPIOA, GPIO_PIN_1 },
  { GPIOA, GPIO_PIN_2 },
  { GPIOA, GPIO_PIN_3 },
  { GPIOA, GPIO_PIN_4 },
  { GPIOA, GPIO_PIN_5 },
  { GPIOA, GPIO_PIN_6 },
  { GPIOA, GPIO_PIN_7 },
  { GPIOA, GPIO_PIN_8 },
  { GPIOA, GPIO_PIN_9 },
  { GPIOA, GPIO_PIN_10},
  { GPIOA, GPIO_PIN_11},
  { GPIOA, GPIO_PIN_12},
  { GPIOA, GPIO_PIN_13},
  { GPIOA, GPIO_PIN_14},
  { GPIOA, GPIO_PIN_15},
  { GPIOB, GPIO_PIN_0 },
  { GPIOB, GPIO_PIN_1 },
  { GPIOB, GPIO_PIN_2 },
  { GPIOB, GPIO_PIN_3 },
  { GPIOB, GPIO_PIN_4 },
  { GPIOB, GPIO_PIN_5 },
  { GPIOB, GPIO_PIN_6 },
  { GPIOB, GPIO_PIN_7 },
  { GPIOB, GPIO_PIN_8 },
  { GPIOB, GPIO_PIN_9 },
  { GPIOB, GPIO_PIN_10},
  { GPIOB, GPIO_PIN_11},
  { GPIOB, GPIO_PIN_12},
  { GPIOB, GPIO_PIN_13},
  { GPIOB, GPIO_PIN_14},
  { GPIOB, GPIO_PIN_15},
  { GPIOC, GPIO_PIN_13},
  { GPIOC, GPIO_PIN_14},
  { GPIOC, GPIO_PIN_15},
  { GPIOF, GPIO_PIN_0 },
  { GPIOF, GPIO_PIN_1 },
  { GPIOF, GPIO_PIN_11},
};
*/

/*
enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA11,
   PA12,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB1 ,
   PB2 ,
   PB3 ,
   PB4 ,
   PB5 ,
   PB6 ,
   PB7 ,
   PB8 ,
   PB9 ,
   PB10,
   PB11,
   PB12,
   PB13,
   PB14,
   PB15,
   PC13,
   PC14,
   PC15,
   PF0 ,
   PF1 ,
   PF11,
NUM_PINS,
};
*/

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_9  , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF1_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_8  , GPIO_AF1_I2C1  }, 
    { I2C1  , GPIOF, GPIO_PIN_1  , GPIO_AF1_I2C1  }, 
//I2C2
    { I2C2  , GPIOA, GPIO_PIN_11 , GPIO_AF5_I2C2  }, 
    { I2C2  , GPIOB, GPIO_PIN_10 , GPIO_AF1_I2C2  }, 
    { I2C2  , GPIOB, GPIO_PIN_13 , GPIO_AF5_I2C2  }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_10 , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF1_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_9  , GPIO_AF1_I2C1  }, 
    { I2C1  , GPIOF, GPIO_PIN_0  , GPIO_AF1_I2C1  }, 
//I2C2
    { I2C2  , GPIOA, GPIO_PIN_12 , GPIO_AF5_I2C2  }, 
    { I2C2  , GPIOB, GPIO_PIN_11 , GPIO_AF1_I2C2  }, 
    { I2C2  , GPIOB, GPIO_PIN_14 , GPIO_AF5_I2C2  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_4  , GPIO_AF0_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_14 , GPIO_AF0_SPI2  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_5  , GPIO_AF0_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_15 , GPIO_AF0_SPI2  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_3  , GPIO_AF0_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_13 , GPIO_AF0_SPI2  }, 
}; 

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , GPIO_AF1_USART1}, 
    { USART1, GPIOB, GPIO_PIN_7  , GPIO_AF0_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_15 , GPIO_AF1_USART2}, 
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF1_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , GPIO_AF4_USART3}, 
//USART4
    { USART4, GPIOA, GPIO_PIN_1  , GPIO_AF4_USART4}, 
//USART5
    { USART5, GPIOB, GPIO_PIN_4  , GPIO_AF4_USART5}, 
//USART6
    { USART6, GPIOA, GPIO_PIN_5  , GPIO_AF5_USART6}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , GPIO_AF1_USART1}, 
    { USART1, GPIOB, GPIO_PIN_6  , GPIO_AF0_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_14 , GPIO_AF1_USART2}, 
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF1_USART2}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , GPIO_AF4_USART3}, 
//USART4
    { USART4, GPIOA, GPIO_PIN_0  , GPIO_AF4_USART4}, 
//USART5
    { USART5, GPIOB, GPIO_PIN_3  , GPIO_AF4_USART5}, 
//USART6
    { USART6, GPIOA, GPIO_PIN_4  , GPIO_AF5_USART6}, 
}; 

const stm32_clock_freq_list_type stm32_clock_freq_list[] = {
  {I2C1  , HAL_RCC_GetPCLK1Freq },  
  {I2C2  , HAL_RCC_GetPCLK1Freq },  
  {SPI1  , HAL_RCC_GetPCLK1Freq },  
  {SPI2  , HAL_RCC_GetPCLK1Freq },  
  {USART1, HAL_RCC_GetPCLK1Freq },  
  {USART2, HAL_RCC_GetPCLK1Freq },  
  {USART3, HAL_RCC_GetPCLK1Freq },  
  {USART4, HAL_RCC_GetPCLK1Freq },  
  {USART5, HAL_RCC_GetPCLK1Freq },  
  {USART6, HAL_RCC_GetPCLK1Freq },  

};

