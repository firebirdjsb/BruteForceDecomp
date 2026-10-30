/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7A23F724B788B2E4B5C3CECD7C906CBE966ECC3357796733C11235A9032C2EF
 * Entry: 0x001c7800, Ghidra index: 5812, label: FUN_001c7800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001c7800(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_001e0c40(param_3);
    FUN_00087190(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
