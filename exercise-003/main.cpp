#include <fmt/chrono.h>
#include <fmt/format.h>

state_garagentor_offen = 0;
state_fahre_runter = 1;
state_garage_zu = 2;
state_fahre_hoch = 3;
state_stop = 4;

auto main(int argc, char** argv) -> int
{
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", argv[0]);


    return 0; /* exit gracefully*/
}
