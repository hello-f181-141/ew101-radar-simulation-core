#include <iostream>
#include <iomanip>
#include "ew/RadarEwMath.hpp"

int main() {
    ew::RadarParameters radar;
    radar.peakPowerWatts = 50000.0;
    radar.antennaGainDb = 35.0;
    radar.frequencyHz = 9.0e9;
    radar.pulseWidthSeconds = 1.0e-6;
    radar.noiseFigureDb = 4.0;
    radar.systemLossesDb = 6.0;

    ew::TargetParameters target;
    target.rcsSquareMeters = 2.0;
    target.rangeMeters = 50000.0;

    ew::JammerParameters jammer;
    jammer.erpWatts = 1000.0;
    jammer.bandwidthHz = 100.0e6;
    jammer.rangeMeters = target.rangeMeters;
    jammer.systemLossesDb = 3.0;

    std::cout << "EW 101 Radar Test Baslatildi..." << '\n';
    std::cout << "Hedef Menzili: " << target.rangeMeters / 1000.0 << " km" << '\n';

    return 0;
}