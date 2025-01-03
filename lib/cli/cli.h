#ifndef _CLI_H_
#define _CLI_H_

#include "Arduino.h"

#define RX_PIN          3
#define CLI_BUF_SIZE    256
#define BAUDRATE        115200

#ifndef BOOT_MSG
#define BOOT_MSG        "\n************\n\rjes-core CLI\n\r************\n\r"
#endif
#ifndef CLI_HEADER
#define CLI_HEADER      "\rjes-core $ "
#endif

uint8_t cli_get_sess_state(void);
void cli_set_sess_state(uint8_t sess_state);
void init_cli(void* p);
void serialISR(void);
void cli_server(void* p);
void reprint_header(void* p);
static inline int16_t __get_ws_index(char* buf, uint16_t len);

#endif