// pineapple.h

const int RX    = 0;
const int TX    = 1;
// const int SDA   = 2;
// const int SCL   = 3;
const int RLY   = 4;
const int GPIO0 = 5;   // PWM
const int DTCT0 = 6;
const int GP_R  = 6;   // PWM
const int D7    = 7;
const int GATE  = 7;
const int GPIO1 = 8;   // PWM
const int DTCT1 = 9;
const int GP_G  = 9;   // PWM
const int DTCT2 = 10;
const int GP_B  = 10;
const int LED1  = 11;  // PWM
const int DTCT3 = 12;
const int LED0  = 13;  // PWM
const int ANLG0 = A0;
const int ANLG1 = A1;
const int ANLG2 = A2;
const int ANLG3 = A3;
const int MNTR  = A4;
const int THS   = A5;

const int LEDS[]    = { LED0, LED1 };
const int GPIOS[]   = { GPIO0, GPIO1 };
const int DTCTS[]   = { DTCT0, DTCT1, DTCT2, DTCT3 };
const int ANLGS[]   = { ANLG0, ANLG1, ANLG2, ANLG3 };
const int GP_RGB[]  = { GP_R, GP_G, GP_B };
const int GP_PINS[] = { ANLG0, DTCT0, ANLG1, DTCT1, ANLG2, DTCT2, ANLG3, DTCT3 };
