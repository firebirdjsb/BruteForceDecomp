/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0BC9A9CDDCCA1760C612933B2079B000837148BFBB1EAB078698FF662BCC333
 * Entry: 0x0025f1f0, Ghidra index: 8602, label: FUN_0025f1f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0025f1f0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0xc) != 0) {
      iVar1 = FUN_0025f3b0(param_1,param_2);
      return iVar1;
    }
    iVar1 = FUN_002ea01d(0x78);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00235a30(param_2,0);
    }
    *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | 0x100;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0;
  }
  return iVar1;
}
