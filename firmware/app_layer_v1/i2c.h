#ifndef __I2C_H__
#define __I2C_H__


void I2CInit();
void I2CTasks();
// rate is 0:off 1:100KHz, 2:400KHz, 3:1MHz
void I2CConfigMaster(int i2c_num, int rate, int smbus_levels);
void I2CWriteRead(int i2c_num, unsigned int addr, const void* data,
                  int data_bytes, int read_bytes, int ack_last_read);
void I2CReportTxStatus(int i2c_num);



#endif  // __I2C_H__
