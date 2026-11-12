/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB4BAB194AAE7751EAE686A11B9B3777DD65C29138D9A7D064CC8A88CB137299
 * Entry: 0x002eaa70, Ghidra index: 10594, label: FUN_002eaa70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002eaa70(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  // Bounded native object only: two's-complement 16-bit short, 32-bit int,
  // first zero at L <= 0x3ffffffe and L+1 <= PTRDIFF_MAX in one live short array.
  // Reads through the zero and the final one-past advance must be valid.
  // Guest32 mapping/wrap, registers/flags and RET transport remain ABI_UNVERIFIED.
  return static_cast<int>(psVar2 - param_1) - 1;
}
