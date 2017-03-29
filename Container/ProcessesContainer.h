#pragma once

#include "../Processes.h"

class ProcessesContainer
{
public:
    virtual Processes *getProcesses() = 0;
};
