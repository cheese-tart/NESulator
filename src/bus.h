#pragma once
#include <cstdint>
#include <array>

#include "cpu.h"

class Bus
{
public:
    Bus();
    ~Bus();

    cpu cpu;

    std::array<uint8_t, 64 * 1024> ram;

    void write(uint16_t address, uint8_t data);
    uint8_t read(uint16_t address, bool readOnly = false);
};
