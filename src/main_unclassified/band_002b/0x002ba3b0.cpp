/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 064A735E6B41DE530F306B28DF8B363AC54BDB237D526716B31872D07BED289E
 * Entry: 0x002ba3b0, Ghidra index: 9883, label: FUN_002ba3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002ba3b0(byte *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  float10 fVar14;
  undefined8 local_d8;
  undefined1 local_d0 [48];
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [20];
  float fStack_7c;
  
  psVar1 = (short *)(*(int *)(*(int *)(param_1 + 0xc) + 0xac) + 0x10);
  *psVar1 = *psVar1 + 1;
  uVar11 = (uint)*(ushort *)(param_1 + 0x52);
  do {
    uVar11 = uVar11 - 1;
    if ((int)uVar11 < 0) {
      piVar8 = *(int **)(*(int *)(param_1 + 0xc) + 0xac);
      iVar13 = piVar8[1];
      *(short *)(piVar8 + 4) = (short)piVar8[4] + -1;
      if ((iVar13 != 0) && (iVar13 != *piVar8)) {
        (*(code *)PTR_FUN_003bc654)(iVar13);
        return;
      }
      uVar11 = *piVar8 + 0x23U & 0xffffffe0;
      piVar8[2] = uVar11;
      uVar10 = (uint)*(ushort *)((int)piVar8 + 0x12);
      if (*(ushort *)((int)piVar8 + 0x12) == 0) {
        uVar10 = 0x7fe0;
      }
      piVar8[3] = uVar11 + uVar10;
      piVar8[1] = *piVar8;
      return;
    }
    puVar9 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x54) + uVar11 * 4) + 0x24);
    while (puVar9 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar9;
      iVar13 = (int)*(short *)(puVar9 + 3) + (int)puVar9;
      *(undefined1 *)(*(int *)(*(short *)(puVar9 + 3) + 0x70 + (int)puVar9) + 0x50) = 1;
      pbVar12 = *(byte **)(*(int *)(iVar13 + 0x10) + 0x90);
      if (pbVar12 == param_1) {
        pbVar12 = *(byte **)(*(int *)(iVar13 + 0x24) + 0x90);
      }
      if ((*pbVar12 & 0xc) != 0) {
        FUN_002c4520();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(iVar13);
      }
      uVar10 = (uint)*(ushort *)(pbVar12 + 0x52);
      while (uVar10 = uVar10 - 1, -1 < (int)uVar10) {
        iVar4 = *(int *)(*(int *)(pbVar12 + 0x54) + uVar10 * 4);
        if (*(char *)(iVar4 + 0x70) == '\b') {
          puVar7 = *(uint **)(iVar4 + 0x94);
          if (((byte)*puVar7 & 0x30) != 0x10) {
            iVar4 = *(int *)(iVar4 + 0x14);
            if (*(ushort *)(iVar4 + 0xe8) <= *(ushort *)(iVar4 + 0xea)) {
              FUN_002ccf80();
            }
            *(uint **)(*(int *)(iVar4 + 0xec) + (uint)*(ushort *)(iVar4 + 0xea) * 4) = puVar7;
            *(short *)(iVar4 + 0xea) = *(short *)(iVar4 + 0xea) + 1;
            *puVar7 = *puVar7 & 0xffffffdf | 0x10;
          }
        }
        else {
          iVar4 = *(int *)(iVar4 + 0x90);
          puVar2 = (undefined8 *)(*(int *)(iVar4 + 0xc) + 0x108);
          uVar5 = *(undefined4 *)puVar2;
          uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x10c);
          local_d8 = *puVar2;
          *(undefined4 *)(iVar4 + 0x178) = uVar5;
          *(undefined4 *)(iVar4 + 0x17c) = uVar6;
          *(undefined4 *)(iVar4 + 0x180) = uVar5;
          *(undefined4 *)(iVar4 + 0x184) = uVar6;
        }
      }
      FUN_002d29f0(iVar13);
      FUN_002ba100();
      iVar4 = *(int *)(iVar13 + 0x10);
      uVar5 = *(undefined4 *)(iVar13 + 0x24);
      FUN_002d4e50(local_90);
      local_98 = *(undefined4 *)(iVar13 + 0x18);
      local_94 = *(undefined4 *)(iVar13 + 0x2c);
      piVar8 = *(int **)(*(int *)(iVar4 + 0x14) + 0xa4);
      local_a0 = iVar4;
      local_9c = uVar5;
      fVar14 = (float10)(**(code **)(*piVar8 + 8))(local_d0);
      fStack_7c = (float)fVar14;
      fVar14 = (float10)(**(code **)(*piVar8 + 4))((int)&local_d8 + 4);
      *(float *)(iVar13 + 0x44) = (float)fVar14;
      FUN_002c5ce0();
      puVar9 = puVar3;
    }
  } while( true );
}
