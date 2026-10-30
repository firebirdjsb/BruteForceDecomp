/* Ghidra's pseudo-C scalar aliases for x86 32-bit source inspection only.
 * Many constructs (24-bit values, x87, SIMD, external registers) need review.
 * Not a linking or runtime-compatibility layer. */
#ifndef BF_GHIDRA_TYPES_H
#define BF_GHIDRA_TYPES_H
#include <stdint.h>
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
#endif
