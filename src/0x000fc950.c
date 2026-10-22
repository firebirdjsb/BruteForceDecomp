/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27206A165AE502AC87AFCD51DB466703998EF8426CEB733C609D4BB657DE54D7
 * Entry: 0x000fc950, Ghidra index: 3154, label: FUN_000fc950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000fc950(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int unaff_retaddr;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int *piStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined4 *apuStack_44 [2];
  float afStack_3c [2];
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x88))(param_3);
  if (iVar4 != 0) {
    iStack_7c = iVar4;
    if (param_1 != 0) {
      if (*(int *)(iVar4 + 8) != 0) {
        FUN_000fbd90();
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        FUN_000fbdd0();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        FUN_000fbe20();
      }
      if (*(char *)(iVar4 + 0x3c) != -0x80) {
        *(byte *)(param_1 + 0x28) =
             *(byte *)(param_1 + 0x28) ^
             (*(char *)(iVar4 + 0x3cU & (*(char *)(iVar4 + 0x3cU) == -0x80) - 1) << 4 ^
             *(byte *)(param_1 + 0x28)) & 0x10;
      }
    }
    puStack_48 = *(undefined4 **)(iVar4 + 0x2c);
    if (puStack_48 != (undefined4 *)0x0) {
      piStack_80 = (int *)0x0;
      piVar5 = (int *)FUN_000a7770(puStack_48);
      if (piVar5 != (int *)0x0) {
        piStack_80 = piVar5;
        (**(code **)(*piVar5 + 4))(piVar5);
        fStack_88 = *(float *)(param_1 + 0x10);
        fStack_8c = *(float *)(param_1 + 0xc);
        fStack_94 = *(float *)(param_1 + 0x14);
        uStack_58 = *(undefined4 *)(param_1 + 0x18);
        iVar6 = (**(code **)(*piVar5 + 0x14))(piVar5);
        fStack_94 = (float)iVar6;
        iVar6 = (**(code **)(*piVar5 + 0x18))(piVar5);
        fVar3 = (float)iVar6;
        uStack_50 = 0xa8199fe;
        uStack_4c = 0xf7596625;
        apuStack_44[0] = &uStack_50;
        apuStack_44[1] = &uStack_4c;
        fStack_94 = (float)CONCAT22(fStack_94._2_2_,1);
        iVar6 = 0;
        fStack_90 = (fStack_90 - fStack_8c) * 0.5 + fStack_88;
        afStack_3c[0] = fStack_84 - fVar3;
        afStack_3c[1] = fStack_84 + fStack_54;
        do {
          uStack_78 = *puStack_48;
          uStack_70 = 0;
          if (*(int *)(iVar4 + 0x14) == 0) {
            uStack_74 = 0xff;
            uStack_73 = 0xff;
            uStack_72 = 0xff;
            uStack_71 = 0xff;
          }
          else {
            puVar1 = *(undefined1 **)(iVar4 + 0x14);
            uStack_74 = *puVar1;
            uStack_73 = puVar1[1];
            uStack_72 = puVar1[2];
            uStack_71 = puVar1[3];
          }
          uStack_5b = *(undefined1 *)((int)&fStack_94 + iVar6);
          uStack_5c = 0;
          uStack_6c = 0;
          uStack_68 = 0;
          fStack_64 = fStack_8c;
          uStack_58 = 0x10e241aa;
          uStack_20 = 0;
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_c = 0;
          uStack_8 = 0;
          fStack_60 = fVar3;
          FUN_000fda50();
          fStack_2c = afStack_3c[iVar6];
          piVar5 = apuStack_44[iVar6];
          iStack_34 = *piVar5;
          fStack_30 = fStack_90;
          fStack_28 = fStack_8c;
          fStack_24 = fVar3;
          FUN_000fd550(unaff_retaddr,&iStack_34);
          pfVar7 = *(float **)(unaff_retaddr + 0x74);
          if (pfVar7 != *(float **)(unaff_retaddr + 0x78)) {
            do {
              fVar2 = *pfVar7;
              if (*(int *)((int)fVar2 + 0x24) == *piVar5) {
                if (fVar2 != 0.0) {
                  fStack_84 = 1.4013e-45;
                  fStack_88 = fVar2;
                  FUN_00064490();
                }
                break;
              }
              pfVar7 = pfVar7 + 1;
            } while (pfVar7 != *(float **)(unaff_retaddr + 0x78));
          }
          FUN_0006a4c0();
          iVar6 = iVar6 + 1;
          iVar4 = iStack_7c;
        } while (iVar6 < 2);
      }
      if (*(float **)(iVar4 + 0x18) != (float *)0x0) {
        fStack_94 = **(float **)(iVar4 + 0x18);
        *(float *)(param_1 + 0xb4) = fStack_94;
      }
      if (piStack_80 != (int *)0x0) {
        (**(code **)(*piStack_80 + 8))(piStack_80);
      }
    }
  }
  return;
}
