#include <iostream>
#include <fstream>
#include <deque>
#include <string>

void print_last_n_lines(const std::string& file_name, std::size_t n) {
    std::ifstream file(file_name);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << file_name << std::endl;
        return;
    }

    std::deque<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
        if (lines.size() > n) {
            lines.pop_front();
        }
    }

    for (const auto& l : lines) {
        std::cout << l << std::endl;
    }
}

int main() {
    std::string file_name =  "../TestData/two_input.txt";
    std::size_t n;

    std::cout << "Enter the number of last lines to read: ";
    std::cin >> n;

    print_last_n_lines(file_name, n);

    return 0;
}
