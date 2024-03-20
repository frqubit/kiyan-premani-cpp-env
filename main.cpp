#include <iostream>
#include <vector>
#include <string>
#include <cmath>


int next_number(std::string& text) {
	std::string n = "";

	for (char c : text) {
		if (isdigit(c)) {
			n += c;
		} else {
			break;
		}
	}

	text = text.substr(n.length());

	return std::stoi(n);
}

int main() {
    std::string input;

    std::cout << "Enter an expression: ";
    std::getline(std::cin, input);

    std::vector<int> numbers;

    while (!input.empty()) {
        numbers.push_back(next_number(input));

        // There are still characters
        if (!input.empty()) {
            input = input.substr(1);
        }
    }

    int sum = 0;
    for (int n : numbers) {
        sum += n;
    }

    std::cout << sum << std::endl;

    return 0;
}
