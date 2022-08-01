#include "gtest/gtest.h"
#include "mock_driver.hpp"
#include "application.hpp"

class ApplicationTest : public ::testing::Test {
protected:
    MockDriver mock_driver_;
    Application app = Application(std::shared_ptr<Driver>(&mock_driver_));
};

TEST_F(ApplicationTest, DummyTest) {
    EXPECT_CALL(mock_driver_, DriverFunction).Times(1);
    app.AppFunction();
}