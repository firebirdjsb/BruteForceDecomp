/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 324B0606D06F16EA9D589C45A438527798B07404339AF1D622F7CB6FD17FF9CD
 * Entry: 0x002f0c08, Ghidra index: 10757, label: __isatty
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8e98;
extern uint32_t DAT_004a8ea0;
/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Release */

byte __isatty(uint param_1)

{
  if (DAT_004a8e98 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_004a8ea0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}
