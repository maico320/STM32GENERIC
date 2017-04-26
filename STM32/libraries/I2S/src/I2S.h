#ifndef _I2S_H
#define _I2S_H

#include "stm32_def.h"

typedef enum {
  I2S_PHILIPS_MODE,
  I2S_RIGHT_JUSTIFIED_MODE,
  I2S_LEFT_JUSTIFIED_MODE
} i2s_mode_t;

class I2SClass {
  public:
    I2SClass(SPI_TypeDef *instance);

    I2SClass(SPI_TypeDef *instance, uint8_t sd, uint8_t ws, uint8_t ck);

    uint8_t begin(i2s_mode_t mode, uint32_t sampleRate, uint8_t bitsPerSample);

    void write(uint16_t data);
    void write32(uint32_t data);

    void write(uint16_t *data, uint16_t size);
    void write32(uint32_t *data, uint16_t size);

    I2S_HandleTypeDef handle;

    GPIO_TypeDef *sdPort = NULL;
    uint32_t sdPin = 0;
    GPIO_TypeDef *wsPort = NULL;
    uint32_t wsPin = 0;
    GPIO_TypeDef *ckPort = NULL;
    uint32_t ckPin = 0;
};

#endif
