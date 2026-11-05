#ifndef SCALAR_CONVERSION_MODEL_HPP
#define SCALAR_CONVERSION_MODEL_HPP
#include <cstdint>
namespace scalar_conversion {
constexpr std::uint32_t invalid = 1u, precision = 32u;
struct Result { std::uint32_t bits, raised, after; };
// Contract: reserved MXCSR bits clear; all exception masks set. Only integer
// arithmetic is used, so the host's floating-point environment is irrelevant.
inline Result finish(std::uint32_t bits, std::uint32_t raised, std::uint32_t csr) {
    return {bits, raised, csr | raised};
}
inline Result cvttss2si(std::uint32_t bits, std::uint32_t csr) {
    const std::uint32_t sign = bits >> 31, exp = (bits >> 23) & 255u;
    const std::uint32_t fraction = bits & 0x7fffffu;
    if (exp == 255u) return finish(0x80000000u, invalid, csr);
    if (exp == 0u) {
        const bool zero = fraction == 0u || (csr & 0x40u) != 0u;
        return finish(0u, zero ? 0u : precision, csr);
    }
    if (exp < 127u) return finish(0u, precision, csr);
    const std::uint32_t e = exp - 127u;
    // At exponent 31, only exactly -2^31 fits. Larger exponents never fit.
    if (e >= 31u) {
        if (e == 31u && sign != 0u && fraction == 0u)
            return finish(0x80000000u, 0u, csr);
        return finish(0x80000000u, invalid, csr);
    }
    const std::uint32_t significand = 0x800000u | fraction;
    std::uint32_t magnitude = 0u, flags = 0u;
    if (e >= 23u) magnitude = significand << (e - 23u);
    else {
        const std::uint32_t shift = 23u - e;
        magnitude = significand >> shift;
        if ((significand & ((1u << shift) - 1u)) != 0u) flags = precision;
    }
    return finish(sign != 0u ? 0u - magnitude : magnitude, flags, csr);
}
inline Result cvtsi2ss(std::uint32_t bits, std::uint32_t csr) {
    if (bits == 0u) return finish(0u, 0u, csr);
    const std::uint32_t sign = bits >> 31;
    const std::uint32_t magnitude = sign != 0u ? 0u - bits : bits;
    std::uint32_t e = 0u;
    for (std::uint32_t t = magnitude; t > 1u; t >>= 1u) ++e;
    std::uint32_t significand = 0u, flags = 0u;
    if (e <= 23u) significand = magnitude << (23u - e);
    else {
        const std::uint32_t shift = e - 23u;
        const std::uint32_t unit = 1u << shift;
        const std::uint32_t remainder = magnitude & (unit - 1u);
        significand = magnitude >> shift;
        if (remainder != 0u) {
            flags = precision;
            const std::uint32_t rc = (csr >> 13) & 3u;
            const bool increment =
                (rc == 0u && (remainder > unit / 2u ||
                    (remainder == unit / 2u && (significand & 1u) != 0u))) ||
                (rc == 1u && sign != 0u) || (rc == 2u && sign == 0u);
            if (increment) ++significand;
        }
        if (significand == 0x1000000u) { significand >>= 1u; ++e; }
    }
    return finish((sign << 31) | ((e + 127u) << 23) |
                  (significand & 0x7fffffu), flags, csr);
}
} // namespace scalar_conversion
#endif
