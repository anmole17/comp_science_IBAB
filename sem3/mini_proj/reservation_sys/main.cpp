#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Ticket {

private:
    string passengerName;
    string source;
    string destination;
    double price;
    bool isCancelled;
    string pnr_no
public: 
    Ticket(string pnr, string name, string src, string dest, double ticketPrice)
        : pnr_no(pnr), passengerName(name), source(src), destination(dest), price(ticketPrice), isCancelled(false) {}
};

class ReservationSystem {
private:
    vector<Ticket> airlineTickets;
    vector<Ticket> trainTickets;

public:
    void reserveAirlineTicket(string pnr, string name, string src, string dest, double ticketPrice) {
        Ticket ticket(pnr, name, src, dest, ticketPrice);
        airlineTickets.push_back(ticket);
    }

    void reserveTrainTicket(string name, string src, string dest, double ticketPrice) {
        Ticket ticket(name, src, dest, ticketPrice);
        trainTickets.push_back(ticket);
    }

    int cancelAirlineTicket(string name) {
        for (Ticket& ticket : airlineTickets) {
            if (ticket.passengerName == name && !ticket.isCancelled) {
                ticket.isCancelled = true;
                cout << "Airline ticket for " << name << " has been cancelled." << endl;
                return 0;
            }
        }
        cout << "No active airline ticket found for " << name << "." << endl;
        return 0;
    }

    void cancelTrainTicket(string name) {
        for (Ticket& ticket : trainTickets) {
            if (ticket.passengerName == name && !ticket.isCancelled) {
                ticket.isCancelled = true;
                cout << "Train ticket for " << name << " has been cancelled." << endl;
                return;
            }
        }
        cout << "No active train ticket found for " << name << "." << endl;
    }

    void displayAllTickets() {
        cout << "Airline Tickets:" << endl;
        for (const Ticket& ticket : airlineTickets) {
            if (!ticket.isCancelled) {
                cout << "Passenger: " << ticket.passengerName << ", Source: " << ticket.source << ", Destination: " << ticket.destination
                     << ", Price: " << ticket.price << endl;
            }
        }

        cout << "Train Tickets:" << endl;
        for (const Ticket& ticket : trainTickets) {
            if (!ticket.isCancelled) {
                cout << "Passenger: " << ticket.passengerName << ", Source: " << ticket.source << ", Destination: " << ticket.destination
                     << ", Price: " << ticket.price << endl;
            }
        }
    }
};

int main() {
    ReservationSystem reservationSystem;

    // Airline reservation example
    reservationSystem.reserveAirlineTicket("John Doe", "New York", "London", 500.0);
    reservationSystem.reserveAirlineTicket("Alice Smith", "Los Angeles", "Paris", 700.0);
    reservationSystem.reserveAirlineTicket("Bob Johnson", "Chicago", "Tokyo", 1000.0);

    // Train reservation example
    reservationSystem.reserveTrainTicket("Charlie Brown", "Seattle", "Portland", 50.0);
    reservationSystem.reserveTrainTicket("Emma Davis", "Boston", "Washington D.C.", 80.0);
    reservationSystem.reserveTrainTicket("Grace Wilson", "San Francisco", "Los Angeles", 120.0);

    // Cancel a ticket
    reservationSystem.cancelAirlineTicket("Alice Smith");
    reservationSystem.cancelTrainTicket("Grace Wilson");

    // Display all tickets
    reservationSystem.displayAllTickets();

    return 0;
}
