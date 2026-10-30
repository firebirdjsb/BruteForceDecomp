/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CE1C33108BE3FB6705E5F81EC47DD5510B68C4E7F00596D741B63770ADEDF2A
 * Entry: 0x0001d4c0, Ghidra index: 131, label: FUN_0001d4c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001d7a0(int param_1);

void FUN_0001d4c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  for (iVar1 = (param_2 - param_1 >> 2) - (param_2 - param_1 >> 0x1f) >> 1; 0 < iVar1;
      iVar1 = iVar1 + -1) {
    FUN_0001d7a0(param_1,*(undefined4 *)(param_1 + -4 + iVar1 * 4),param_3);
  }
  return;
}
