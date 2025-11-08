#include <iostream>
using namespace std;
int main() {
    int totalSeconds;

    cout << "Zehmet olmasa saniyeni daxil edin: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;           // 1 saat = 3600 saniy
    int minutes = (totalSeconds % 3600) / 60; // qalan saniyeden deqiqeler
    int seconds = totalSeconds % 60;          // qalan saniyeler

    cout << totalSeconds << " saniye = "
              << hours << " saat, "
              << minutes << " deqiqe, "
              << seconds << " saniye." << endl;

    return 0;
}
