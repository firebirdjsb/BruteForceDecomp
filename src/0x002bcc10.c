/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CED502CBB111256F92386BADAF9CC9D09AE17A8A6E389B780A0613CDD8598AC7
 * Entry: 0x002bcc10, Ghidra index: 9930, label: FUN_002bcc10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bcc10(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_002bc920();
  if (iVar2 != 0) {
    uVar4 = (uint)*(ushort *)(iVar2 + 6);
    do {
      uVar4 = uVar4 - 1;
      if ((int)uVar4 < 0) {
        return;
      }
      piVar1 = *(int **)(*(int *)(iVar2 + 8) + uVar4 * 4);
    } while ((((*(byte *)(piVar1 + 1) & 2) == 0) ||
             ((**(code **)(*piVar1 + 4))(param_2), (int)uVar4 < 1)) ||
            (iVar3 = FUN_002bc920(), iVar3 != 0));
  }
  return;
}
