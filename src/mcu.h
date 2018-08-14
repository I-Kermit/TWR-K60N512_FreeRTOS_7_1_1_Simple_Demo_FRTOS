/**
 *****************************************************************************
 **
 **  File        : mcu.h
 **
 **  Abstract    : Common header file for Freescale Kinetis microcontrollers.
 **
 **  Environment : Atollic TrueSTUDIO(R)
 **
 **  Distribution: The file is distributed “as is,” without any warranty
 **                of any kind.
 **
 **  (c)Copyright Atollic AB.
 **  You may use this file as-is or modify it according to the needs of your
 **  project. Distribution of this file (unmodified or modified) is not
 **  permitted. Atollic AB permit registered Atollic TrueSTUDIO(R) users the
 **  rights to distribute the assembled, compiled & linked contents of this
 **  file as part of an application binary file, provided that it is built
 **  using the Atollic TrueSTUDIO(R) toolchain.
 **
 **
 *****************************************************************************
 */

/**
 **===========================================================================
 **  Revisions
 **===========================================================================
 **       Date        Modification
 **       2011-09-07  First issue.
 **       2011-11-07  Added new devices
 **===========================================================================
 */

#ifndef __MCU_H
#define __MCU_H

/* Include MCU and system start-up header file */

#if defined(MKL04Z4)
  #include "MKL04Z4.h"
  #include "system_MKL04Z4.h"
#elif defined(MKL05Z4)
  #include "MKL05Z4.h"
  #include "system_MKL05Z4.h"
#elif defined(MKL14Z4)
  #include "MKL14Z4.h"
  #include "system_MKL14Z4.h"
#elif defined(MKL15Z4)
  #include "MKL15Z4.h"
  #include "system_MKL15Z4.h"
#elif defined(MKL24Z4)
  #include "MKL24Z4.h"
  #include "system_MKL24Z4.h"
#elif defined(MKL25Z4)
  #include "MKL25Z4.h"
  #include "system_MKL25Z4.h"
#elif defined(MK10D5)
  #include "MK10D5.h"
  #include "system_MK10D5.h"
#elif defined(MK10D7)
  #include "MK10D7.h"
  #include "system_MK10D7.h"
#elif defined(MK10DN512Vyy10) || defined(MK10DX128Vyy10) || defined(MK10DX256Vyy10)
  #include "MK10DZ10.h"
  #include "system_MK10DZ10.h"
#elif defined(MK10N512VLQ100) || defined(MK10N512VMD100) || defined(MK10X256VLQ100) || defined(MK10X256VMD100)
  #include "MK10DZ10.h"
  #include "system_MK10DZ10.h"
#elif defined(MK11D5)
  #include "MK11D5.h"
  #include "system_MK11D5.h"
#elif defined(MK12D5)
  #include "MK12D5.h"
  #include "system_MK12D5.h"
#elif defined(MK20DN512Vyy10) || defined(MK20DX128Vyy10) || defined(MK20DX256Vyy10)
  #include "MK20DZ10.h"
  #include "system_MK20DZ10.h"
#elif defined(MK20Dx32Vyy5) || defined(MK20Dx64Vyy5) || defined(MK20DX128Vyy5)
  #include "MK20D5.h"
  #include "system_MK20D5.h"
#elif defined(MK20DX64Vyy7) || defined(MK20DX128Vyy7) || defined(MK20DX256Vyy7)
  #include "MK20D7.h"
  #include "system_MK20D7.h"
#elif defined(MK20N512VLL100) || defined(MK20N512VLQ100) || defined(MK20N512VMD100) || defined(MK20X256VMD100)
  #include "MK20DZ10.h"
  #include "system_MK20DZ10.h"
#elif defined(MK21D5)
  #include "MK21D5.h"
  #include "system_MK21D5.h"
#elif defined(MK22D5)
  #include "MK22D5.h"
  #include "system_MK22D5.h"
#elif defined(MK30D7)
  #include "MK30D7.h"
  #include "system_MK30D7.h"
#elif defined(MK30DN512Vyy10) || defined(MK30DX128Vyy10) || defined(MK30DX256Vyy10)
  #include "MK30DZ10.h"
  #include "system_MK30DZ10.h"
#elif defined(MK30N512VLL100) || defined(MK30N512VLQ100) || defined(MK30N512VMD100) || defined(MK30X256VLQ100) || defined(MK30X256VMD100)
  #include "MK30DZ10.h"
  #include "system_MK30DZ10.h"
#elif defined(MK40D7)
  #include "MK40D7.h"
  #include "system_MK40D7.h"
#elif defined(MK40DN512Vyy10) || defined(MK40DX128Vyy10) || defined(MK40DX256Vyy10)
  #include "MK40DZ10.h"
  #include "system_MK40DZ10.h"
#elif defined(MK40N512VLL100) || defined(MK40N512VLQ100) || defined(MK40N512VMD100) || defined(MK40X256VLQ100) || defined(MK40X256VMD100) || defined(MK40X512VLQ100)
  #include "MK40DZ10.h"
  #include "system_MK40DZ10.h"
#elif defined(MK50D7)
  #include "MK50D7.h"
  #include "system_MK50D7.h"
#elif defined(MK51D7)
  #include "MK51D7.h"
  #include "system_MK51D7.h"
#elif defined(MK50DN512ZCyy10) || defined(MK50DX256ZCyy10)
  #include "MK50DZ10.h"
  #include "system_MK50DZ10.h"
#elif defined(MK50N512CMD100) || defined(MK50N512CMD100)
  #include "MK50DZ10.h"
  #include "system_MK50DZ10.h"
#elif defined(MK51DN256ZCyy10) || defined(MK51DN512ZCyy10) || defined(MK51DX256ZCyy10)
  #include "MK51DZ10.h"
  #include "system_MK51DZ10.h"
#elif defined(MK51N256CMD100) || defined(MK51N512CLQ100) || defined(MK51N512CMD100)
  #include "MK51DZ10.h"
  #include "system_MK51DZ10.h"
#elif defined(MK52DN512ZCyy10)
  #include "MK52DZ10.h"
  #include "system_MK52DZ10.h"
#elif defined(MK52N512CLQ100) || defined(MK52N512CMD100)
  #include "MK52DZ10.h"
  #include "system_MK52DZ10.h"
#elif defined(MK53DN512ZCyy10) || defined(MK53DX256ZCyy10)
  #include "MK53DZ10.h"
  #include "system_MK53DZ10.h"
#elif defined(MK53N512CLQ100) || defined(MK53N512CMD100) || defined(MK53X256CLQ100) || defined(MK53X256CMD100)
  #include "MK53DZ10.h"
  #include "system_MK53DZ10.h"
#elif defined(MK60DN256Vyy10) || defined(MK60DN512Vyy10) || defined(MK60DX256Vyy10)
  #include "MK60DZ10.h"
  #include "system_MK60DZ10.h"
#elif defined(MK60FN1M0Vyy12) || defined(MK60FX512Vyy12)
  #include "MK60DZ12.h"
  #include "system_MK60DZ12.h"
#elif defined(MK60FN1M0Vyy15) || defined(MK60FX512Vyy15)
  #include "MK60DZ15.h"
  #include "system_MK60DZ15.h"
#elif defined(MK60N256VLL100) || defined(MK60N256VLQ100) || defined(MK60N256VMD100) || defined(MK60N512CAB100) || defined(MK60N512CAB100R) || defined(MK60N512VLL100) || defined(MK60N512VLQ100) || defined(MK60N512VMD100) || defined(MK60X256VLL100) || defined(MK60X256VLQ100) || defined(MK60X256VMD100)
  #include "MK60DZ10.h"
  #include "system_MK60DZ10.h"
#elif defined(MK61FN1M0Vyy12) || defined(MK61FX512Vyy12)
  #include "MK61DZ12.h"
  #include "system_MK61DZ12.h"
#elif defined(MK61FN1M0Vyy15) || defined(MK61FX512Vyy15)
  #include "MK61DZ15.h"
  #include "system_MK61DZ15.h"
#else
  #error Include correct header files for your device here!
#endif

#endif
