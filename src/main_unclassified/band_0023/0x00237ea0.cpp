/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D3881ACAABF0ACEAD03E2470107FCD6C0C25D1F1470557A21151BABC38B93CB
 * Entry: 0x00237ea0, Ghidra index: 7859, label: FUN_00237ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00237ea0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    uVar1 = FUN_002f77f3(0,param_1);
    FUN_002f6e31(uVar1,uVar2,param_1);
  }
  return;
}
