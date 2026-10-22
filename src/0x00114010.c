/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3BA8C9941F2E392F726338EC9BBDCB75D071D1AF6386F2AF32A4A757FC030C34
 * Entry: 0x00114010, Ghidra index: 3567, label: FUN_00114010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039dbd0;
void FUN_00114010(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_34 [4];
  undefined4 local_24 [9];
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(iVar1 + 0x188);
  if (*(int *)(iVar1 + 0x188) != *(int *)(iVar1 + 0x18c)) {
    do {
      iVar7 = iVar6 + 0x14;
      if (((*(int *)(iVar6 + 0xc) != 0) && (iVar2 = FUN_00235d50(iVar6), iVar2 != 0)) &&
         (iVar2 != -1)) {
        iVar3 = FUN_00114d00(iVar2,0x3f800000);
        if (iVar3 != 0) {
          FUN_0016a760(*(undefined4 *)(*(int *)(param_1 + 8) + 0xa44));
          if ((*(uint *)(iVar3 + 0x70) & 0x300) == 0) {
            FUN_002c00d0(*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x10));
            *(uint *)(iVar3 + 0x70) = *(uint *)(iVar3 + 0x70) & 0xfffffdff | 0x100;
          }
          piVar4 = (int *)FUN_002ea01d(0x10);
          piVar5 = (int *)0x0;
          if (piVar4 != (int *)0x0) {
            piVar4[1] = 0;
            piVar4[2] = 0;
            *piVar4 = (int)&PTR_LAB_0039dbd0;
            piVar4[3] = -1;
            piVar5 = piVar4;
          }
          local_24[7] = 0;
          puVar9 = local_24;
          for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          piVar5[3] = iVar2;
          piVar5[2] = iVar3;
          local_24[4] = 0x49742400;
          local_24[5] = 0x49742400;
          local_24[6] = 0x49742400;
          local_24[8] = 0x49742400;
          local_24[0] = 0x3f4ccccd;
          local_24[1] = 0x3f800000;
          local_24[2] = 0x3f4ccccd;
          local_24[3] = 0x3f800000;
          iVar3 = FUN_002ea01d(0x60);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_002b9980();
          }
          piVar5[1] = iVar3;
          (**(code **)(*piVar5 + 4))();
          FUN_001611d0();
          FUN_001611d0();
          if (*(int *)(iVar6 + 8) != 0x3f800000) {
            local_34[1] = 0;
            local_34[0] = iVar2;
            piVar5 = (int *)FUN_00135410(local_34);
            *(undefined4 *)(*piVar5 + 0x10) = *(undefined4 *)(iVar6 + 8);
          }
          if (*(char *)(iVar6 + 0x10) != '\0') {
            FUN_001611d0();
          }
        }
      }
      iVar6 = iVar7;
    } while (iVar7 != *(int *)(iVar1 + 0x18c));
  }
  return;
}
