#include <iostream>
#include <string>

int main(int argc, char** argv) {
    if (argc != 4 || (std::string(argv[1]) != "lines" && std::string(argv[1]) != "highlight")) {
        std::cerr << "usage: mydiff lines|highlight A_PATH B_PATH\n";
        return 2;
    }
    std::string command = argv[1];
    std::string aPath = argv[2];
    std::string bPath = argv[3];
    // TODO: read both files as raw bytes (brief, Section 2), then print the listing.
    return 0;
}
