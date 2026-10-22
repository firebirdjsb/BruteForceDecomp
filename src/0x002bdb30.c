/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6EE3B0D2F168BF4F304693E8C56FCDFF405209896E80988C08F90379E670F16
 * Entry: 0x002bdb30, Ghidra index: 9958, label: FUN_002bdb30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bdb30(char *param_1)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  FUN_002bd570();
  uVar4 = (uint)*(ushort *)(in_EAX + 0x162);
  do {
    uVar4 = uVar4 - 1;
    if ((int)uVar4 < 0) {
      if (*(short *)(param_1 + 0xe) != 0) {
        return;
      }
      iVar2 = *(int *)(*(int *)(in_EAX + 0xc) + 8);
      piVar6 = (int *)(iVar2 + 0x18);
      if ('\a' < *param_1) {
        piVar6 = (int *)(iVar2 + 0x1a8);
      }
      iVar2 = *(int *)(param_1 + 4);
      iVar3 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        *piVar6 = iVar3;
      }
      else {
        *(int *)(iVar2 + 8) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = iVar2;
      }
      FUN_002bdc50();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(param_1);
    }
    iVar2 = *(ushort *)(param_1 + 0x22) - 1;
    if (-1 < iVar2) {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar2 * 4);
      do {
        if (*(int *)*puVar5 == *(int *)(*(int *)(in_EAX + 0x164) + uVar4 * 4)) break;
        iVar2 = iVar2 + -1;
        puVar5 = puVar5 + -1;
      } while (-1 < iVar2);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x24) + iVar2 * 4);
    iVar3 = *(ushort *)(iVar2 + 6) - 1;
    if (-1 < iVar3) {
      piVar6 = (int *)(*(int *)(iVar2 + 8) + iVar3 * 4);
      do {
        if (*piVar6 == in_EAX) break;
        iVar3 = iVar3 + -1;
        piVar6 = piVar6 + -1;
      } while (-1 < iVar3);
    }
    uVar1 = *(ushort *)(iVar2 + 6) - 1;
    *(ushort *)(iVar2 + 6) = uVar1;
    if (iVar3 < (int)(uint)uVar1) {
      do {
        *(undefined4 *)(*(int *)(iVar2 + 8) + iVar3 * 4) =
             *(undefined4 *)(*(int *)(iVar2 + 8) + 4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(ushort *)(iVar2 + 6));
    }
    if (*(short *)(iVar2 + 6) == 0) {
      FUN_002bdcb0(param_1);
    }
  } while( true );
}
