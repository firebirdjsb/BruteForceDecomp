/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1188D7108D37C6F54AB15E14FD9D7FCABC4582F49D996FC7DEF977DF39BA76CE
 * Entry: 0x000454b0, Ghidra index: 540, label: FUN_000454b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000454b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_000120f0();
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x59c), iVar1 != 0)) {
    if (*(int *)(iVar1 + 4) != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(iVar1 + 8);
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 != 0) {
        iVar3 = 0;
        uVar4 = 1;
        do {
          (**(code **)*param_1)(iVar2);
          if (*(uint *)(iVar1 + 4) <= uVar4) {
            return;
          }
          iVar3 = iVar3 + 4;
          if (uVar4 < *(uint *)(iVar1 + 4)) {
            iVar2 = *(int *)(iVar3 + *(int *)(iVar1 + 8));
          }
          else {
            iVar2 = 0;
          }
          iVar2 = *(int *)(iVar2 + 4);
          uVar4 = uVar4 + 1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}
