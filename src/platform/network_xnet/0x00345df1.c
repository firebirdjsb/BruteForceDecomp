/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 170E06406B26419ABD4A5ED6E376037EACF5521788FA2D8BF3BDFBB818A6D388
 * Entry: 0x00345df1, Ghidra index: 12823, label: FUN_00345df1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ushort FUN_00345df1(ushort param_1)

{
  return param_1 << 8 | param_1 >> 8;
}
