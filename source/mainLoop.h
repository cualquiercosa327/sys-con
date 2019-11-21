#pragma once
#include "switch/result.h"

struct GlobalConfig
{
    uint16_t dualshock4_productID;
    uint16_t dualshock3_productID;
    uint16_t dualshock3_vendorID;
};

Result mainLoop();

void LoadGlobalConfig(const GlobalConfig *config);
