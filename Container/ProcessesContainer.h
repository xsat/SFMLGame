#pragma once

#include "../Processes.h"

class ProcessesContainer
{
public:
    virtual const Processes *getProcesses() const = 0;
};
