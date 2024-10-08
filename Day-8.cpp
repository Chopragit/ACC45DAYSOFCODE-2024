#include <iostream>
#include <cstdlib> // for abs function

int main() {
    int T;
    // Read the number of test cases
    std::cin >> T;

    // Iterate through each test case
    for (int i = 0; i < T; i++) {
        int X, Y;
        // Read the initial positions of the policeman (X) and the thief (Y)
        std::cin >> X >> Y;

        // Calculate the minimum time to catch the thief
        int time_to_catch = std::abs(Y - X);

        // Output the result
        std::cout << time_to_catch << std::endl;
    }

    return 0;
}
