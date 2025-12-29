#ifndef INC_STUBFUNCTIONS_H_
#define INC_STUBFUNCTIONS_H_

#include <stdint.h>
#include <stddef.h>

#include "states.h"
#include "decision.h"

/* Prototipi delle funzioni stub */

/* Trasmissione */

uint8_t checkRTR(void);

void UART_TransmitIT(uint8_t *pData, size_t size);


/* Ricezione */

void setRTR();

void resetRTR();

void UART_ReceiveIT(uint8_t *pData, size_t size);

uint8_t hasReceived();

#endif /* INC_STUBFUNCTIONS_H_ */
