/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BD3251148D3D77B145CD68A5314F34630E6E523977C303947A49483330B5C0C
 * Entry: 0x000f6f60, Ghidra index: 3094, label: FUN_000f6f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00401524;
extern uint32_t DAT_00401530;
extern uint32_t DAT_00469b58;
void FUN_000f6f60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x210))();
  iVar2 = DAT_00401530;
  iVar4 = DAT_00401524;
  uStack_10 = 0x2eb4e98;
  uStack_c = 0x19e21f22;
  uStack_8 = 0x10e52fb4;
  uStack_4 = 0xf481ba17;
  iVar7 = 0;
  do {
    uVar5 = 0;
    iVar6 = 0;
    while( true ) {
      if ((*(int *)(iVar3 + 0x14) == 0) ||
         ((uint)(*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14) >> 4) <= uVar5)) goto LAB_000f7043;
      if (*(int *)(*(int *)(iVar3 + 0x14) + iVar6) == iVar4) break;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x10;
    }
    iVar6 = FUN_00077da0(3);
    if (iVar6 != 0) {
      iVar1 = *(int *)(iVar6 + 0xc);
      if (iVar1 == 1) {
        iVar6 = (int)*(float *)(iVar6 + 4);
LAB_000f703c:
        cVar8 = iVar6 != 0;
      }
      else {
        if (iVar1 == 2) {
          iVar6 = *(int *)(iVar6 + 4);
          goto LAB_000f703c;
        }
        if (iVar1 != 3) goto LAB_000f7043;
        cVar8 = *(char *)(iVar6 + 4);
      }
      if (cVar8 != '\0') {
        uVar5 = 0;
        iVar7 = 0;
        goto LAB_000f7058;
      }
    }
LAB_000f7043:
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  goto LAB_000f70bc;
LAB_000f7058:
  if ((*(int *)(iVar3 + 0x14) == 0) ||
     ((uint)(*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14) >> 4) <= uVar5)) goto LAB_000f70b3;
  if (*(int *)(*(int *)(iVar3 + 0x14) + iVar7) != iVar4) {
    uVar5 = uVar5 + 1;
    iVar7 = iVar7 + 0x10;
    goto LAB_000f7058;
  }
  iVar4 = FUN_00077da0(3);
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + 0xc);
    if (iVar3 == 1) {
      uVar5 = (uint)*(float *)(iVar4 + 4);
      goto LAB_000f70b5;
    }
    if (iVar3 == 2) {
      uVar5 = *(uint *)(iVar4 + 4);
      goto LAB_000f70b5;
    }
    if (iVar3 == 3) {
      uVar5 = (uint)*(byte *)(iVar4 + 4);
      goto LAB_000f70b5;
    }
  }
LAB_000f70b3:
  uVar5 = 0;
LAB_000f70b5:
  *(uint *)(param_1 + 0x10) = uVar5;
LAB_000f70bc:
  if (*(int *)(param_1 + 0x10) == 0) {
    uStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    puStack_14 = (undefined4 *)0x0;
    iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xec))(&uStack_10,&uStack_20);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x10) = *puStack_14;
    }
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
    uStack_20 = 0;
    uStack_1c = 0;
    if (puStack_14 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puStack_14);
    }
  }
  return;
}
