#ifndef JUST_DO_COFFEE_H
#define JUST_DO_COFFEE_H

#include "../utils.h"
#include "../peripherals/peripherals.h"
#include "../peripherals/pump.h"
#include "../eeprom_data.h"
#include "../sensors_state.h"
#include <Arduino.h>


#define STEAM_TEMPERATURE         125.f
#define STEAM_WAND_HOT_WATER_TEMP 105.f
#define DELTA_RANGE             0.25f // % to apply as delta

void justDoCoffee(eepromValues_t &runningCfg, SensorState &currentState, bool brewActive, bool preinfusionFinished);
void steamCtrl(eepromValues_t &runningCfg, SensorState &currentState, bool brewActive);
void steamBoilerCtrl(eepromValues_t &runningCfg, SensorState &currentState);
void dreamSteam(eepromValues_t &runningCfg, SensorState &currentState, bool brewActive);

#endif

