/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E608366ECF9BDCD61C0A056CA9F8D896D79AF55A487BBE015CD1D7F9C864F46
 * Entry: 0x00080490, Ghidra index: 1512, label: FUN_00080490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_00080490(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  int *piVar8;
  undefined4 unaff_retaddr;
  byte local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [6];
  byte bStack_c;
  int *piStack_8;
  
  local_30[0] = local_30[0] & 0xe0 | 0x10;
  local_2c = 0;
  local_28 = 0;
  local_24[0] = 0;
  local_24[1] = 0;
  (**(code **)(*in_ECX + 0x20))(local_30);
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  (**(code **)(*piVar3 + 0x1c))();
  iVar4 = (**(code **)(*in_ECX + 0xe8))(unaff_retaddr);
  FUN_001e7640(0);
  local_24[3] = 0;
  puVar5 = local_24;
  for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  bStack_c = bStack_c | 4;
  local_24[1] = 0;
  local_24[0] = 0x1d6f7c4e;
  puVar5 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  iVar7 = (**(code **)*puVar5)(local_24);
  if (iVar7 != 0) {
    for (piVar3 = *(int **)(iVar7 + 0x74);
        (piVar8 = (int *)0x0, piVar3 != *(int **)(iVar7 + 0x78) &&
        (piVar8 = (int *)*piVar3, piVar8[9] != 0xb571fc8)); piVar3 = piVar3 + 1) {
    }
    piStack_8 = (int *)0x0;
    if ((piVar8 != (int *)0x0) && (iVar6 = (**(code **)(*piVar8 + 4))(), iVar6 == 10)) {
      piStack_8 = piVar8;
    }
    for (piVar3 = *(int **)(iVar7 + 0x74);
        (piVar8 = (int *)0x0, piVar3 != *(int **)(iVar7 + 0x78) &&
        (piVar8 = (int *)*piVar3, piVar8[9] != 0x1ad19da6)); piVar3 = piVar3 + 1) {
    }
    piVar3 = (int *)0x0;
    if ((piVar8 != (int *)0x0) && (iVar7 = (**(code **)(*piVar8 + 4))(), iVar7 == 1)) {
      piVar3 = piVar8;
    }
    if ((piStack_8 != (int *)0x0) && (iVar4 != 0)) {
      FUN_00102650();
      iVar7 = *(int *)(iVar4 + 0x34);
      iVar4 = *(int *)(iVar4 + 0x30);
      iVar6 = 0;
      if (iVar4 != iVar7) {
        piVar8 = (int *)(iVar4 + 0x20);
        do {
          piVar2 = piStack_8;
          FUN_001025b0(piStack_8);
          if (piVar3 != (int *)0x0) {
            if ((*piVar8 == 0) || (piVar8[1] - *piVar8 >> 5 == 0)) {
              FUN_0010a850();
            }
            else {
              if (iVar6 == 0) {
                iVar6 = FUN_002ea01d(0x14);
                if (iVar6 == 0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = FUN_0010b060();
                }
                *(int **)(iVar6 + 4) = piVar3;
                iVar1 = piVar2[0x1e];
                if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00237ec0(iVar1);
                }
                piVar2[0x1e] = iVar6;
              }
              FUN_0010b330();
              FUN_0010b1e0();
            }
          }
          iVar4 = iVar4 + 0x2c;
          piVar8 = piVar8 + 0xb;
        } while (iVar4 != iVar7);
      }
    }
    FUN_00100ca0();
    FUN_00101210();
    return 1;
  }
  return 0;
}
