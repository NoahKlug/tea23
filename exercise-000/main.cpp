#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    
     fmt::print("Hello, {} bli bls blub!\n", tea::PROJECT_NAME);

     int y = 5;

     fmt::println(y);

     changeValuebyParameter(y);                        // Speicher wieder freigeben

     fmt::println(y);

    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}
