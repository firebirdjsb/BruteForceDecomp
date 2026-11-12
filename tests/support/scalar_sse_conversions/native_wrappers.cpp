#include "native_wrappers.hpp"
// These are newly authored test wrappers, not original game bytes or code.
// Each asm region contains exactly one scalar conversion with a 32-bit GPR.
extern "C" __attribute__((noinline)) NativeResult native_tt(
    std::uint32_t bits, std::uint32_t csr, const std::uint32_t (&seed)[4]) {
    NativeResult out;
    std::uint32_t saved;
    const std::uint32_t lanes[4] = {bits, seed[1], seed[2], seed[3]};
    __asm__ volatile (
        "stmxcsr %[saved]\n\t"
        "ldmxcsr %[csr]\n\t"
        "movups %[lanes], %%xmm0\n\t"
        "cvttss2si %%xmm0, %k[result]\n\t"
        "stmxcsr %[after]\n\t"
        "movups %%xmm0, %[output_lanes]\n\t"
        "ldmxcsr %[saved]\n\t"
        : [saved] "=m" (saved), [result] "=&r" (out.bits),
          [after] "=m" (out.after), [output_lanes] "=m" (out.lanes)
        : [csr] "m" (csr), [lanes] "m" (lanes)
        : "xmm0", "memory");
    return out;
}
extern "C" __attribute__((noinline)) NativeResult native_si(
    std::uint32_t bits, std::uint32_t csr, const std::uint32_t (&seed)[4]) {
    NativeResult out;
    std::uint32_t saved;
    __asm__ volatile (
        "stmxcsr %[saved]\n\t"
        "ldmxcsr %[csr]\n\t"
        "movups %[lanes], %%xmm0\n\t"
        "cvtsi2ss %k[bits], %%xmm0\n\t"
        "movd %%xmm0, %k[result]\n\t"
        "stmxcsr %[after]\n\t"
        "movups %%xmm0, %[output_lanes]\n\t"
        "ldmxcsr %[saved]\n\t"
        : [saved] "=m" (saved), [result] "=&r" (out.bits),
          [after] "=m" (out.after), [output_lanes] "=m" (out.lanes)
        : [csr] "m" (csr), [lanes] "m" (seed), [bits] "r" (bits)
        : "xmm0", "memory");
    return out;
}
