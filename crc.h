#ifndef __CRC_LIB_H
#define __CRC_LIB_H

/* Includes ------------------------------------------------------------------*/

// Common Data Type
#ifndef uint8_t
#define uint8_t                   unsigned char
#endif

#ifndef uint16_t
#define uint16_t                  unsigned short
#endif

uint16_t CRC16_Check(const uint8_t *pushMsg, uint8_t usDataLen);
uint8_t CRC8_Check(const uint8_t *pushMsg, const uint8_t ucDataLen);
uint16_t CheckSum16(const uint8_t *pushMsg, const uint16_t ucDataLen);
uint8_t CheckSum8(const uint8_t *pushMsg, const uint8_t ucDataLen);

#endif  /* __CRC_LIB_H */
