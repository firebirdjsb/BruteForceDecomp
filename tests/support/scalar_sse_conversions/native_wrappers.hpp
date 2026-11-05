#ifndef SCALAR_NATIVE_WRAPPERS_HPP
#define SCALAR_NATIVE_WRAPPERS_HPP
#include <cstdint>
struct NativeResult { std::uint32_t bits, after, lanes[4]; };
extern "C" NativeResult native_tt(std::uint32_t bits, std::uint32_t csr,
                                  const std::uint32_t (&lanes)[4]);
extern "C" NativeResult native_si(std::uint32_t bits, std::uint32_t csr,
                                  const std::uint32_t (&lanes)[4]);
#endif
