#ifndef __modbus_H
#define __modbus_H
#include "stdio.h"	
#include "sys.h" 

void modbus_service(void);
void modbus_03_function(void);
void modbus_06_function(void);
void modbus_16_function(void);
void modbus_send_data(u8 *buff,u8 len);


unsigned int CRC16(unsigned char *puchMsg,  unsigned char usDataLen);

#endif

