#include <gtest/gtest.h>

#include <developer.hpp>

class DeveloperTestFixture : public ::testing ::Test
{
   protected:
    SeniorDeveloper sen_dev_ = SeniorDeveloper("Maximilian Mustermann", "Max");
    JuniorDeveloper jun_dev_ = JuniorDeveloper("Maximilia Musterfrau", "Mäxi");
};

TEST_F(DeveloperTestFixture, SeniorDeveloper_get)
{
    EXPECT_EQ("Maximilian Mustermann", sen_dev_.get_name());
    EXPECT_EQ("Max", sen_dev_.get_alias());
}

TEST_F(DeveloperTestFixture, JuniorDeveloper_get)
{
    EXPECT_EQ("Maximilia Musterfrau", jun_dev_.get_name());
    EXPECT_EQ("Mäxi", jun_dev_.get_alias());
}