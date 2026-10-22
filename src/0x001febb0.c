/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE5336C19ECDFA7E99B64A5790F9F8CC866BB4C479E7DFFA9C7C2F26FF62802B
 * Entry: 0x001febb0, Ghidra index: 7240, label: FUN_001febb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001febb0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *in_ECX;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 *local_8;
  
  FUN_0020bba0(local_c,in_ECX + 8);
  puVar1 = (undefined4 *)in_ECX[9];
  if (puVar1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar1;
  }
  FUN_000e1ac0(local_10,uVar6,puVar1);
  FUN_0020c180(uVar6,0);
  if (local_8 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)*local_8;
  }
  puVar7 = local_8;
  if (puVar1 != local_8) {
    do {
      if ((((int *)puVar1[3] == (int *)0x0) ||
          (piVar2 = (int *)(**(code **)(*(int *)puVar1[3] + 0xc))(), piVar2 == (int *)0x0)) ||
         (iVar3 = (**(code **)(*piVar2 + 0x20))(), iVar3 != 7)) {
        piVar2 = (int *)puVar1[3];
        if ((piVar2 != (int *)0x0) &&
           (((iVar3 = (**(code **)(*piVar2 + 4))(), iVar3 != 0 ||
             ((((int *)puVar1[3] != (int *)0x0 &&
               (piVar2 = (int *)(**(code **)(*(int *)puVar1[3] + 0xc))(), piVar2 != (int *)0x0)) &&
              ((iVar3 = (**(code **)(*piVar2 + 0x20))(), iVar3 == 7 &&
               (piVar2 = (int *)piVar2[0x31], piVar2 != (int *)0x0)))))) && (piVar2 != (int *)0x0)))
           ) {
          piVar2 = (int *)puVar1[3];
          if ((piVar2 == (int *)0x0) ||
             ((iVar3 = (**(code **)(*piVar2 + 4))(), iVar3 == 0 &&
              ((((int *)puVar1[3] == (int *)0x0 ||
                (piVar2 = (int *)(**(code **)(*(int *)puVar1[3] + 0xc))(), piVar2 == (int *)0x0)) ||
               ((iVar3 = (**(code **)(*piVar2 + 0x20))(), iVar3 != 7 ||
                (piVar2 = (int *)piVar2[0x31], piVar2 == (int *)0x0)))))))) {
            piVar2 = (int *)0x0;
          }
          FUN_001fe790(in_ECX,piVar2);
        }
      }
      else {
        piVar2 = (int *)0x0;
        if ((((int *)puVar1[3] != (int *)0x0) &&
            (piVar4 = (int *)(**(code **)(*(int *)puVar1[3] + 0xc))(), piVar4 != (int *)0x0)) &&
           (iVar3 = (**(code **)(*piVar4 + 0x20))(), iVar3 == 7)) {
          piVar2 = piVar4;
        }
        FUN_001fe8a0(in_ECX,piVar2);
        puVar7 = local_8;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != puVar7);
  }
  iVar3 = (**(code **)(*in_ECX + 0x4c))();
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 8) & 1) != 0)) {
    if ((int *)in_ECX[9] == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)in_ECX[9];
    }
    if (((*(int **)(iVar3 + 0xc) != (int *)0x0) &&
        (iVar5 = (**(code **)(**(int **)(iVar3 + 0xc) + 4))(), iVar5 == 0)) &&
       ((*(int **)(iVar3 + 0xc) != (int *)0x0 &&
        (piVar2 = (int *)(**(code **)(**(int **)(iVar3 + 0xc) + 0xc))(), piVar2 != (int *)0x0)))) {
      (**(code **)(*piVar2 + 0x20))();
    }
    FUN_001fe500();
    puVar7 = local_8;
  }
  if ((char)*(byte *)((int)in_ECX + 0x3d) < '\0') {
    *(byte *)((int)in_ECX + 0x3d) = *(byte *)((int)in_ECX + 0x3d) & 0xbf;
  }
  if (puVar7 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar7;
  }
  FUN_000e1ac0(local_10,uVar6,puVar7);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_8);
}
