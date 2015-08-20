static const unsigned char keywords_0[] =
{
  'A','B','S',FUNC_ABS,
  'A','C','T','I','V','E',BLE_ACTIVE,
  'A','D','C',PM_ADC,
  'A','D','V','E','R','T','_','E','N','A','B','L','E','D',KW_CONSTANT,CO_ADVERT_ENABLED,
  'A','D','V','E','R','T',KW_ADVERT,
  'A','N','A','L','O','G',KW_ANALOG,
  'A','P','P','E','N','D',FS_APPEND,
  'A','T','T','A','C','H',IN_ATTACH,
  'A','U','T','O','R','U','N',KW_AUTORUN,
  'N','A','M','E',BLE_NAME,
  'N','E','W',KW_NEW,
  'N','E','X','T',KW_NEXT,
  'N','O','T','I','F','Y',BLE_NOTIFY,
  'N','O',KW_CONSTANT,CO_NO,
  0
};
static const unsigned char keywords_1[] =
{
  'B','A','T','T','E','R','Y',FUNC_BATTERY,
  'B','O','N','D','I','N','G','_','E','N','A','B','L','E','D',KW_CONSTANT,CO_BONDING_ENABLED,
  'B','T','P','E','E','K',BLE_FUNC_BTPEEK,
  'B','T','P','O','K','E',KW_BTPOKE,
  'O','F','F',KW_CONSTANT,CO_OFF,
  'O','N','C','O','N','N','E','C','T',BLE_ONCONNECT,
  'O','N','D','I','S','C','O','V','E','R',BLE_ONDISCOVER,
  'O','N','R','E','A','D',BLE_ONREAD,
  'O','N','W','R','I','T','E',BLE_ONWRITE,
  'O','N',KW_CONSTANT,CO_ON,
  'O','P','E','N',KW_OPEN,
  'O','U','T','P','U','T',PM_OUTPUT,
  0
};
static const unsigned char keywords_2[] =
{
  'C','H','A','R','A','C','T','E','R','I','S','T','I','C',BLE_CHARACTERISTIC,
  'C','L','O','S','E',KW_CLOSE,
  'C','O','N','F','I','G',KW_CONFIG,
  'C','U','S','T','O','M',BLE_CUSTOM,
  'P','0',KW_PIN_P0,
  'P','1',KW_PIN_P1,
  'P','2',KW_PIN_P2,
  'P','A','S','S','C','O','D','E',KW_CONSTANT,CO_DEFAULT_PASSCODE,
  'P','I','N','M','O','D','E',KW_PINMODE,
  'P','O','W','E','R',KW_CONSTANT,CO_POWER,
  'P','R','I','N','T',KW_PRINT,
  'P','U','L','L','D','O','W','N',PM_PULLDOWN,
  'P','U','L','L','U','P',PM_PULLUP,
  'P','U','L','S','E',PM_PULSE,
  0
};
static const unsigned char keywords_3[] =
{
  '*',OP_MUL,
  'D','E','L','A','Y',KW_DELAY,
  'D','E','T','A','C','H',IN_DETACH,
  'D','E','V','_','A','D','D','R','E','S','S',KW_CONSTANT,CO_DEV_ADDRESS,
  'D','I','M',KW_DIM,
  'D','U','P','L','I','C','A','T','E','S',BLE_DUPLICATES,
  '^',OP_XOR,
  0
};
static const unsigned char keywords_4[] =
{
  '+',OP_ADD,
  'E','L','I','F',KW_ELIF,
  'E','L','S','E',KW_ELSE,
  'E','N','D',KW_END,
  'E','O','F',FUNC_EOF,
  'E','X','T','E','R','N','A','L',KW_CONSTANT,CO_EXTERNAL,
  'R','E','A','D',KW_READ,
  'R','E','B','O','O','T',KW_REBOOT,
  'R','E','F','E','R','E','N','C','E',KW_CONSTANT,CO_REFERENCE,
  'R','E','M',KW_REM,
  'R','E','P','E','A','T',TI_REPEAT,
  'R','E','S','O','L','U','T','I','O','N',KW_CONSTANT,CO_RESOLUTION,
  'R','E','T','U','R','N',KW_RETURN,
  'R','I','S','I','N','G',PM_RISING,
  'R','N','D',FUNC_RND,
  'R','U','N',KW_RUN,
  'R','X','G','A','I','N',KW_CONSTANT,CO_RXGAIN,
  0
};
static const unsigned char keywords_5[] =
{
  'F','A','L','L','I','N','G',PM_FALLING,
  'F','A','L','S','E',KW_CONSTANT,CO_FALSE,
  'F','O','R',KW_FOR,
  'S','C','A','N',KW_SCAN,
  'S','E','R','I','A','L',KW_SERIAL,
  'S','E','R','V','I','C','E',BLE_SERVICE,
  'S','L','A','V','E','_','L','A','T','E','N','C','Y',KW_CONSTANT,CO_SLAVE_LATENCY,
  'S','L','A','V','E',SPI_SLAVE,
  'S','P','I',KW_SPI,
  'S','T','E','P',ST_STEP,
  'S','T','O','P',TI_STOP,
  0
};
static const unsigned char keywords_6[] =
{
  '-',OP_SUB,
  'G','A','T','T',KW_GATT,
  'G','E','N','E','R','A','L',BLE_GENERAL,
  'G','E','N','_','D','I','S','C','_','A','D','V','_','I','N','T','_','M','A','X',KW_CONSTANT,CO_GEN_DISC_INT_MAX,
  'G','E','N','_','D','I','S','C','_','A','D','V','_','I','N','T','_','M','I','N',KW_CONSTANT,CO_GEN_DISC_INT_MIN,
  'G','E','N','_','D','I','S','C','_','A','D','V','_','M','I','N',KW_CONSTANT,CO_GEN_DISC_ADV_MIN,
  'G','O','S','U','B',KW_GOSUB,
  'G','O','T','O',KW_GOTO,
  'T','I','M','E','O','U','T','_','M','U','L','T','I','P','L','I','E','R',KW_CONSTANT,CO_TIMEOUT_MULTIPLIER,
  'T','I','M','E','O','U','T',PM_TIMEOUT,
  'T','I','M','E','R',KW_TIMER,
  'T','O',ST_TO,
  'T','R','A','N','S','F','E','R',SPI_TRANSFER,
  'T','R','U','E',KW_CONSTANT,CO_TRUE,
  'T','R','U','N','C','A','T','E',FS_TRUNCATE,
  'T','X','P','O','W','E','R',KW_CONSTANT,CO_TXPOWER,
  0
};
static const unsigned char keywords_7[] =
{
  '!','=',OP_NE_BANG,
  'H','I','G','H',KW_CONSTANT,CO_HIGH,
  '|',OP_OR,
  0
};
static const unsigned char keywords_8[] =
{
  '/','/',KW_SLASHSLASH,
  '/',OP_DIV,
  '<','<',OP_LSHIFT,
  '<','=',OP_LE,
  '<','>',OP_NE,
  '<',OP_LT,
  'I','2','C',KW_I2C,
  'I','F',KW_IF,
  'I','N','D','I','C','A','T','E',BLE_INDICATE,
  'I','N','P','U','T',PM_INPUT,
  'I','N','T','E','R','N','A','L',KW_CONSTANT,CO_INTERNAL,
  'I','N','T','E','R','R','U','P','T',KW_INTERRUPT,
  0
};
static const unsigned char keywords_9[] =
{
  '0','X',FUNC_HEX,
  '=','=',OP_EQEQ,
  '=',OP_EQ,
  'W','A','I','T',PM_WAIT,
  'W','I','R','E',KW_WIRE,
  'W','R','I','T','E','N','O','R','S','P',BLE_WRITENORSP,
  'W','R','I','T','E',KW_WRITE,
  0
};
static const unsigned char keywords_10[] =
{
  '>','=',OP_GE,
  '>','>',OP_RSHIFT,
  '>',OP_GT,
  0
};
static const unsigned char keywords_11[] =
{
  '%',OP_REM,
  'L','E','N',FUNC_LEN,
  'L','I','M','I','T','E','D',BLE_LIMITED,
  'L','I','M','_','A','D','V','_','T','I','M','E','O','U','T',KW_CONSTANT,CO_LIM_ADV_TIMEOUT,
  'L','I','M','_','D','I','S','C','_','A','D','V','_','I','N','T','_','M','A','X',KW_CONSTANT,CO_LIM_DISC_INT_MAX,
  'L','I','M','_','D','I','S','C','_','A','D','V','_','I','N','T','_','M','I','N',KW_CONSTANT,CO_LIM_DISC_INT_MIN,
  'L','I','S','T',KW_LIST,
  'L','O','W',KW_CONSTANT,CO_LOW,
  'L','S','B',SPI_LSB,
  'Y','E','S',KW_CONSTANT,CO_YES,
  0
};
static const unsigned char keywords_12[] =
{
  '&',OP_AND,
  'M','A','S','T','E','R',SPI_MASTER,
  'M','A','X','_','C','O','N','N','_','I','N','T','E','R','V','A','L',KW_CONSTANT,CO_MAX_CONN_INTERVAL,
  'M','E','M',KW_MEM,
  'M','I','L','L','I','S',FUNC_MILLIS,
  'M','I','N','_','C','O','N','N','_','I','N','T','E','R','V','A','L',KW_CONSTANT,CO_MIN_CONN_INTERVAL,
  'M','O','R','E',BLE_MORE,
  'M','S','B',SPI_MSB,
  0
};
static const unsigned char* keywords[] =
{
  keywords_0,
  keywords_1,
  keywords_2,
  keywords_3,
  keywords_4,
  keywords_5,
  keywords_6,
  keywords_7,
  keywords_8,
  keywords_9,
  keywords_10,
  keywords_11,
  keywords_12,
  0
};
#define KEYWORD_TABLE(K) keywords[(K)[0] % 13]