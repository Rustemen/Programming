#include <iostream>
#include <string_view>

using namespace std;

int main() {
    string_view str;
    string input;

    long long count;
    std::cin >> count;

    bool banknote_was_found = false;
    for (long long i = 0; i < count; ++i) {
        cin >> input;
        str = input;
        if (str.starts_with('a') && str.ends_with("55661")) {
            banknote_was_found = true;
            std::cout << str << " ";
        }
    }
    if (!banknote_was_found) {
        cout << -1 << endl;
    }
}
