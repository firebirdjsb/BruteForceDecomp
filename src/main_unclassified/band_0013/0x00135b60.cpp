/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8289B0D143A5A01BD6882895292C482BF3F8BE9F99D342D6E2E78F0B0ABF782
 * Entry: 0x00135b60, Ghidra index: 3882, label: FUN_00135b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00135be4) */

void FUN_00135b60(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 0x59c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(iVar1 + 8);
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 != 0) {
        local_18 = 0;
        uVar3 = 1;
        do {
          if ((iVar2 != param_1) && ((*(byte *)(iVar2 + 0x70) & 1) == 0)) {
            FUN_0008f6a0(iVar2);
            FUN_0005eab0();
          }
          if (*(uint *)(iVar1 + 4) <= uVar3) {
            return;
          }
          local_18 = local_18 + 4;
          if (uVar3 < *(uint *)(iVar1 + 4)) {
            iVar2 = *(int *)(local_18 + *(int *)(iVar1 + 8));
          }
          else {
            iVar2 = 0;
          }
          iVar2 = *(int *)(iVar2 + 4);
          uVar3 = uVar3 + 1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}
