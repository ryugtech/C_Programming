#include <stdio.h>

enum TrafficLight {
    Red,
    Yellow,
    Green
};

int main() {
    enum TrafficLight signal;

    signal = Green;

    switch (signal) {
        case Red:
            printf("Stop\n");
            break;
        case Yellow:
            printf("Caution\n");
            break;
        case Green:
            printf("Go\n");
            break;
        default:
            printf("Unknown signal\n");
            break;
    }

    return 0;
}