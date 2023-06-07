#include <gtest/gtest.h>

#include <developer.hpp>

// Define the Testfixture class
class DeveloperTestFixture : public ::testing ::Test
{
   protected:
    SeniorDeveloper sen_dev_ = SeniorDeveloper("Maximilian Mustermann", "Max");
    JuniorDeveloper jun_dev_ = JuniorDeveloper("Maximilia Musterfrau", "Mäxi");
};

// Testfixture for the SeniorDeveloper constructor and get_name and get_alias methods
TEST_F(DeveloperTestFixture, GetSeniorDeveloper)
{
    EXPECT_EQ("Maximilian Mustermann", sen_dev_.get_name());
    EXPECT_EQ("Max", sen_dev_.get_alias());
}

// Testfixture for the JuniorDeveloper constructor and get_name and get_alias methods
TEST_F(DeveloperTestFixture, GetJuniorDeveloper)
{
    EXPECT_EQ("Maximilia Musterfrau", jun_dev_.get_name());
    EXPECT_EQ("Mäxi", jun_dev_.get_alias());
}