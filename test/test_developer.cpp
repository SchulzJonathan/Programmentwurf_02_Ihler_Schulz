#include <gtest/gtest.h>

#include <developer.hpp>

class DeveloperTestFixture : public ::testing ::Test
{
   protected:
    SeniorDeveloper sen_dev_ = Developer("Maximilian Mustermann", "Max");
    JuniorDeveloper jun_dev_ = Developer("Maximilia Musterfrau", "Mäxi");
};

Test_F(DeveloperTestFixture, SeniorDeveloper_get)
{
    EXPECT_STREQ("Maximilian Mustermann", sen_dev_.get_name());
    EXPECT_STREQ("Max", sen_dev_.get_alias());
};

Test_F(DeveloperTestFixture, JuniorDeveloper_get)
{
    EXPECT_STREQ("Maximilia Musterfrau", jun_dev_.get_name());
    EXPECT_STREQ("Mäxi", jun_dev_.get_alias());
};