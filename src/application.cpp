#include "application.hpp"

void Application::AppFunction() {
    driver_.lock()->DriverFunction();
}