#include <iostream>
#include <cstdint>
#include <cmath>
#include <gsl/gsl>

struct Point
{
    std::float_t x_, y_, z_;
};

void MyFunction() {}

int helloWorld(std::int32_t argc, gsl::zstring *argv)
{
    gsl::span<gsl::zstring> arguments(argv, argc);
    std::sort(arguments.begin(), arguments.end());

    std::string my_string_variation;

    gsl::not_null<gsl::zstring *> arguments_pointer_validated = argv;

    std::uint32_t count = 0;
    std::size_t size = 12;

    std::float_t s = 0.0f;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
