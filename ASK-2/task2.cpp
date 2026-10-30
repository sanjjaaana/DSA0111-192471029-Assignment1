
#include <iostream>
using namespace std;

// Define zone types
enum class Zone {
    LOCAL,
    CITY,
    EXPRESS
};

// Define fare constants
constexpr double LOCAL_FARE = 10.0;
constexpr double CITY_FARE = 20.0;
constexpr double EXPRESS_FARE = 35.0;

// Define surcharge and limits
constexpr double SURCHARGE = 5.0;
constexpr int MIN_AGE = 5;
constexpr int MAX_PASSENGERS = 6;

// Calculate fare based on zone
int main() {
    Zone selectedZone = Zone::CITY;
    int passengers = 2;
    double fare = 0.0;

    if (selectedZone == Zone::LOCAL) {
        fare = LOCAL_FARE;
    }
    else if (selectedZone == Zone::CITY) {
        fare = CITY_FARE;
    }
    else if (selectedZone == Zone::EXPRESS) {
        fare = EXPRESS_FARE;
    }

    double totalFare = (fare + SURCHARGE) * passengers;

    cout << "TRANSPORT FARE DETAILS" << endl;
    cout << "----------------------" << endl;
    cout << "Selected Zone: CITY" << endl;
    cout << "Base Fare: Rs. " << fare << endl;
    cout << "Surcharge: Rs. " << SURCHARGE << endl;
    cout << "Passengers: " << passengers << endl;
    cout << "Total Fare: Rs. " << totalFare << endl;
    cout << "Minimum Age: " << MIN_AGE << endl;
    cout << "Maximum Passengers: " << MAX_PASSENGERS << endl;

    return 0;
}
