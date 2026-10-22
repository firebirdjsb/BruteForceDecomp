/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 196414119005AF8017E9D44BC8C47FAF8DA0CE3711758B7DA4DEB19F8DE97BF7
 * Entry: 0x000d06f0, Ghidra index: 2577, label: FUN_000d06f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000d06f0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *unaff_EDI;
  int local_4;
  
  if (unaff_EDI[2] == 0) {
    local_4 = 0;
    puVar6 = (undefined4 *)*unaff_EDI;
    if ((undefined4 *)*unaff_EDI != (undefined4 *)0x0) {
      do {
        if (puVar6[3] == 0) {
          puVar1 = (undefined4 *)puVar6[1];
          puVar7 = (undefined4 *)*puVar6;
          piVar2 = puVar6 + 1;
          if (puVar1 == (undefined4 *)0x0) {
            *unaff_EDI = (int)puVar7;
          }
          else {
            *puVar1 = puVar7;
          }
          if (puVar7 == (undefined4 *)0x0) {
            unaff_EDI[1] = (int)puVar1;
          }
          else {
            puVar7[1] = puVar1;
          }
          *puVar6 = 0;
          *piVar2 = 0;
          *puVar6 = 0;
          if ((undefined4 *)unaff_EDI[3] == (undefined4 *)0x0) {
            *piVar2 = 0;
            local_4 = local_4 + 1;
            unaff_EDI[2] = (int)puVar6;
            unaff_EDI[3] = (int)puVar6;
          }
          else {
            *(undefined4 *)unaff_EDI[3] = puVar6;
            *piVar2 = unaff_EDI[3];
            local_4 = local_4 + 1;
            unaff_EDI[3] = (int)puVar6;
          }
        }
        else {
          puVar7 = (undefined4 *)*puVar6;
        }
        puVar6 = puVar7;
      } while (puVar7 != (undefined4 *)0x0);
      if (local_4 != 0) goto LAB_000d07ab;
    }
    FUN_000d05d0();
  }
LAB_000d07ab:
  piVar2 = (int *)unaff_EDI[2];
  if (piVar2[3] != param_1) {
    FUN_0008f6a0(param_1);
  }
  piVar3 = (int *)unaff_EDI[2];
  piVar4 = (int *)piVar3[1];
  iVar5 = *piVar3;
  if (piVar4 == (int *)0x0) {
    unaff_EDI[2] = iVar5;
  }
  else {
    *piVar4 = iVar5;
  }
  if (iVar5 == 0) {
    unaff_EDI[3] = (int)piVar4;
  }
  else {
    *(int **)(iVar5 + 4) = piVar4;
  }
  piVar3[1] = 0;
  *piVar3 = 0;
  piVar2[1] = 0;
  *piVar2 = *unaff_EDI;
  if (*unaff_EDI != 0) {
    *(int **)(*unaff_EDI + 4) = piVar2;
  }
  *unaff_EDI = (int)piVar2;
  if (unaff_EDI[1] == 0) {
    unaff_EDI[1] = (int)piVar2;
  }
  return (int)piVar2 - unaff_EDI[5] >> 4;
}
