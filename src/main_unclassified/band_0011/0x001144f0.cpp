/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03B1BC57BE2C7F257F6FAFCB6CC6953DEE0A2A7752639EA670EFDA75EDBC3063
 * Entry: 0x001144f0, Ghidra index: 3570, label: FUN_001144f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee-draft-matched declaration for C++17 name lookup only; Xbox ABI_UNVERIFIED. */
extern void FUN_0016ada0(void);
void FUN_001144f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (param_2 != -1)) {
    FUN_0016ada0();
    if (*(int *)(param_2 + 0x4c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) >> 2;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_001144f0(param_1,*(undefined4 *)(*(int *)(param_2 + 0x4c) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return;
}
