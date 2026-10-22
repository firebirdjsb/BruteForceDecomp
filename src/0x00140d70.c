/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 74940CDE1CEE9D9CEB9780E3DC449189BA1FB9516057A742843CCB988E8D4735
 * Entry: 0x00140d70, Ghidra index: 4091, label: FUN_00140d70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00140d70(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  int in_EAX;
  int *piVar4;
  int *piVar5;
  
  if ((*(byte *)(*(int *)(in_EAX + 0x18) + 0xc50) & 0x10) != 0) {
    *(undefined4 *)(in_EAX + 4) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
  }
  FUN_00141090(param_1);
  if (*(undefined4 **)(in_EAX + 0x10) == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)**(undefined4 **)(in_EAX + 0x10);
  }
  if (piVar4 != *(int **)(in_EAX + 0x10)) {
    do {
      iVar1 = piVar4[2];
      if ((*(byte *)(*(int *)(in_EAX + 0x18) + 0xc50) & 0x10) == 0) {
        FUN_0013f800(iVar1 + 0x24,iVar1,param_1);
        if (*(int *)(iVar1 + 0x34) == 0) {
          *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) | 1;
          if (*(undefined4 **)(iVar1 + 0x48) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar1 + 0x48))(iVar1);
          }
        }
      }
      else {
        *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) | 1;
      }
      if ((*(byte *)(iVar1 + 0xc) & 1) == 0) {
        piVar5 = (int *)*piVar4;
      }
      else {
        puVar2 = (undefined4 *)piVar4[2];
        FUN_0013f8d0(puVar2 + 9);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        piVar5 = (int *)*piVar4;
        if (piVar4 != *(int **)(in_EAX + 0x10)) {
          *(int **)piVar4[1] = piVar5;
          *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00237ec0(piVar4);
        }
      }
      piVar4 = piVar5;
    } while (piVar5 != *(int **)(in_EAX + 0x10));
  }
  if ((*(int *)(in_EAX + 4) != 0) &&
     (fVar3 = *(float *)(in_EAX + 8) - param_1, *(float *)(in_EAX + 8) = fVar3, fVar3 < 0.0)) {
    FUN_00140cd0(in_EAX,*(int *)(in_EAX + 4),param_1);
    *(undefined4 *)(in_EAX + 4) = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
  }
  return;
}
