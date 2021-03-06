// From ﻿ATSAMD21G18A.atdf
#if !defined(__SAMD51__)   // not quite right, but close enough for now.
/* start PMUX_A */
const char * pads2pmux_A[] = {
  /* PA00 */ "EICEXTINT0",
  /* PA01 */ "EICEXTINT1",
  /* PA02 */ "EICEXTINT2",
  /* PA03 */ "EICEXTINT3",
  /* PA04 */ "EICEXTINT4",
  /* PA05 */ "EICEXTINT5",
  /* PA06 */ "EICEXTINT6",
  /* PA07 */ "EICEXTINT7",
  /* PA08 */ "EICNMI",
  /* PA09 */ "EICEXTINT9",
  /* PA10 */ "EICEXTINT10",
  /* PA11 */ "EICEXTINT11",
  /* PA12 */ "EICEXTINT12",
  /* PA13 */ "EICEXTINT13",
  /* PA14 */ "EICEXTINT14",
  /* PA15 */ "EICEXTINT15",
  /* PA16 */ "EICEXTINT0",
  /* PA17 */ "EICEXTINT1",
  /* PA18 */ "EICEXTINT2",
  /* PA19 */ "EICEXTINT3",
  /* PA20 */ "EICEXTINT4",
  /* PA21 */ "EICEXTINT5",
  /* PA22 */ "EICEXTINT6",
  /* PA23 */ "EICEXTINT7",
  /* PA24 */ "EICEXTINT12",
  /* PA25 */ "EICEXTINT13",
  /* PA26 */ "",
  /* PA27 */ "EICEXTINT15",
  /* PA28 */ "EICEXTINT8",
  /* PA29 */ "",
  /* PA30 */ "EICEXTINT10",
  /* PA31 */ "EICEXTINT11",
  /* A end */

  /* PB00 */ "",
  /* PB01 */ "",
  /* PB02 */ "EICEXTINT2",
  /* PB03 */ "EICEXTINT3",
  /* PB04 */ "",
  /* PB05 */ "",
  /* PB06 */ "",
  /* PB07 */ "",
  /* PB08 */ "EICEXTINT8",
  /* PB09 */ "EICEXTINT9",
  /* PB10 */ "EICEXTINT10",
  /* PB11 */ "EICEXTINT11",
  /* PB12 */ "",
  /* PB13 */ "",
  /* PB14 */ "",
  /* PB15 */ "",
  /* PB16 */ "",
  /* PB17 */ "",
  /* PB18 */ "",
  /* PB19 */ "",
  /* PB20 */ "",
  /* PB21 */ "",
  /* PB22 */ "EICEXTINT6",
  /* PB23 */ "EICEXTINT7",
  /* PB24 */ "",
  /* PB25 */ "",
  /* PB26 */ "",
  /* PB27 */ "",
  /* PB28 */ "",
  /* PB29 */ "",
  /* PB30 */ "",
  /* PB31 */ "",
  /* B end */

};
/* start PMUX_B */
const char * pads2pmux_B[] = {
  /* PA00 */ "",
  /* PA01 */ "",
  /* PA02 */ "ADCAIN0"
  /* PA03 */ "ADCAIN1",
  /* PA04 */ "ADCAIN4"
  /* PA05 */ "ADCAIN5"
  /* PA06 */ "ADCAIN6"
  /* PA07 */ "ADCAIN7",
  /* PA08 */ "ADCAIN16",
  /* PA09 */ "ADCAIN17",
  /* PA10 */ "ADCAIN18",
  /* PA11 */ "ADCAIN19",
  /* PA12 */ "",
  /* PA13 */ "",
  /* PA14 */ "",
  /* PA15 */ "",
  /* PA16 */ "PTCX4",
  /* PA17 */ "PTCX5",
  /* PA18 */ "PTCX6",
  /* PA19 */ "PTCX7",
  /* PA20 */ "PTCX8",
  /* PA21 */ "PTCX9",
  /* PA22 */ "PTCX10",
  /* PA23 */ "PTCX11",
  /* PA24 */ "",
  /* PA25 */ "",
  /* PA26 */ "",
  /* PA27 */ "",
  /* PA28 */ "",
  /* PA29 */ "",
  /* PA30 */ "",
  /* PA31 */ "",
  /* A end */

  /* PB00 */ "",
  /* PB01 */ "",
  /* PB02 */ "ADCAIN10",
  /* PB03 */ "ADCAIN11",
  /* PB04 */ "",
  /* PB05 */ "",
  /* PB06 */ "",
  /* PB07 */ "",
  /* PB08 */ "ADCAIN2",
  /* PB09 */ "ADCAIN3",
  /* PB10 */ "",
  /* PB11 */ "",
  /* PB12 */ "",
  /* PB13 */ "",
  /* PB14 */ "",
  /* PB15 */ "",
  /* PB16 */ "",
  /* PB17 */ "",
  /* PB18 */ "",
  /* PB19 */ "",
  /* PB20 */ "",
  /* PB21 */ "",
  /* PB22 */ "",
  /* PB23 */ "",
  /* PB24 */ "",
  /* PB25 */ "",
  /* PB26 */ "",
  /* PB27 */ "",
  /* PB28 */ "",
  /* PB29 */ "",
  /* PB30 */ "",
  /* PB31 */ "",
  /* B end */

};
/* start PMUX_C */
const char * pads2pmux_C[] = {
  /* PA00 */ "",
  /* PA01 */ "",
  /* PA02 */ "",
  /* PA03 */ "",
  /* PA04 */ "",
  /* PA05 */ "",
  /* PA06 */ "",
  /* PA07 */ "",
  /* PA08 */ "SERCOM0PAD0",
  /* PA09 */ "SERCOM0PAD1",
  /* PA10 */ "SERCOM0PAD2",
  /* PA11 */ "SERCOM0PAD3",
  /* PA12 */ "SERCOM2PAD0",
  /* PA13 */ "SERCOM2PAD1",
  /* PA14 */ "SERCOM2PAD2",
  /* PA15 */ "SERCOM2PAD3",
  /* PA16 */ "SERCOM1PAD0",
  /* PA17 */ "SERCOM1PAD1",
  /* PA18 */ "SERCOM1PAD2",
  /* PA19 */ "SERCOM1PAD3",
  /* PA20 */ "SERCOM5PAD2",
  /* PA21 */ "SERCOM5PAD3",
  /* PA22 */ "SERCOM3PAD0",
  /* PA23 */ "SERCOM3PAD1",
  /* PA24 */ "SERCOM3PAD2",
  /* PA25 */ "SERCOM3PAD3",
  /* PA26 */ "",
  /* PA27 */ "",
  /* PA28 */ "",
  /* PA29 */ "",
  /* PA30 */ "",
  /* PA31 */ "",
  /* A end */

  /* PB00 */ "",
  /* PB01 */ "",
  /* PB02 */ "",
  /* PB03 */ "",
  /* PB04 */ "",
  /* PB05 */ "",
  /* PB06 */ "",
  /* PB07 */ "",
  /* PB08 */ "",
  /* PB09 */ "",
  /* PB10 */ "",
  /* PB11 */ "",
  /* PB12 */ "",
  /* PB13 */ "",
  /* PB14 */ "",
  /* PB15 */ "",
  /* PB16 */ "",
  /* PB17 */ "",
  /* PB18 */ "",
  /* PB19 */ "",
  /* PB20 */ "",
  /* PB21 */ "",
  /* PB22 */ "",
  /* PB23 */ "",
  /* PB24 */ "",
  /* PB25 */ "",
  /* PB26 */ "",
  /* PB27 */ "",
  /* PB28 */ "",
  /* PB29 */ "",
  /* PB30 */ "",
  /* PB31 */ "",
  /* B end */

};
/* start PMUX_D */
const char * pads2pmux_D[] = {
  /* PA00 */ "SERCOM1PAD0",
  /* PA01 */ "SERCOM1PAD1",
  /* PA02 */ "",
  /* PA03 */ "",
  /* PA04 */ "SERCOM0PAD0",
  /* PA05 */ "SERCOM0PAD1",
  /* PA06 */ "SERCOM0PAD2",
  /* PA07 */ "SERCOM0PAD3",
  /* PA08 */ "SERCOM2PAD0",
  /* PA09 */ "SERCOM2PAD1",
  /* PA10 */ "SERCOM2PAD2",
  /* PA11 */ "SERCOM2PAD3",
  /* PA12 */ "SERCOM4PAD0",
  /* PA13 */ "SERCOM4PAD1",
  /* PA14 */ "SERCOM4PAD2",
  /* PA15 */ "SERCOM4PAD3",
  /* PA16 */ "SERCOM3PAD0",
  /* PA17 */ "SERCOM3PAD1",
  /* PA18 */ "SERCOM3PAD2",
  /* PA19 */ "SERCOM3PAD3",
  /* PA20 */ "SERCOM3PAD2",
  /* PA21 */ "SERCOM3PAD3",
  /* PA22 */ "SERCOM5PAD0",
  /* PA23 */ "SERCOM5PAD1",
  /* PA24 */ "SERCOM5PAD2",
  /* PA25 */ "SERCOM5PAD3",
  /* PA26 */ "",
  /* PA27 */ "",
  /* PA28 */ "",
  /* PA29 */ "",
  /* PA30 */ "SERCOM1PAD2",
  /* PA31 */ "SERCOM1PAD3",
  /* A end */

  /* PB00 */ "",
  /* PB01 */ "",
  /* PB02 */ "SERCOM5PAD0",
  /* PB03 */ "SERCOM5PAD1",
  /* PB04 */ "",
  /* PB05 */ "",
  /* PB06 */ "",
  /* PB07 */ "",
  /* PB08 */ "SERCOM4PAD0",
  /* PB09 */ "SERCOM4PAD1",
  /* PB10 */ "SERCOM4PAD2",
  /* PB11 */ "SERCOM4PAD3",
  /* PB12 */ "",
  /* PB13 */ "",
  /* PB14 */ "",
  /* PB15 */ "",
  /* PB16 */ "",
  /* PB17 */ "",
  /* PB18 */ "",
  /* PB19 */ "",
  /* PB20 */ "",
  /* PB21 */ "",
  /* PB22 */ "SERCOM5PAD2",
  /* PB23 */ "SERCOM5PAD3",
  /* PB24 */ "",
  /* PB25 */ "",
  /* PB26 */ "",
  /* PB27 */ "",
  /* PB28 */ "",
  /* PB29 */ "",
  /* PB30 */ "",
  /* PB31 */ "",
  /* B end */

};
/* start PMUX_E */
const char * pads2pmux_E[] = {
  /* PA00 */ "TCC2WO0",
  /* PA01 */ "TCC2WO1",
  /* PA02 */ "",
  /* PA03 */ "",
  /* PA04 */ "TCC0WO0",
  /* PA05 */ "TCC0WO1",
  /* PA06 */ "TCC1WO0",
  /* PA07 */ "TCC1WO1",
  /* PA08 */ "TCC0WO0",
  /* PA09 */ "TCC0WO1",
  /* PA10 */ "TCC1WO0",
  /* PA11 */ "TCC1WO1",
  /* PA12 */ "TCC2WO0",
  /* PA13 */ "TCC2WO1",
  /* PA14 */ "TC3WO0",
  /* PA15 */ "TC3WO1",
  /* PA16 */ "TCC2WO0",
  /* PA17 */ "TCC2WO1",
  /* PA18 */ "TC3WO0",
  /* PA19 */ "TC3WO1",
  /* PA20 */ "",
  /* PA21 */ "",
  /* PA22 */ "TC4WO0",
  /* PA23 */ "TC4WO1",
  /* PA24 */ "TC5WO0",
  /* PA25 */ "TC5WO1",
  /* PA26 */ "",
  /* PA27 */ "",
  /* PA28 */ "",
  /* PA29 */ "",
  /* PA30 */ "TCC1WO0",
  /* PA31 */ "TCC1WO1",
  /* A end */

  /* PB00 */ "",
  /* PB01 */ "",
  /* PB02 */ "",
  /* PB03 */ "",
  /* PB04 */ "",
  /* PB05 */ "",
  /* PB06 */ "",
  /* PB07 */ "",
  /* PB08 */ "TC4WO0",
  /* PB09 */ "TC4WO1",
  /* PB10 */ "TC5WO0",
  /* PB11 */ "TC5WO1",
  /* PB12 */ "",
  /* PB13 */ "",
  /* PB14 */ "",
  /* PB15 */ "",
  /* PB16 */ "",
  /* PB17 */ "",
  /* PB18 */ "",
  /* PB19 */ "",
  /* PB20 */ "",
  /* PB21 */ "",
  /* PB22 */ "",
  /* PB23 */ "",
  /* PB24 */ "",
  /* PB25 */ "",
  /* PB26 */ "",
  /* PB27 */ "",
  /* PB28 */ "",
  /* PB29 */ "",
  /* PB30 */ "",
  /* PB31 */ "",
  /* B end */

};
/* start PMUX_F */
const char * pads2pmux_F[] = {
  /* PA00 */ "",
  /* PA01 */ "",
  /* PA02 */ "",
  /* PA03 */ "",
  /* PA04 */ "",
  /* PA05 */ "",
  /* PA06 */ "",
  /* PA07 */ "",
  /* PA08 */ "TCC1WO2",
  /* PA09 */ "TCC1WO3",
  /* PA10 */ "TCC0WO2",
  /* PA11 */ "TCC0WO3",
  /* PA12 */ "TCC0WO6",
  /* PA13 */ "TCC0WO7",
  /* PA14 */ "TCC0WO4",
  /* PA15 */ "TCC0WO5",
  /* PA16 */ "TCC0WO6",
  /* PA17 */ "TCC0WO7",
  /* PA18 */ "TCC0WO2",
  /* PA19 */ "TCC0WO3",
  /* PA20 */ "TCC0WO6",
  /* PA21 */ "TCC0WO7",
  /* PA22 */ "TCC0WO4",
  /* PA23 */ "TCC0WO5",
  /* PA24 */ "TCC1WO2",
  /* PA25 */ "TCC1WO3",
  /* PA26 */ "",
  /* PA27 */ "",
  /* PA28 */ "",
  /* PA29 */ "",
  /* PA30 */ "",
  /* PA31 */ "",
  /* A end */

  /* PB00 */ "",
  /* PB01 */ "",
  /* PB02 */ "",
  /* PB03 */ "",
  /* PB04 */ "",
  /* PB05 */ "",
  /* PB06 */ "",
  /* PB07 */ "",
  /* PB08 */ "",
  /* PB09 */ "",
  /* PB10 */ "TCC0WO4",
  /* PB11 */ "TCC0WO5",
  /* PB12 */ "",
  /* PB13 */ "",
  /* PB14 */ "",
  /* PB15 */ "",
  /* PB16 */ "",
  /* PB17 */ "",
  /* PB18 */ "",
  /* PB19 */ "",
  /* PB20 */ "",
  /* PB21 */ "",
  /* PB22 */ "",
  /* PB23 */ "",
  /* PB24 */ "",
  /* PB25 */ "",
  /* PB26 */ "",
  /* PB27 */ "",
  /* PB28 */ "",
  /* PB29 */ "",
  /* PB30 */ "",
  /* PB31 */ "",
  /* B end */

};
/* start PMUX_G */
const char * pads2pmux_G[] = {
  /* PA00 */ "",
  /* PA01 */ "",
  /* PA02 */ "",
  /* PA03 */ "",
  /* PA04 */ "",
  /* PA05 */ "",
  /* PA06 */ "",
  /* PA07 */ "I2SSD0",
  /* PA08 */ "I2SSD1",
  /* PA09 */ "I2SMCK0",
  /* PA10 */ "I2SSCK0",
  /* PA11 */ "I2SFS0",
  /* PA12 */ "",
  /* PA13 */ "",
  /* PA14 */ "",
  /* PA15 */ "",
  /* PA16 */ "",
  /* PA17 */ "",
  /* PA18 */ "",
  /* PA19 */ "I2SSD0",
  /* PA20 */ "I2SSCK0",
  /* PA21 */ "I2SFS0",
  /* PA22 */ "",
  /* PA23 */ "USBSOF_1KHZ",
  /* PA24 */ "USBDM",
  /* PA25 */ "USBDP",
  /* PA26 */ "",
  /* PA27 */ "",
  /* PA28 */ "",
  /* PA29 */ "",
  /* PA30 */ "",
  /* PA31 */ "",
  /* A end */

  /* PB00 */ "",
  /* PB01 */ "",
  /* PB02 */ "",
  /* PB03 */ "",
  /* PB04 */ "",
  /* PB05 */ "",
  /* PB06 */ "",
  /* PB07 */ "",
  /* PB08 */ "",
  /* PB09 */ "",
  /* PB10 */ "I2SMCK1",
  /* PB11 */ "I2SSCK1",
  /* PB12 */ "",
  /* PB13 */ "",
  /* PB14 */ "",
  /* PB15 */ "",
  /* PB16 */ "",
  /* PB17 */ "",
  /* PB18 */ "",
  /* PB19 */ "",
  /* PB20 */ "",
  /* PB21 */ "",
  /* PB22 */ "",
  /* PB23 */ "",
  /* PB24 */ "",
  /* PB25 */ "",
  /* PB26 */ "",
  /* PB27 */ "",
  /* PB28 */ "",
  /* PB29 */ "",
  /* PB30 */ "",
  /* PB31 */ "",
  /* B end */

};
/* start PMUX_H */
const char * pads2pmux_H[] = {
  /* PA00 */ "",
  /* PA01 */ "",
  /* PA02 */ "",
  /* PA03 */ "",
  /* PA04 */ "",
  /* PA05 */ "",
  /* PA06 */ "",
  /* PA07 */ "",
  /* PA08 */ "",
  /* PA09 */ "",
  /* PA10 */ "GCLKIO4",
  /* PA11 */ "GCLKIO5",
  /* PA12 */ "ACCMP0",
  /* PA13 */ "ACCMP1",
  /* PA14 */ "GCLKIO0",
  /* PA15 */ "GCLKIO1",
  /* PA16 */ "GCLKIO2",
  /* PA17 */ "GCLKIO3",
  /* PA18 */ "ACCMP0",
  /* PA19 */ "ACCMP1",
  /* PA20 */ "GCLKIO4",
  /* PA21 */ "GCLKIO5",
  /* PA22 */ "GCLKIO6",
  /* PA23 */ "GCLKIO7",
  /* PA24 */ "",
  /* PA25 */ "",
  /* PA26 */ "",
  /* PA27 */ "GCLKIO0",
  /* PA28 */ "GCLKIO0",
  /* PA29 */ "",
  /* PA30 */ "GCLKIO0",
  /* PA31 */ "",
  /* A end */

  /* PB00 */ "",
  /* PB01 */ "",
  /* PB02 */ "",
  /* PB03 */ "",
  /* PB04 */ "",
  /* PB05 */ "",
  /* PB06 */ "",
  /* PB07 */ "",
  /* PB08 */ "",
  /* PB09 */ "",
  /* PB10 */ "GCLKIO4",
  /* PB11 */ "GCLKIO5",
  /* PB12 */ "",
  /* PB13 */ "",
  /* PB14 */ "",
  /* PB15 */ "",
  /* PB16 */ "",
  /* PB17 */ "",
  /* PB18 */ "",
  /* PB19 */ "",
  /* PB20 */ "",
  /* PB21 */ "",
  /* PB22 */ "GCLKIO0",
  /* PB23 */ "GCLKIO1",
  /* PB24 */ "",
  /* PB25 */ "",
  /* PB26 */ "",
  /* PB27 */ "",
  /* PB28 */ "",
  /* PB29 */ "",
  /* PB30 */ "",
  /* PB31 */ "",
  /* B end */

};

const char * const * pmux_tables[] = {
    pads2pmux_A,
    pads2pmux_B,
    pads2pmux_C,
    pads2pmux_D,
    pads2pmux_E,
    pads2pmux_F,
    pads2pmux_G,
    pads2pmux_H
};
#endif
