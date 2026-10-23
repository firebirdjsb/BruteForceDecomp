/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 53496780A8897F9F6F73FA3C07AC15293DD315ADD53259329C44B61E212B5EFC
 * Entry: 0x00236fb0, Ghidra index: 7846, label: FUN_00236fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469908;
extern uint32_t *DAT_0046990c;
extern uint32_t *DAT_0046cfbc;
extern uint32_t *DAT_0046cfc0;
extern uint32_t *DAT_0046cfc4;
extern uint32_t *DAT_0046cfc8;
extern uint32_t *DAT_0046cfcc;
extern uint32_t *DAT_0046cfd0;
extern uint32_t *DAT_0046cfd4;
extern uint32_t PTR_DAT_00406df4;
extern uint32_t PTR_LAB_00394160;
extern uint32_t PTR_s_boolean_00406cbc;
extern uint32_t UNK_002370ff;
extern uint32_t UNK_00237298;
extern char s_23_23_IDatabase_004063b4[];
extern char s_23_23_ISchemaLibrary_0040635c[];
extern char s__s__s_00406cb0[];
undefined4 FUN_00236fb0(void)

{
  undefined **ppuVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int **ppiVar5;
  undefined **ppuVar6;
  int iVar7;
  int *piStack_8c;
  int *piStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 *puStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int **ppiStack_6c;
  int *piStack_68;
  int **ppiStack_64;
  undefined4 ****ppppuStack_60;
  undefined **local_4c;
  int *local_48 [11];
  int **local_1c;
  undefined4 ****local_18 [3];
  undefined4 uStack_c;
  uint local_8;
  uint local_4;
  
  ppppuStack_60 = (undefined4 ****)0x236fbc;
  FUN_002564b0();
  ppppuStack_60 = (undefined4 ****)0x236fc1;
  FUN_002540b0();
  ppppuStack_60 = (undefined4 ****)0x236fc6;
  FUN_00255e40();
  ppppuStack_60 = (undefined4 ****)0x236fcb;
  FUN_002559c0();
  ppppuStack_60 = (undefined4 ****)0x236fd0;
  FUN_00254800();
  ppppuStack_60 = (undefined4 ****)0x236fd5;
  FUN_00257800();
  ppppuStack_60 = (undefined4 ****)0x236fda;
  FUN_002574f0();
  ppppuStack_60 = (undefined4 ****)&DAT_0046990c;
  ppiStack_64 = (int **)s_23_23_ISchemaLibrary_0040635c;
  local_48[4] = (int *)0xe2df587e;
  local_48[5] = (int *)0x0;
  local_48[6] = (int *)0x0;
  local_48[3] = (int *)0x10;
  local_48[8] = (int *)0x3951630;
  local_48[9] = (int *)0x0;
  local_48[10] = (int *)0x0;
  local_48[7] = (int *)0x10;
  piStack_68 = (int *)0x23701c;
  FUN_00238080();
  piStack_68 = &DAT_00469908;
  ppiStack_6c = (int **)s_23_23_IDatabase_004063b4;
  piStack_70 = (int *)0x23702f;
  FUN_00238080();
  local_48[2] = (int *)0x0;
  local_48[0] = (int *)0x0;
  local_48[1] = (int *)0x0;
  ppiVar5 = local_48;
  local_4c = &PTR_DAT_00406df4;
  while( true ) {
    ppppuStack_60 = (undefined4 ****)0x28;
    ppiStack_64 = (int **)0x237057;
    piVar3 = (int *)FUN_002ea01d();
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      *piVar3 = (int)&PTR_LAB_00394160;
      piVar3[9] = 1;
    }
    piVar3[5] = 0x80;
    ppiStack_64 = (int **)*local_4c;
    local_4 = 0xf;
    local_8 = 0;
    local_18[0] = (undefined4 ****)((uint)local_18[0] & 0xffffff00);
    if (ppiStack_64 == (int **)0x0) {
      ppppuStack_60 = (undefined4 ****)0xffffffff;
      ppiStack_64 = (int **)0x0;
      piStack_68 = (int *)0x2370d2;
      FUN_0001f5a0();
    }
    else {
      pcVar4 = (char *)ppiStack_64;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      ppppuStack_60 = (undefined4 ****)((int)pcVar4 - (int)((int)ppiStack_64 + 1));
      piStack_68 = (int *)0x2370c4;
      FUN_0001fed0();
    }
    ppppuStack_60 = local_18[0];
    if (local_4 < 0x10) {
      ppppuStack_60 = local_18;
    }
    ppiStack_64 = (int **)0x2370ef;
    (**(code **)(*piVar3 + 0x7c))();
    if (0xf < local_8) break;
    ppiStack_64 = (int **)0x0;
    ppiStack_6c = (int **)DAT_0046990c;
    local_8 = 0xf;
    uStack_c = 0;
    local_1c = (int **)((uint)local_1c & 0xffffff00);
    piStack_70 = (int *)0x23711f;
    piStack_68 = piVar3;
    (**(code **)(*DAT_0046990c + 0x18))();
    piStack_70 = *ppiVar5;
    if (piStack_70 != piVar3) {
      if (piStack_70 != (int *)0x0) {
        piStack_74 = (int *)0x237130;
        (**(code **)(*piStack_70 + 8))();
        *ppiVar5 = (int *)0x0;
      }
      iVar7 = *piVar3;
      *ppiVar5 = piVar3;
      piStack_74 = (int *)0x23713c;
      piStack_70 = piVar3;
      (**(code **)(iVar7 + 4))();
    }
    piStack_74 = (int *)0x237142;
    piStack_70 = piVar3;
    (**(code **)(*piVar3 + 8))();
    local_4c = local_4c + 2;
    ppiVar5 = ppiVar5 + 1;
    if (0x406e0b < (int)local_4c) {
      if (DAT_0046cfbc != (int *)0x0) {
        ppppuStack_60 = (undefined4 ****)DAT_0046cfbc;
        ppiStack_64 = (int **)0x23716a;
        (**(code **)(*DAT_0046cfbc + 8))();
      }
      DAT_0046cfbc = local_48[0];
      if (local_48[0] != (int *)0x0) {
        ppppuStack_60 = (undefined4 ****)local_48[0];
        ppiStack_64 = (int **)0x23717d;
        (**(code **)(*local_48[0] + 4))();
      }
      if (DAT_0046cfc0 != (int *)0x0) {
        ppppuStack_60 = (undefined4 ****)DAT_0046cfc0;
        ppiStack_64 = (int **)0x23718c;
        (**(code **)(*DAT_0046cfc0 + 8))();
      }
      DAT_0046cfc0 = local_48[1];
      if (local_48[1] != (int *)0x0) {
        ppppuStack_60 = (undefined4 ****)local_48[1];
        ppiStack_64 = (int **)0x23719f;
        (**(code **)(*local_48[1] + 4))();
      }
      if (DAT_0046cfc4 != (int *)0x0) {
        ppppuStack_60 = (undefined4 ****)DAT_0046cfc4;
        ppiStack_64 = (int **)0x2371ae;
        (**(code **)(*DAT_0046cfc4 + 8))();
      }
      DAT_0046cfc4 = local_48[2];
      if (local_48[2] != (int *)0x0) {
        ppppuStack_60 = (undefined4 ****)local_48[2];
        ppiStack_64 = (int **)0x2371c1;
        (**(code **)(*local_48[2] + 4))();
      }
      if (PTR_s_boolean_00406cbc != (undefined *)0x0) {
        ppuVar6 = &PTR_s_boolean_00406cbc;
        do {
          cVar2 = *(char *)(ppuVar6 + -1);
          ppppuStack_60 = (undefined4 ****)*ppuVar6;
          ppiStack_64 = (int **)(&PTR_DAT_00406df4)[cVar2 * 2];
          ppiStack_6c = local_48 + 0xb;
          piStack_68 = (int *)s__s__s_00406cb0;
          local_4 = 0xf;
          local_8 = 0;
          local_18[0] = (undefined4 ****)((uint)local_18[0] & 0xffffff00);
          piStack_70 = (int *)0x23720e;
          FUN_00232ad0();
          piStack_70 = (int *)0x28;
          piStack_74 = (int *)0x237215;
          piVar3 = (int *)FUN_002ea01d();
          if (piVar3 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3[1] = 0;
            piVar3[2] = 0;
            piVar3[3] = 0;
            piVar3[4] = 0;
            piVar3[5] = 0;
            piVar3[6] = 0;
            piVar3[7] = 0;
            piVar3[8] = 0;
            *piVar3 = (int)&PTR_LAB_00394160;
            piVar3[9] = 1;
          }
          ppppuStack_60 = (undefined4 ****)ppuVar6[1];
          ppiStack_64 = (int **)0x237252;
          (**(code **)(*piVar3 + 0x74))();
          ppiStack_64 = local_1c;
          if (local_8 < 0x10) {
            ppiStack_64 = local_48 + 0xb;
          }
          piStack_68 = (int *)0x237269;
          (**(code **)(*piVar3 + 0x7c))();
          piStack_68 = local_48[cVar2 + -2];
          piVar3[5] = 2;
          piStack_70 = DAT_0046990c;
          piStack_74 = (int *)0x237281;
          ppiStack_6c = (int **)piVar3;
          (**(code **)(*DAT_0046990c + 0x18))();
          piStack_78 = (int *)0x237287;
          piStack_74 = piVar3;
          (**(code **)(*piVar3 + 8))();
          if (0xf < local_4) {
            ppppuStack_60 = local_18[0];
                    /* WARNING: Subroutine does not return */
            ppiStack_64 = (int **)&UNK_00237298;
            thunk_FUN_00237ec0();
          }
          ppuVar1 = ppuVar6 + 3;
          ppuVar6 = ppuVar6 + 3;
          local_4 = 0xf;
          local_8 = 0;
          local_18[0] = (undefined4 ****)((uint)local_18[0] & 0xffffff00);
        } while (*ppuVar1 != (undefined *)0x0);
      }
      if (DAT_0046cfc8 != (int *)0x0) {
        ppppuStack_60 = (undefined4 ****)DAT_0046cfc8;
        ppiStack_64 = (int **)0x2372ca;
        (**(code **)(*DAT_0046cfc8 + 8))();
        DAT_0046cfc8 = (int *)0x0;
      }
      ppppuStack_60 = (undefined4 ****)0x0;
      ppiStack_64 = (int **)DAT_0046cfc0;
      piStack_68 = (int *)&DAT_0046cfc8;
      ppiStack_6c = (int **)0xed948639;
      piStack_70 = DAT_0046990c;
      piStack_74 = (int *)0x2372ed;
      (**(code **)(*DAT_0046990c + 0x20))();
      if (DAT_0046cfcc != (int *)0x0) {
        piStack_74 = DAT_0046cfcc;
        piStack_78 = (int *)0x2372fc;
        (**(code **)(*DAT_0046cfcc + 8))();
        DAT_0046cfcc = (int *)0x0;
      }
      piStack_74 = (int *)0x0;
      piStack_78 = DAT_0046cfc0;
      puStack_7c = &DAT_0046cfcc;
      uStack_80 = 0xfc0d3f14;
      piStack_84 = DAT_0046990c;
      piStack_88 = (int *)0x23731f;
      (**(code **)(*DAT_0046990c + 0x20))();
      if (DAT_0046cfd4 != (int *)0x0) {
        piStack_88 = DAT_0046cfd4;
        piStack_8c = (int *)0x23732e;
        (**(code **)(*DAT_0046cfd4 + 8))();
        DAT_0046cfd4 = (int *)0x0;
      }
      piStack_88 = (int *)0x0;
      piStack_8c = DAT_0046cfc0;
      (**(code **)(*DAT_0046990c + 0x20))(DAT_0046990c,0xf548750a,&DAT_0046cfd4);
      if (DAT_0046cfd0 != (int *)0x0) {
        (**(code **)(*DAT_0046cfd0 + 8))(DAT_0046cfd0);
        DAT_0046cfd0 = (int *)0x0;
      }
      (**(code **)(*DAT_0046990c + 0x20))(DAT_0046990c,0x11d5fff3,&DAT_0046cfd0,DAT_0046cfc0,0);
      ppiVar5 = &piStack_8c;
      iVar7 = 3;
      do {
        piVar3 = ppiVar5[-1];
        ppiVar5 = ppiVar5 + -1;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *ppiVar5 = (int *)0x0;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return 1;
    }
  }
  ppiStack_64 = local_1c;
                    /* WARNING: Subroutine does not return */
  piStack_68 = (int *)&UNK_002370ff;
  thunk_FUN_00237ec0();
}
