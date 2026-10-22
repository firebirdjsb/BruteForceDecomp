/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C2390ED11CA22067C4AB31B828F76E56149A50BDC3DB2A8F669E871405C4E99
 * Entry: 0x002c6e80, Ghidra index: 10088, label: FUN_002c6e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c6e80(undefined4 param_1,int param_2)

{
  double *pdVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_2 + 2);
  while (uVar2 = uVar2 - 1, 1 < (int)uVar2) {
    pdVar1 = *(double **)(*(int *)(param_2 + 4) + uVar2 * 4);
    FUN_002b7490();
    if ((double)*(int *)((int)pdVar1 + 0x1c) < *pdVar1) {
      FUN_002c26e0();
      *(int *)((int)pdVar1 + 0x1c) = (int)(*pdVar1 + 10.0);
    }
  }
  if (uVar2 == 1) {
    pdVar1 = *(double **)(*(int *)(param_2 + 4) + 4);
    FUN_002b7490();
    if ((double)*(int *)((int)pdVar1 + 0x1c) < *pdVar1) {
      FUN_002c26e0();
      *(int *)((int)pdVar1 + 0x1c) = (int)(*pdVar1 + 10.0);
    }
  }
  else if (uVar2 != 0) {
    return;
  }
  pdVar1 = (double *)**(undefined4 **)(param_2 + 4);
  FUN_002b7490();
  if ((double)*(int *)((int)pdVar1 + 0x1c) < *pdVar1) {
    FUN_002c26e0();
    *(int *)((int)pdVar1 + 0x1c) = (int)(*pdVar1 + 10.0);
  }
  return;
}
