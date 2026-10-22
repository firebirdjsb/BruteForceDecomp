/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B8A15FA4E39271308794E63B0EE0D8975B6F54CA65AD5D04FAB4E0AF6B951A8
 * Entry: 0x001d0870, Ghidra index: 6190, label: FUN_001d0870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d0870(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x48) {
    FUN_001d2330();
  }
  return;
}
