//Autogenerated file
//MCU name: STM32F100RD
//MCU  xml: STM32F100R(C-D-E)Tx.xml
//GPIO remap/alternate function xml: GPIO-STM32F100xC_gpio_v1_0_Modes.xml

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
  { GPIOC, GPIO_PIN_0 },
  { GPIOC, GPIO_PIN_1 },
  { GPIOC, GPIO_PIN_2 },
  { GPIOC, GPIO_PIN_3 },
  { GPIOC, GPIO_PIN_4 },
  { GPIOC, GPIO_PIN_5 },
  { GPIOC, GPIO_PIN_6 },
  { GPIOC, GPIO_PIN_7 },
  { GPIOC, GPIO_PIN_8 },
  { GPIOC, GPIO_PIN_9 },
  { GPIOC, GPIO_PIN_10},
  { GPIOC, GPIO_PIN_11},
  { GPIOC, GPIO_PIN_12},
  { GPIOC, GPIO_PIN_13},
  { GPIOC, GPIO_PIN_14},
  { GPIOC, GPIO_PIN_15},
  { GPIOD, GPIO_PIN_0 },
  { GPIOD, GPIO_PIN_1 },
  { GPIOD, GPIO_PIN_2 },
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
   PC0 ,
   PC1 ,
   PC2 ,
   PC3 ,
   PC4 ,
   PC5 ,
   PC6 ,
   PC7 ,
   PC8 ,
   PC9 ,
   PC10,
   PC11,
   PC12,
   PC13,
   PC14,
   PC15,
   PD0 ,
   PD1 ,
   PD2 ,
NUM_PINS,
};
*/
static void AF_NO_REMAP (void) { }
static void AF__HAL_AFIO_REMAP_I2C1_DISABLE(void) { __HAL_AFIO_REMAP_I2C1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_I2C1_ENABLE(void) { __HAL_AFIO_REMAP_I2C1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_SPI1_DISABLE(void) { __HAL_AFIO_REMAP_SPI1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_SPI1_ENABLE(void) { __HAL_AFIO_REMAP_SPI1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM12_DISABLE(void) { __HAL_AFIO_REMAP_TIM12_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM12_ENABLE(void) { __HAL_AFIO_REMAP_TIM12_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM13_DISABLE(void) { __HAL_AFIO_REMAP_TIM13_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM13_ENABLE(void) { __HAL_AFIO_REMAP_TIM13_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM14_DISABLE(void) { __HAL_AFIO_REMAP_TIM14_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM14_ENABLE(void) { __HAL_AFIO_REMAP_TIM14_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM15_DISABLE(void) { __HAL_AFIO_REMAP_TIM15_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM15_ENABLE(void) { __HAL_AFIO_REMAP_TIM15_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM16_DISABLE(void) { __HAL_AFIO_REMAP_TIM16_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM16_ENABLE(void) { __HAL_AFIO_REMAP_TIM16_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM17_DISABLE(void) { __HAL_AFIO_REMAP_TIM17_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM17_ENABLE(void) { __HAL_AFIO_REMAP_TIM17_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_DISABLE(void) { __HAL_AFIO_REMAP_TIM1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_ENABLE(void) { __HAL_AFIO_REMAP_TIM1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_PARTIAL(void) { __HAL_AFIO_REMAP_TIM1_PARTIAL(); }
static void AF__HAL_AFIO_REMAP_TIM2_DISABLE(void) { __HAL_AFIO_REMAP_TIM2_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM2_PARTIAL_1(void) { __HAL_AFIO_REMAP_TIM2_PARTIAL_1(); }
static void AF__HAL_AFIO_REMAP_TIM2_PARTIAL_2(void) { __HAL_AFIO_REMAP_TIM2_PARTIAL_2(); }
static void AF__HAL_AFIO_REMAP_TIM3_DISABLE(void) { __HAL_AFIO_REMAP_TIM3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM3_ENABLE(void) { __HAL_AFIO_REMAP_TIM3_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM3_PARTIAL(void) { __HAL_AFIO_REMAP_TIM3_PARTIAL(); }
static void AF__HAL_AFIO_REMAP_TIM4_DISABLE(void) { __HAL_AFIO_REMAP_TIM4_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM4_ENABLE(void) { __HAL_AFIO_REMAP_TIM4_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART1_DISABLE(void) { __HAL_AFIO_REMAP_USART1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART1_ENABLE(void) { __HAL_AFIO_REMAP_USART1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART2_DISABLE(void) { __HAL_AFIO_REMAP_USART2_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART2_ENABLE(void) { __HAL_AFIO_REMAP_USART2_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_DISABLE(void) { __HAL_AFIO_REMAP_USART3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_ENABLE(void) { __HAL_AFIO_REMAP_USART3_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_PARTIAL(void) { __HAL_AFIO_REMAP_USART3_PARTIAL(); }
static void AF__NO_REMAP(void) { __NO_REMAP(); }

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_I2C1_DISABLE}, 
    { I2C1  , GPIOB, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_I2C1_ENABLE}, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_10 , AF_NO_REMAP    }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_I2C1_DISABLE}, 
    { I2C1  , GPIOB, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_I2C1_ENABLE}, 
//I2C2
    { I2C2  , GPIOB, GPIO_PIN_11 , AF_NO_REMAP    }, 
}; 

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOB, GPIO_PIN_4  , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_14 , AF_NO_REMAP    }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_4  , AF_NO_REMAP    }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOB, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_15 , AF_NO_REMAP    }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_5  , AF_NO_REMAP    }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI1_DISABLE}, 
    { SPI1  , GPIOB, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_SPI1_ENABLE}, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_13 , AF_NO_REMAP    }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_3  , AF_NO_REMAP    }, 
}; 

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART1_DISABLE}, 
    { USART1, GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_USART1_ENABLE}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_USART2_DISABLE}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_USART3_DISABLE}, 
    { USART3, GPIOC, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_USART3_PARTIAL}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_USART1_DISABLE}, 
    { USART1, GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_USART1_ENABLE}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , AF__HAL_AFIO_REMAP_USART2_DISABLE}, 
//USART3
    { USART3, GPIOB, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART3_DISABLE}, 
    { USART3, GPIOC, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART3_PARTIAL}, 
}; 

const stm32_clock_freq_list_type stm32_clock_freq_list[] = {
  {I2C1  , HAL_RCC_GetPCLK1Freq },  
  {I2C2  , HAL_RCC_GetPCLK1Freq },  
  {SPI2  , HAL_RCC_GetPCLK1Freq },  
  {SPI3  , HAL_RCC_GetPCLK1Freq },  
  {USART2, HAL_RCC_GetPCLK1Freq },  
  {USART3, HAL_RCC_GetPCLK1Freq },  

  {SPI1  , HAL_RCC_GetPCLK2Freq },  
  {USART1, HAL_RCC_GetPCLK2Freq },  
};

