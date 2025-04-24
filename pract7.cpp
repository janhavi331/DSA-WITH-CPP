#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Initialize a map with state names as keys and populations as values
    map<string, int> statePopulations;

    // Adding data to the map (you can extend this as needed)
    statePopulations["California"] = 39538223;
    statePopulations["Texas"] = 29145505;
    statePopulations["Florida"] = 21538187;
    statePopulations["New York"] = 20201249;
    statePopulations["Pennsylvania"] = 13002700;
    statePopulations["Illinois"] = 12812508;

    // Prompt the user to enter a state name
    string stateName;
    cout << "Enter the name of a state: ";
    getline(cin, stateName);  // Using getline to allow spaces in the state name

    // Search for the state in the map
    auto it = statePopulations.find(stateName);

    // Check if the state was found in the map
    if (it != statePopulations.end()) {
        cout << "The population of " << stateName << " is " << it->second << "." << endl;
    } else {
        cout << "State not found!" << endl;
    }

    return 0;
}
