///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include "Utils.h"
#include "LoggerMock.h"
#include "gmock/gmock.h"
#include "SystemTimeFixture.hxx"

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// FUNCTIONS ////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

TEST_F (SystemTimeFixture, VisuallyCheckThatTheUnitOfTimeIsMiliSeconds)
{
    LOGW (MODULE, "CheckThatTheUnitOfTimeIsMiliSeconds");
    LOGD (MODULE, "Miliseconds: ", SystemTimeMock::GetInstance ()->InMiliseconds ());

}

TEST_F (SystemTimeFixture, VisuallyCheckThatTheUnitOfTimeIsSeconds)
{
    LOGW (MODULE, "CheckThatTheUnitOfTimeIsSeconds");
    LOGD (MODULE, "Seconds: ", SystemTimeMock::GetInstance ()->InSeconds ());
}

TEST_F (SystemTimeFixture, CheckTheDiffBetweenTheTimeExpressedInSecAndMilisec)
{
    LOGW (MODULE, "CheckTheDiffBetweenTheTimeExpressedInSecAndMilisec");

    int64_t seconds     = SystemTimeMock::GetInstance ()->InSeconds     ();
    int64_t miliseconds = SystemTimeMock::GetInstance ()->InMiliseconds ();
    int64_t difference  = miliseconds / seconds;
    LOGD      (MODULE, "Difference: ", difference);
    EXPECT_EQ (difference, ONE_THOUSAND);
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////