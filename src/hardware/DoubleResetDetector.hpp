//
// Copyright (c) 2020 Alexander Mohr 
// Licensed under the terms of the MIT license
//
#ifndef DOUBLERESETDETECTOR_HPP_
#define DOUBLERESETDETECTOR_HPP_

#define DOUBLERESETDETECTOR_DEBUG       true  //false

#include <ESP_DoubleResetDetector.h>      //https://github.com/khoih-prog/ESP_DoubleResetDetector


// Number of seconds after reset during which a
// subsequent reset will be considered a double reset.
#define DRD_TIMEOUT 10

// RTC Memory Address for the DoubleResetDetector to use
#define DRD_ADDRESS 0



#endif //DOUBLERESETDETECTOR_HPP_
