/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AB89EC0D0ABD23EF745CC2937C01A409576181D8C556FE60AA96C56D7838024
 * Entry: 0x0011f840, Ghidra index: 3636, label: FUN_0011f840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040cbf0;
void FUN_0011f840(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puStack_f8;
  undefined4 *puStack_f4;
  undefined4 *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [12];
  undefined4 uStack_5c;
  undefined4 uStack_50;
  
  if (*(int *)(param_1 + 0x6a4) != 0) {
    iVar11 = *(int *)(param_1 + 0x2e8);
    cVar8 = (**(code **)(*(int *)(iVar11 + 0x144) + 0x20))();
    if ((((cVar8 != '\0') && (iVar11 = *(int *)(iVar11 + 0x164), iVar11 != 0)) &&
        (*(int *)(*(int *)(iVar11 + 0xc) + 4) == 0x14)) && (*(int *)(param_1 + 0x268) == -1)) {
      FUN_0011f720();
      piVar9 = (int *)FUN_0014d2e0();
      (**(code **)(*piVar9 + 0x40))();
      FUN_00061fb0();
      puStack_f8 = &uStack_ec;
      puVar10 = (undefined4 *)FUN_002334b0();
      uVar1 = puVar10[1];
      uVar2 = puVar10[2];
      uVar3 = puVar10[3];
      uVar12 = puVar10[8];
      uVar4 = puVar10[4];
      uVar5 = puVar10[5];
      uVar6 = puVar10[6];
      uVar7 = puVar10[7];
      *puStack_f8 = *puVar10;
      puStack_f8[1] = uVar1;
      puStack_f8[2] = uVar2;
      puStack_f8[3] = uVar3;
      puStack_f8[8] = uVar12;
      puStack_f8[4] = uVar4;
      puStack_f8[5] = uVar5;
      puStack_f8[6] = uVar6;
      puStack_f8[7] = uVar7;
      puStack_f4 = (undefined4 *)(param_1 + 0x278);
      puStack_f8 = &uStack_ec;
      *puStack_f4 = uStack_ec;
      *(undefined4 *)(param_1 + 0x27c) = uStack_e8;
      *(undefined4 *)(param_1 + 0x280) = uStack_e4;
      *(undefined4 *)(param_1 + 0x284) = uStack_e0;
      *(undefined4 *)(param_1 + 0x298) = uStack_cc;
      *(undefined4 *)(param_1 + 0x288) = uStack_dc;
      *(undefined4 *)(param_1 + 0x28c) = uStack_d8;
      *(undefined4 *)(param_1 + 0x290) = uStack_d4;
      *(undefined4 *)(param_1 + 0x294) = uStack_d0;
      iVar11 = *(int *)(param_1 + 0x2e8);
      cVar8 = (**(code **)(*(int *)(iVar11 + 0x178) + 0x20))();
      if ((cVar8 == '\0') || (*(int *)(iVar11 + 0x198) == 0)) {
        if ((*(int *)(param_1 + 0x6ac) != 0) &&
           (((*(byte *)(*(int *)(param_1 + 0x1fc) + 0x251) & 0x40) == 0 &&
            (*(int *)(param_1 + 0x214) == 0)))) {
          piVar9 = (int *)FUN_0014d2e0();
          puStack_f4 = (undefined4 *)0xea5e02f2;
          cVar8 = FUN_0015a0d0(&puStack_f0,&puStack_f8);
          if (cVar8 != '\0') {
            uVar12 = (**(code **)(*piVar9 + 0x34))(puStack_f8);
            *(undefined4 *)(param_1 + 0x3ac) = uVar12;
            FUN_002333b0(puStack_f0 + 5);
            uVar12 = FUN_0003d6c0(auStack_98,auStack_c8,puStack_f0 + 2);
            FUN_0003d730(param_1 + 0x3b0,uVar12);
            puStack_f8 = *(undefined4 **)(param_1 + 0x3e0);
            if (*(int *)(param_1 + 0x5b0) == 2) {
              puStack_f8 = *(undefined4 **)(param_1 + 0x3e4);
            }
            iVar11 = FUN_00236e00();
            if (iVar11 != 0) {
              FUN_002333b0(iVar11 + 0x14);
              FUN_0003d6c0(auStack_98,auStack_c8,iVar11 + 8);
              uVar12 = FUN_00061eb0();
              FUN_002338c0(param_1 + 0x3b0,param_1 + 0x3b0,uVar12);
              uVar12 = FUN_0003d690();
              FUN_0003d730(param_1 + 0x34c,uVar12);
              FUN_0011f720();
            }
          }
        }
      }
      else if ((*(int *)(param_1 + 0x6a8) != 0) && (*(int *)(param_1 + 0x26c) == -1)) {
        FUN_0011f720();
        piVar9 = (int *)FUN_0014d310();
        (**(code **)(*piVar9 + 0x40))();
        FUN_00061fb0();
        puStack_f4 = &uStack_ec;
        puVar10 = (undefined4 *)FUN_002334b0();
        uVar1 = puVar10[1];
        uVar2 = puVar10[2];
        uVar3 = puVar10[3];
        uVar12 = puVar10[8];
        uVar4 = puVar10[4];
        uVar5 = puVar10[5];
        uVar6 = puVar10[6];
        uVar7 = puVar10[7];
        *puStack_f4 = *puVar10;
        puStack_f4[1] = uVar1;
        puStack_f4[2] = uVar2;
        puStack_f4[3] = uVar3;
        puStack_f4[8] = uVar12;
        puStack_f4[4] = uVar4;
        puStack_f4[5] = uVar5;
        puStack_f4[6] = uVar6;
        puStack_f4[7] = uVar7;
        puStack_f4 = (undefined4 *)(param_1 + 0x29c);
        puStack_f8 = &uStack_ec;
        *puStack_f4 = uStack_ec;
        *(undefined4 *)(param_1 + 0x2a0) = uStack_e8;
        *(undefined4 *)(param_1 + 0x2a4) = uStack_e4;
        *(undefined4 *)(param_1 + 0x2a8) = uStack_e0;
        *(undefined4 *)(param_1 + 700) = uStack_cc;
        *(undefined4 *)(param_1 + 0x2ac) = uStack_dc;
        *(undefined4 *)(param_1 + 0x2b0) = uStack_d8;
        *(undefined4 *)(param_1 + 0x2b4) = uStack_d4;
        *(undefined4 *)(param_1 + 0x2b8) = uStack_d0;
      }
      if (((*(int *)(param_1 + 0x408) != 0) && (*(int *)(param_1 + 0x408) != -1)) &&
         (*(int *)(param_1 + 0x2c0) == -1)) {
        iVar11 = *(int *)(*(int *)(param_1 + 0x408) + 0x10);
        if (iVar11 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(iVar11 + 100);
        }
        FUN_0012b210(&DAT_0040cbf0,uVar12,*(int *)(param_1 + 0x408),0,0);
        puStack_f0 = (undefined4 *)(param_1 + 0x2c4);
        uStack_5c = 0xe;
        uStack_50 = 0x3f000000;
        iVar11 = *(int *)(param_1 + 0x408);
        puStack_f4 = (undefined4 *)(iVar11 + 0x14);
        uVar1 = *(undefined4 *)(iVar11 + 0x18);
        uVar2 = *(undefined4 *)(iVar11 + 0x1c);
        uVar3 = *(undefined4 *)(iVar11 + 0x20);
        uVar12 = *(undefined4 *)(iVar11 + 0x34);
        uVar4 = *(undefined4 *)(iVar11 + 0x24);
        uVar5 = *(undefined4 *)(iVar11 + 0x28);
        uVar6 = *(undefined4 *)(iVar11 + 0x2c);
        uVar7 = *(undefined4 *)(iVar11 + 0x30);
        *puStack_f0 = *puStack_f4;
        *(undefined4 *)(param_1 + 0x2c8) = uVar1;
        *(undefined4 *)(param_1 + 0x2cc) = uVar2;
        *(undefined4 *)(param_1 + 0x2d0) = uVar3;
        *(undefined4 *)(param_1 + 0x2e4) = uVar12;
        *(undefined4 *)(param_1 + 0x2d4) = uVar4;
        *(undefined4 *)(param_1 + 0x2d8) = uVar5;
        *(undefined4 *)(param_1 + 0x2dc) = uVar6;
        *(undefined4 *)(param_1 + 0x2e0) = uVar7;
        uVar12 = FUN_0023d8e0(*(undefined4 *)(param_1 + 500),auStack_68,0x3e800000);
        *(undefined4 *)(param_1 + 0x2c0) = uVar12;
      }
    }
  }
  return;
}
