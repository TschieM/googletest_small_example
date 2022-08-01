#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <memory>
#include "driver.h"

class Application {
public:
    Application(std::weak_ptr<Driver> driver): driver_(driver) {}
    void AppFunction();
private:
    std::weak_ptr<Driver> driver_;
}; // Application classs

#endif