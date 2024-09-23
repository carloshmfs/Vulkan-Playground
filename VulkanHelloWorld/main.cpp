#include "TriangleApplication.h"

#include <iostream>
#include <stdexcept>

int main(int argc, char* argv[])
{
    TriangleApplication app;

    try {
        app.run();
    }
    catch (const std::runtime_error& e) {
        std::cerr << "ERROR: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
