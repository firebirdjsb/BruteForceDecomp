/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C484FB89D652D042612FFD80F182CD05560B705A40C053840F906490746A9E0
 * Entry: 0x00159430, Ghidra index: 4503, label: FUN_00159430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00159430(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  int *piVar8;
  int *local_4;
  
  if (*(char *)((int)in_ECX + 0x26) < '\0') {
    if ((undefined4 *)in_ECX[0x5e] != (undefined4 *)in_ECX[0x5f]) {
      puVar1 = *(undefined4 **)in_ECX[0x5e];
      puVar2 = (undefined4 *)puVar1[1];
      local_4 = (int *)puVar2[0x1f];
      iVar3 = *(int *)(in_ECX[2] + 0xa44);
      for (piVar8 = *(int **)(iVar3 + 0x2c); piVar8 != *(int **)(iVar3 + 0x30); piVar8 = piVar8 + 1)
      {
        iVar7 = *piVar8;
        if (*(undefined4 **)(iVar7 + 8) == puVar2) {
          if (iVar7 != 0) {
            piVar8 = *(int **)(iVar3 + 0x2c);
            goto joined_r0x0015949c;
          }
          break;
        }
      }
LAB_001594d4:
      (**(code **)*puVar2)(1);
      if (in_ECX != (int *)0x0) {
        (**(code **)(*in_ECX + 0x24))(1);
      }
      *puVar1 = 0xffffffff;
      puVar1[1] = 0;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar1);
    }
    if (in_ECX[0x5e] != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(in_ECX[0x5e]);
    }
    in_ECX[0x5e] = 0;
    in_ECX[0x5f] = 0;
    in_ECX[0x60] = 0;
    *(uint *)(in_ECX[0x1b] + 0x44) = *(uint *)(in_ECX[0x1b] + 0x44) & 0xffffff7f;
    local_4 = in_ECX;
    FUN_000e0860(&local_4);
  }
  piVar8 = (int *)in_ECX[0x5a];
  if (piVar8 != (int *)in_ECX[0x5b]) {
    do {
      iVar3 = *(int *)(in_ECX[2] + 0xa44);
      piVar5 = *(int **)(iVar3 + 0x2c);
      puVar1 = (undefined4 *)*piVar8;
      piVar8 = piVar8 + 1;
      if (piVar5 != *(int **)(iVar3 + 0x30)) {
LAB_00159590:
        if ((undefined4 *)*piVar5 != puVar1) goto code_r0x00159594;
        piVar4 = *(int **)(iVar3 + 0x30);
        piVar6 = piVar5 + 1;
        if (piVar6 != piVar4) {
          iVar7 = (int)piVar5 - (int)piVar6;
          do {
            *(int *)((int)piVar6 + iVar7) = *piVar6;
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar4);
        }
        *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + -4;
      }
LAB_001595c4:
      local_4 = piVar8;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    } while (piVar8 != (int *)in_ECX[0x5b]);
  }
  if (in_ECX[0x5a] == 0) {
    in_ECX[0x5a] = 0;
    in_ECX[0x5b] = 0;
    in_ECX[0x5c] = 0;
    *(byte *)((int)in_ECX + 0x26) = *(byte *)((int)in_ECX + 0x26) & 0x7f;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x5a]);
joined_r0x0015949c:
  if (piVar8 == *(int **)(iVar3 + 0x30)) goto LAB_001594d4;
  if (*piVar8 == iVar7) {
    piVar6 = *(int **)(iVar3 + 0x30);
    piVar5 = piVar8 + 1;
    if (piVar5 != piVar6) {
      iVar7 = (int)piVar8 - (int)piVar5;
      do {
        *(int *)((int)piVar5 + iVar7) = *piVar5;
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar6);
    }
    *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + -4;
    goto LAB_001594d4;
  }
  piVar8 = piVar8 + 1;
  goto joined_r0x0015949c;
code_r0x00159594:
  piVar5 = piVar5 + 1;
  if (piVar5 == *(int **)(iVar3 + 0x30)) goto LAB_001595c4;
  goto LAB_00159590;
}
