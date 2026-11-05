/* Bounded native x86-64 projection, not an Xbox time source or guest ABI.
 * Exactly one unsynchronized RDTSC. No fence, clock conversion or monotonicity
 * assumption. The caller must run where native user-mode RDTSC is permitted. */
#ifndef BF_NATIVE_TIMESTAMP_OPERATION_H
#define BF_NATIVE_TIMESTAMP_OPERATION_H
#if !defined(__x86_64__) || !defined(__linux__) || defined(_WIN32) || (!defined(__GNUC__) && !defined(__clang__))
#error "timestamp projection requires GNU/Clang x86-64 Linux native RDTSC"
#endif
#include <cstdint>
__attribute__((always_inline)) static inline std::uint64_t
bf_native_timestamp_unsynchronized()
{
    std::uint32_t low, high;
    __asm__ volatile("rdtsc" : "=a"(low), "=d"(high));
    return static_cast<std::uint64_t>(low) |
           (static_cast<std::uint64_t>(high) << 32);
}
#endif
