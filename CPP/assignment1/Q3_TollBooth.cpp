#include <iostream>
using namespace std;

class TollBooth
{
private:
    int totalVehicles;
    double totalRevenue;

public:
    TollBooth()
    {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    void reset()
    {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    void vehiclePayingToll(int vehicleType, double tollAmount)
    {
        totalVehicles++;
        totalRevenue += tollAmount;
    }

    int getTotalVehicles()
    {
        return totalVehicles;
    }

    double getTotalRevenue()
    {
        return totalRevenue;
    }
};

int main()
{
    TollBooth t;
    int choice;

    do
    {
        cout << "\n1.Add Car (Rs180)";
        cout << "\n2.Add Truck (Rs300)";
        cout << "\n3.Add Bus (Rs350)";
        cout << "\n4.Total Vehicles";
        cout << "\n5.Total Revenue";
        cout << "\n6.Reset";
        cout << "\n7.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.vehiclePayingToll(1, 180);
            break;

        case 2:
            t.vehiclePayingToll(2, 300);
            break;

        case 3:
            t.vehiclePayingToll(3, 350);
            break;

        case 4:
            cout << "Total Vehicles: " << t.getTotalVehicles() << endl;
            break;

        case 5:
            cout << "Total Revenue: " << t.getTotalRevenue() << endl;
            break;

        case 6:
            t.reset();
            cout << "Booth Reset\n";
            break;
        }

    } while (choice != 7);

    return 0;
}