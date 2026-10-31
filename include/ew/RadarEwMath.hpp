#ifndef RADAR_EW_MATH_HPP
#define RADAR_EW_MATH_HPP

#include <cmath>
#include <limits>

namespace ew {

    inline constexpr double SPEED_OF_LIGHT = 299792458.0;

    struct RadarParameters {
        double peakPowerWatts;
        double antennaGainDb;
        double frequencyHz;
        double pulseWidthSeconds;
        double noiseFigureDb;
        double systemLossesDb;
    };

    struct TargetParameters {
        double rcsSquareMeters;
        double rangeMeters;
    };

    struct JammerParameters {
        double erpWatts;
        double bandwidthHz;
        double rangeMeters;
        double systemLossesDb;
    };

    class RadarEwMath {
    public:
        static constexpr double dbToLinear(double db) noexcept {
            return std::pow(10.0, db / 10.0);
        }

        static double linearToDb(double linear) noexcept {
            if (linear <= 0.0) return -std::numeric_limits<double>::infinity();
            return 10.0 * std::log10(linear);
        }

        static constexpr double calculateWavelength(double frequencyHz) noexcept {
            return SPEED_OF_LIGHT / frequencyHz;
        }

        static double calculateSnrLinear(const RadarParameters& radar,
            const TargetParameters& target) noexcept;

        static double calculateJsRatioLinear(const RadarParameters& radar,
            const TargetParameters& target,
            const JammerParameters& jammer) noexcept;

        static double calculateBurnThroughRangeMeters(const RadarParameters& radar,
            const TargetParameters& target,
            const JammerParameters& jammer,
            double minRequiredJsDb) noexcept;
    };

} // namespace ew

#endif // RADAR_EW_MATH_HPP