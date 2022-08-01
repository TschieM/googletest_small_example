#include "gmock/gmock.h"
#include "driver.h"

class MockDriver : public Driver{
public:
    MOCK_METHOD(void, DriverFunction, (), (override));
};
