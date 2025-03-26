#include <iostream>
#include <string>

void displayBirthdayMessage(const std::string& name) {
    std::cout << "***************************************\n";
    std::cout << "*         :tada: Happy Birthday! :tada:        *\n";
    std::cout << "***************************************\n\n";

    std::cout << "Dear " << name << ",\n";
    std::cout << "Wishing you a day filled with joy, laughter, and love.\n";
    std::cout << "May this year bring you happiness, success, and endless blessings.\n";
    std::cout << "Keep shining bright and chasing your dreams. :star2:\n\n";

    std::cout << "Have an amazing birthday and a wonderful year ahead!\n\n";

    std::cout << "***************************************\n";
    std::cout << "*          :birthday: Enjoy Your Day! :birthday:       *\n";
    std::cout << "***************************************\n";
}

int main() {
    std::string friendName = "NAPTRIX";
    displayBirthdayMessage(friendName);
    return 0;
}
