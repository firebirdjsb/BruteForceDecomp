/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6D21100109DF21778BD20767C2FE9EA14F4733B4BA7AE0140C84D9A977913F9
 * Entry: 0x001cf230, Ghidra index: 6098, label: FUN_001cf230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001cf230(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xac) {
    FUN_001d1af0();
  }
  return;
}
