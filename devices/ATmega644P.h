// Pin assignment for Arduino Pro Mini

// Pin assignment for the cc1101 module
#define PORT_SPI             PORTB												// The Port B Data Register
#define DDR_SPI              DDRB												// The Port B Data Direction Register
#define PIN_SPI_SS           4													// PB2 (SS)
#define PIN_SPI_MOSI         5													// PB3 (MOSI)
#define PIN_SPI_MISO         6													// PB4 (MISO)
#define PIN_SPI_SCK          7													// PB5 (SCK)

// Pin assignment for GDO0
#define PORT_GDO0            PORTD												// The Port D Data Register
#define DDR_GDO0             DDRD												// The Port D Data Direction Register
#define PIN_GDO0             2													// PD2 where the GDO0 pin of the cc1101 module is connected

// Pin assignment for status LED
#define PORT_STATUSLED       PORTB												// The Port D Data Register
#define DDR_STATUSLED        DDRB												// The Port D Data Direction Register
#define PIN_STATUSLED        0													// PD4 where the status led sould connected (to ground)

// Pin assignment for config button
#define PORT_CONFIG_BTN      PORTD												// The Port B Data Register
#define DDR_CONFIG_BTN       DDRD												// The Port B Data Direction Register
#define INPUT_CONFIG_BTN     PIND												// The Port B Input Pins Address
#define PIN_CONFIG_BTN       5													// PB0 where the button sould connected (to ground)
#define WAIT_FOR_CONFIG      10													// wait x seconds after watchdog reset for press config button

#define SHOW_VERSION_AT_LED  1													// version number show with blink sequence at status led

/**
 * set to 1 to activate debug info over UART
 * set to 2 blockData and blockLen for each received block was printed
 */
#define DEBUG                1

/*****************************************
 *        Address data section           *
 * Stored at 0xFFF0 in boot loader space *
 *           See Makefile                *
 *****************************************/

// The model type
#define HM_TYPE              0x12, 0x34

// 10 bytes serial number. Must be unique for each device
#define HM_SERIAL            'D','M','Y','1','2','3','4','5','6','7'

// 3 bytes The device address (hm_id)
#define HM_ID                0x45, 0x67, 0x89

