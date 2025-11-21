#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int globalVar = 1;


int main(int argc, char **argv,int globalVar) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);
    fmt::print(globalVar)

    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}
