///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Sntp.hpp"

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// VARIABLES ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

std::chrono::system_clock::time_point Sntp::timePoint;

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// FUNCTIONS ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

void Sntp::SetInst (Sntp * vInst) { inst = vInst; }

Sntp * Sntp::operator ()()
{
    time_t currentTime;
    time (&currentTime);
    timePoint = std::chrono::system_clock::from_time_t (currentTime);
    return inst;
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
