#include <stdint.h>

/**
 * Initializes the Print sub-system.
 */
void PrintInit(uint32_t baud);

/**
 * Prints a formatted text the serial console.
 * 
 * @param[in] fmt printf-style format string
 */
void print(const char *fmt, ...);

