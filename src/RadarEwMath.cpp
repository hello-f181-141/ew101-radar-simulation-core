#include "ew/RadarEwMath.hpp"

namespace ew {

    double RadarEwMath::calculateSnrLinear(const RadarParameters& radar,
        const TargetParameters& target) noexcept {
        // TODO: Radar menzil denklemi ve termal gürültü hesabı yapılacak
        return 0.0;
    }

    double RadarEwMath::calculateJsRatioLinear(const RadarParameters& radar,
        const TargetParameters& target,
        const JammerParameters& jammer) noexcept {
        // TODO: J/S (Jammer-to-Signal) oranı hesaplanacak
        return 0.0;
    }

    double RadarEwMath::calculateBurnThroughRangeMeters(const RadarParameters& radar,
        const TargetParameters& target,
        const JammerParameters& jammer,
        double minRequiredJsDb) noexcept {
        // TODO: Burn-Through (Delme) menzili hesaplanacak
        return 0.0;
    }

} // namespace ew