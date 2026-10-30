/* Ghidra's pseudo-C scalar aliases for x86 32-bit source inspection only.
 * Many constructs (24-bit values, x87, SIMD, external registers) need review.
 * Not a linking or runtime-compatibility layer. */
#ifndef BF_GHIDRA_TYPES_H
#define BF_GHIDRA_TYPES_H
#include <stdint.h>
/* In C++17, <stdint.h> need not expose the std:: namespace aliases.
 * Make historical draft use of std::uint32_t available explicitly.
 * C11 remains unaffected; guest32 widths, ABI and behavior are unchanged. */
#ifdef __cplusplus
#include <cstdint>
#endif
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
typedef uint8_t undefined, undefined1, byte, uchar;
typedef int8_t sbyte;
typedef uint16_t undefined2, ushort, word;
/* In C++ on LP64 hosts, <sys/types.h> already defines ::ulong as a
 * 64-bit unsigned long. The Xbox guest draft's ulong must remain 32 bits.
 * This temporary source-compatibility alias does NOT establish an Xbox ABI. */
#ifdef __cplusplus
typedef uint32_t bf_guest_ulong32;
#define ulong bf_guest_ulong32
typedef uint32_t undefined4, uint, dword, _UNKNOWN;
#else
typedef uint32_t undefined4, uint, dword, ulong, _UNKNOWN;
#endif
typedef uint64_t undefined8, ulonglong, qword;
typedef int64_t longlong;
typedef long double float10;
/* Only four known 'unkbyte10' draft return values map to x87 ST(0):
 * 0x0005A6E0 FPATAN, 0x0006EEE0 FPTAN, 0x001552A0 FPATAN,
 * 0x002F05F8 FSCALE. Original result is extended precision (80 bits).
 * Host long double is a SYNTAX-ONLY storage proxy: size/ABI may differ;
 * original x87 entry/exit registers and rounding remain unverified.
 * Do not treat this alias as a general 10-byte packed data type. */
typedef float10 unkbyte10;
typedef uint32_t undefined3, uint3; /* TODO: actual width 24 bits, not 32 */
typedef int32_t int3;  /* TODO: actual width 24 bits, not 32 */
typedef uint64_t undefined5, undefined6, undefined7;
typedef struct { uint64_t v[2]; } undefined16;
typedef uintptr_t code(); /* TODO: external function ABI, signature and return unknown */
#ifndef __thiscall
#define __thiscall /* unverified Xbox x86 calling convention */
#endif
#ifndef __fastcall
#define __fastcall /* unverified Xbox x86 calling convention */
#endif

/* Ghidra CONCATxy is a byte-width bit concatenation, not arithmetic or an
 * original game function call. Integer arguments preserve only the low x/y
 * bytes. Do not silently cast host pointers or floating values into guest32
 * address/IEEE754 storage: their source semantics require independent review.
 * Example XBE 0x00023134 MOV AL,1 preserves EAX's upper 24 bits, matching
 * CONCAT31((int3)(EAX>>8),1); 0x00023139 XOR AL,AL is its zero-byte path. */
#ifdef __cplusplus
#include <type_traits>
template <typename H, typename L>
static inline uint64_t bf_ghidra_concat_words(H high, L low,
                                               unsigned high_bytes,
                                               unsigned low_bytes)
{
    static_assert(std::is_integral<H>::value && std::is_integral<L>::value,
                  "CONCAT requires integral bytes; guest pointer and FP bits remain unverified");
    const uint64_t high_mask = (UINT64_C(1) << (high_bytes * 8)) - 1;
    const uint64_t low_mask = (UINT64_C(1) << (low_bytes * 8)) - 1;
    return (((uint64_t)high & high_mask) << (low_bytes * 8)) |
           ((uint64_t)low & low_mask);
}
#else
static inline uint64_t bf_ghidra_concat_words(uint64_t high, uint64_t low,
                                               unsigned high_bytes,
                                               unsigned low_bytes)
{
    const uint64_t high_mask = (UINT64_C(1) << (high_bytes * 8)) - 1;
    const uint64_t low_mask = (UINT64_C(1) << (low_bytes * 8)) - 1;
    return ((high & high_mask) << (low_bytes * 8)) | (low & low_mask);
}
#endif
#define CONCAT11(h,l) ((uint16_t)bf_ghidra_concat_words((h),(l),1,1))
#define CONCAT12(h,l) ((uint32_t)bf_ghidra_concat_words((h),(l),1,2))
#define CONCAT13(h,l) ((uint32_t)bf_ghidra_concat_words((h),(l),1,3))
#define CONCAT21(h,l) ((uint32_t)bf_ghidra_concat_words((h),(l),2,1))
#define CONCAT22(h,l) ((uint32_t)bf_ghidra_concat_words((h),(l),2,2))
#define CONCAT31(h,l) ((uint32_t)bf_ghidra_concat_words((h),(l),3,1))
#define CONCAT44(h,l) ((uint64_t)bf_ghidra_concat_words((h),(l),4,4))

#endif
