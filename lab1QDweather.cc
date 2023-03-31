#include <iostream>
using namespace std;

int main() {
    int month_days;
    char weather;
    int sunny_days = 0, rainy_days = 0, cloudy_days = 0;

    cout << "How many days of weather forecas do you want to enter?: ";
    cin >> month_days;

    for (int i = 1; i <= month_days; i++) {
        cout << i << "Day Enter hte weather forecast（H: Hot, R: Rainy, C: Cloudy）: ";
        cin >> weather;

        switch(weather) {
            case 'H':
                sunny_days++;
                break;
            case 'R':
                rainy_days++;
                break;
            case 'C':
                cloudy_days++;
                break;
            default:
                cout << "Please write the collect weather" << endl;
                i--;
                break;
        }
    }

    cout << "Number of days of Hot: " << sunny_days << endl;
    cout << "Number of days of Rainy: " << rainy_days << endl;
    cout << "Number of days of Cloudy: " << cloudy_days << endl;

    return 0;
}