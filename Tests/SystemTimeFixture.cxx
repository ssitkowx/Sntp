///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Utils.h"
#include "LoggerHw.h"
#include "gmock/gmock.h"
#include "SystemTimeFixture.hxx"

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// FUNCTIONS ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

TEST_F (SystemTimeFixture, VisuallyCheckThatTheUnitOfTimeIsMiliSeconds)
{
    LOGW (MODULE, "CheckThatTheUnitOfTimeIsMiliSeconds");
    LOGD (MODULE, "Miliseconds: ", SystemTimeHw::GetInst ()->InMiliseconds ());

}

TEST_F (SystemTimeFixture, VisuallyCheckThatTheUnitOfTimeIsSeconds)
{
    LOGW (MODULE, "CheckThatTheUnitOfTimeIsSeconds");
    LOGD (MODULE, "Seconds: ", SystemTimeHw::GetInst ()->InSeconds ());
}

TEST_F (SystemTimeFixture, CheckTheDiffBetweenTheTimeExpressedInSecAndMilisec)
{
    LOGW (MODULE, "CheckTheDiffBetweenTheTimeExpressedInSecAndMilisec");

    int64_t seconds     = SystemTimeHw::GetInst ()->InSeconds     ();
    int64_t miliseconds = SystemTimeHw::GetInst ()->InMiliseconds ();
    int64_t difference  = miliseconds / seconds;
    LOGD      (MODULE, "Difference: ", difference);
    EXPECT_EQ (difference, ONE_THOUSAND);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////