#ifndef DRIVER_H
#define DRIVER_H

#include <memory>

class Driver {
public:
    static std::shared_ptr<Driver> Create();
    virtual void DriverFunction() = 0;
}; // driver class

#endif