/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CECFC2F47BC919008B420E9A97CD2A3F0469C0EB168EF5EA0A032F438F95ADD7
 * Entry: 0x001d0c30, Ghidra index: 6207, label: FUN_001d0c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0c30(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1ac) {
    FUN_001d29d0();
  }
  return;
}
