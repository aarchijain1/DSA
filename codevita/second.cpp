#include <iostream>
#include <unordered_map>

using namespace std;

bool isValid(string row) {
    for (int i = 1; i < row.length(); ++i) {
        if (row[i] == row[i - 1]) {
            return false;
        }
    }
    return true;
}

int countPossibilities(string row) {
    unordered_map<string, int> possibilities;
    for (int i = 0; i < row.length() - 2; ++i) {
        string set = row.substr(i, 3);
        possibilities[set]++;
    }
    int maxPossibilities = 0;
    for (const auto& entry : possibilities) {
        if (entry.second > maxPossibilities) {
            maxPossibilities = entry.second;
        }
    }
    return maxPossibilities;
}

int main() {
    string ashokRow, anandRow;
    cin >> ashokRow >> anandRow;

    if (!isValid(ashokRow) || !isValid(anandRow)) {
        cout << "Invalid input" << endl;
        return 0;
    }

    int ashokPossibilities = countPossibilities(ashokRow);
    int anandPossibilities = countPossibilities(anandRow);

    if (ashokPossibilities > anandPossibilities) {
        cout << "Ashok" << endl;
    } else if (anandPossibilities > ashokPossibilities) {
        cout << "Anand" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}
