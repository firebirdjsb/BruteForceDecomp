/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CCFF804E72A587E2CB72434B5CBEE96BE00C134860F79B257EDEBCA93E95CC8
 * Entry: 0x00152a50, Ghidra index: 4422, label: FUN_00152a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699bc;
undefined4 FUN_00152a50(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  undefined4 in_EAX;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_ECX;
  int in_EDX;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char local_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  DAT_004699bc = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x3c) = in_EAX;
  *(undefined4 *)(param_1 + 0x40) = in_ECX;
  FUN_00152400(param_1);
  iVar1 = *(int *)(in_EDX + 0x204);
  local_28 = *(undefined4 *)(param_1 + 0x94);
  local_2c = *(undefined4 *)(param_1 + 0x90);
  local_30 = *(undefined4 *)(param_1 + 0x8c);
  iVar2 = *(int *)(iVar1 + 0x3c);
  *(int *)(iVar1 + 0x3c) = iVar2 + 1;
  FUN_000d1680(&local_30);
  do {
    if (local_1c == 0) {
      if (local_24 != '\0') {
        local_1c = 0;
        for (puVar3 = *(undefined4 **)(iVar1 + 0x2c); puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)*puVar3) {
          piVar4 = *(int **)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
          if ((((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x26) < '\0')) &&
              (iVar7 = piVar4[6], piVar4[6] = iVar2, iVar7 != iVar2)) &&
             (((param_2[0x44] & 1 << ((byte)*(undefined4 *)(piVar4[3] + 4) & 0x1f)) == 0 &&
              (cVar5 = (**(code **)(*param_2 + 4))(piVar4), cVar5 != '\0')))) {
            (**(code **)(*piVar4 + 0x10c))(param_1);
          }
        }
      }
      return DAT_004699bc;
    }
    for (puVar3 = *(undefined4 **)(local_1c + 0x1c); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      piVar4 = *(int **)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
      if (((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x26) < '\0')) &&
         ((iVar7 = piVar4[6], piVar4[6] = iVar2, iVar7 != iVar2 &&
          (((param_2[0x44] & 1 << ((byte)*(undefined4 *)(piVar4[3] + 4) & 0x1f)) == 0 &&
           (cVar5 = (**(code **)(*param_2 + 4))(piVar4), cVar5 != '\0')))))) {
        (**(code **)(*piVar4 + 0x10c))(param_1);
      }
    }
    iVar7 = *(int *)(local_1c + 8);
    piVar4 = (int *)(local_1c + 8);
    if (iVar7 == 0) {
      FUN_001f35b0(0x3f800000);
      iVar7 = *piVar4;
      if (iVar7 != 0) goto LAB_00152bdc;
    }
    else {
LAB_00152bdc:
      if (*(int *)(iVar7 + 4) == 2) {
        *(int *)(param_1 + 0x9c) = iVar7;
        if (*(int *)(iVar7 + 0x3c) == 0) {
          uVar6 = FUN_002bbeb0();
          *(undefined4 *)(iVar7 + 0x3c) = uVar6;
        }
        if ((*(char *)(iVar7 + 0x70) < '\b') &&
           (*(int *)(*(int *)(iVar7 + 0x3c) + 0x60) < *(int *)(*(int *)(iVar7 + 0x14) + 0x120))) {
          FUN_002bbf70();
        }
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar7 + 0x3c);
        FUN_00151ac0();
        iVar7 = *(int *)(*(int *)(iVar7 + 0x7c) + 4);
        FUN_00151a00(*(int *)(iVar7 + 0x20) + iVar7);
      }
    }
    iVar7 = iStack_18;
    if ((iStack_18 < iStack_c) ||
       (iStack_14 = iStack_14 + 1, iVar7 = iStack_10, iStack_14 < iStack_8)) {
      iStack_18 = iVar7 + 1;
      local_1c = (**(int **)(iStack_20 + 0x20) * iStack_14 + iVar7) * 0x40 +
                 *(int *)(iStack_20 + 0x18);
    }
    else {
      local_1c = 0;
      iStack_14 = iStack_8;
    }
  } while( true );
}
