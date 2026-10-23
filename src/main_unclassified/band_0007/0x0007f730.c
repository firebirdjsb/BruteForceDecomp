/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92000FB42BCD26E2B324344638D238738AF6F89C24FD2C04C7F725AA9CE23E70
 * Entry: 0x0007f730, Ghidra index: 1505, label: FUN_0007f730
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b5c;
extern uint32_t _DAT_0046999c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f730(int *param_1)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uStack_20;
  undefined4 auStack_1c [4];
  undefined4 uStack_c;
  
  piVar2 = param_1;
  iVar7 = param_1[0x1b4];
  while( true ) {
    if (iVar7 == 0) {
      return;
    }
    if ((int *)piVar2[0x1b3] == (int *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = *(int **)piVar2[0x1b3];
    }
    *(byte *)(piVar2 + 0x16f) =
         *(byte *)(piVar2 + 0x16f) ^ (~*(byte *)((int)param_1 + 8) ^ *(byte *)(piVar2 + 0x16f)) & 4;
    if ((*(byte *)((int)param_1 + 8) & 8) == 0) {
      if ((*(byte *)((int)param_1 + 8) & 2) != 0) {
        uStack_20 = 0;
        cVar3 = (**(code **)(*piVar2 + 0x1c0))(&uStack_20);
        if (cVar3 != '\0') {
          FUN_00080790(piVar2,&uStack_20);
        }
      }
    }
    else {
      iVar7 = piVar2[piVar2[0x172] + 0x173];
      if (*(int *)(iVar7 + 0x14) != 0) {
        FUN_00077820(iVar7 + 0x10,param_1);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*(undefined4 *)(iVar7 + 0x14));
      }
      *(undefined4 *)(iVar7 + 0x14) = 0;
      *(undefined4 *)(iVar7 + 0x18) = 0;
      *(undefined4 *)(iVar7 + 0x1c) = 0;
      piVar2[0x163] = 0;
    }
    bVar1 = *(byte *)((int)param_1 + 8);
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 1) == 0) {
        if ((bVar1 & 8) == 0) {
          (**(code **)(*piVar2 + 0x60))();
          iVar7 = (**(code **)(*piVar2 + 0x6c))();
          if ((iVar7 == 0) || (iVar7 = FUN_00234c90(), iVar7 == 0)) {
            (**(code **)(*piVar2 + 0xb4))();
          }
        }
        FUN_0007f960();
        (**(code **)(*piVar2 + 0x3c))();
      }
      else {
        FUN_0007f670();
      }
    }
    else if (piVar2[0x170] != 0) {
      FUN_000d6b30(piVar2[0x170]);
      iVar7 = piVar2[0x170];
      if (iVar7 != 0) {
        FUN_000d4bf0();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar7);
      }
      piVar2[0x170] = 0;
      _DAT_0046999c = 0;
      DAT_00469b5c = 0;
    }
    if ((*(int *)((int)param_1 + 0xc) != 0) || (*(int *)((int)param_1 + 0x10) != 0)) {
      piVar4 = (int *)(**(code **)(*piVar2 + 0x78))();
      (**(code **)(*piVar4 + 0x1c))();
      uStack_c = *(undefined4 *)((int)param_1 + 0x14);
      puVar5 = auStack_1c;
      for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      auStack_1c[0] = *(undefined4 *)((int)param_1 + 0xc);
      auStack_1c[3] = *(undefined4 *)((int)param_1 + 0x10);
      auStack_1c[1] = *(undefined4 *)((int)param_1 + 0x18);
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x78))();
      (**(code **)*puVar5)(auStack_1c);
    }
    *(byte *)(piVar2 + 0x16f) = *(byte *)(piVar2 + 0x16f) & 0x3f;
    *(byte *)((int)piVar2 + 0x5bd) = *(byte *)((int)piVar2 + 0x5bd) & 0xfe;
    piVar4 = (int *)piVar2[0x1b3];
    if (piVar4 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*piVar4;
    }
    if (piVar6 != piVar4) break;
    iVar7 = piVar2[0x1b4];
  }
  *(int *)piVar6[1] = *piVar6;
  *(int *)(*piVar6 + 4) = piVar6[1];
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(piVar6);
}
