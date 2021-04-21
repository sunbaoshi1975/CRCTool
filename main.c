#include "crc.h"

// Note: modify the input data and run the program
//const uint8_t m_input[] = {0x64, 0x42, 0x03, 0x13, 0x00, 0x02};
//const uint8_t m_input[] = {0x01, 0x03, 0x00, 0x00, 0x00, 0x0B};
//const uint8_t m_input[] = {0x05, 0x03, 0x00, 0x00, 0x00, 0x0B};
const uint8_t m_input[] = {0x01, 0x10, 0x00, 0x01, 0x00, 0x01, 0x02, 0x11, 0x04};

void main() {
    // Calculate CRC16
    uint16_t lv_crc16 = CRC16_Check(m_input, sizeof(m_input));
    printf("CRC16: 0x%02X 0x%02X\r\n", lv_crc16 & 0xFF, lv_crc16 >> 8);

    // Serial message
    uint8_t i;
    printf("Serial Command: ");
    for(i = 0; i < sizeof(m_input); i++) {
        printf("%02X ", m_input[i]);
    }
    printf("%02X %02X\r\n", lv_crc16 & 0xFF, lv_crc16 >> 8);
}
