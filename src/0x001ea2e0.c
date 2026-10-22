/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B63F90ED3AEA2863A327E3C453DE343165F397F9AF7973AF6E71597A0B0670A1
 * Entry: 0x001ea2e0, Ghidra index: 6872, label: FUN_001ea2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc934;
extern uint32_t DAT_003bc938;
extern uint32_t DAT_003bc93c;
extern uint32_t DAT_003f7dc0;
extern uint32_t DAT_004000a0;
extern uint32_t DAT_004000b4;
extern uint32_t DAT_004000f4;
extern uint32_t DAT_00400108;
extern uint32_t DAT_00400320;
extern uint32_t DAT_00406e34;
extern uint32_t DAT_00407230;
extern uint32_t *DAT_004432f8;
extern uint32_t *DAT_00443304;
extern uint32_t DAT_004698bc;
extern uint32_t *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t *DAT_0046990c;
extern uint32_t DAT_00469924;
extern uint32_t DAT_0046993c;
extern uint32_t DAT_00469940;
extern uint32_t DAT_00469944;
extern uint32_t DAT_00469948;
extern uint32_t DAT_0046994c;
extern uint32_t DAT_00469950;
extern uint32_t DAT_00469954;
extern uint32_t DAT_00469958;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469960;
extern uint32_t DAT_0046998c;
extern uint32_t DAT_00469b0c;
extern uint32_t *DAT_00469b54;
extern uint32_t _DAT_00414d90;
extern uint32_t _DAT_00414d94;
extern uint32_t _DAT_00414d98;
extern uint32_t _DAT_00414d9c;
extern uint32_t _DAT_00469964;
extern char s_23_23_IProfileParser2_00406148[];
extern char s_global_gameflags_0040dca0[];
extern char s_post_schema_00407224[];
extern char s_pre_schema_00407238[];
extern char s_startup_0040721c[];
/* WARNING: Removing unreachable block (ram,0x001ea563) */
/* WARNING: Removing unreachable block (ram,0x001ea5a9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_001ea2e0(undefined4 param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 ****ppppuVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 unaff_EBX;
  undefined4 uStack_d64;
  undefined1 *local_d60;
  undefined *local_d5c;
  char *pcStack_d58;
  undefined4 uStack_d54;
  undefined4 uStack_d50;
  undefined4 ***apppuStack_d4c [4];
  undefined4 uStack_d3c;
  uint uStack_d38;
  uint uStack_d30;
  undefined4 uStack_d20;
  uint uStack_d1c;
  char cStack_d11;
  char local_d10 [264];
  undefined4 local_c08 [769];
  
  DAT_003bc934 = XAPILIB__XGetGameRegion();
  DAT_003bc938 = XAPILIB__XGetLanguage();
  DAT_003bc93c = XAPILIB__XGetVideoStandard();
  DAT_00469960 = XAPILIB__XGetVideoFlags();
  _DAT_00469964 = XAPILIB__XGetAudioFlags();
  puVar9 = local_c08;
  for (iVar5 = 0x300; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_d60 = (undefined1 *)((uint)local_d60 & 0xffffff00);
  iVar5 = XAPILIB__XGetLaunchInfo(&local_d5c,local_c08);
  if ((iVar5 == 0) && (local_d5c == (undefined *)0x4)) {
    local_d60 = (undefined1 *)CONCAT31(local_d60._1_3_,1);
  }
  FUN_001e8160();
  uStack_d64._3_1_ = FUN_00239b80();
  if (uStack_d64._3_1_ != '\0') {
    FUN_00238bb0(0x6000);
    D3D8LTCG__D3DDevice_SetShaderConstantMode_0__LTCG_eax1();
    if (DAT_004698d4 != (code *)0x0) {
      (*DAT_004698d4)(DAT_004698d8);
    }
    pcVar6 = DAT_004000a0;
    if (DAT_004000b4 < 0x10) {
      pcVar6 = (char *)&DAT_004000a0;
    }
    pcVar10 = local_d10;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar10 = cVar2;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    pcVar6 = DAT_004000f4;
    pcVar10 = DAT_004000f4;
    if (DAT_00400108 < 0x10) {
      pcVar6 = (char *)&DAT_004000f4;
      pcVar10 = pcVar6;
    }
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar3 = (int)pcVar6 - (int)pcVar10;
    pcVar6 = &cStack_d11;
    do {
      pcVar1 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    for (uVar7 = uVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar6 = pcVar6 + 1;
    }
    (**(code **)(*DAT_004432f8 + 0x1c))(DAT_004432f8,local_d10);
    DAT_00469958 = FUN_002ea01d(0x34);
    FUN_001e48e0(DAT_00469958,unaff_EBX);
    FUN_00236fb0();
    FUN_0024f010();
    FUN_00278c60();
    FUN_0027bed0();
    _DAT_00414d90 = 0x41200000;
    _DAT_00414d94 = 0x40a00000;
    _DAT_00414d98 = 0x40800000;
    _DAT_00414d9c = 0x40c00000;
    if (DAT_004698d4 != (code *)0x0) {
      (*DAT_004698d4)(DAT_004698d8);
    }
    FUN_00237a30(s_pre_schema_00407238);
    pcVar6 = &DAT_00406e34;
    uStack_d64 = &local_d60;
    local_d60 = &DAT_00406e34;
    local_d5c = &DAT_00407230;
    pcStack_d58 = s_global_gameflags_0040dca0;
    uStack_d54 = 0;
    do {
      uStack_d38 = 0xf;
      uStack_d3c = 0;
      apppuStack_d4c[0] = (undefined4 ***)((uint)apppuStack_d4c[0] & 0xffffff00);
      uStack_d1c = 0xf;
      uStack_d20 = 0;
      uStack_d30 = uStack_d30 & 0xffffff00;
      pcVar10 = pcVar6;
      do {
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_0001fed0(pcVar6,(int)pcVar10 - (int)(pcVar6 + 1));
      FUN_0001f4f0(&DAT_00400320,0,0xffffffff);
      FUN_001e8a20();
      FUN_000784c0(0);
      FUN_000784c0(0);
      if (0xf < uStack_d1c) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(uStack_d30);
      }
      uStack_d30 = uStack_d30 & 0xffffff00;
      uStack_d1c = 0xf;
      uStack_d20 = 0;
      ppppuVar8 = (undefined4 ****)apppuStack_d4c[0];
      if (uStack_d38 < 0x10) {
        ppppuVar8 = apppuStack_d4c;
      }
      (**(code **)(*DAT_0046990c + 0xc))(DAT_0046990c,ppppuVar8,&stack0xfffff298);
      if (DAT_004698d4 != (code *)0x0) {
        (*DAT_004698d4)(DAT_004698d8);
      }
      if (0xf < uStack_d38) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(apppuStack_d4c[0]);
      }
      pcVar6 = uStack_d64[1];
      uStack_d64 = uStack_d64 + 1;
      uStack_d38 = 0xf;
      uStack_d3c = 0;
      apppuStack_d4c[0] = (undefined4 ***)((uint)apppuStack_d4c[0] & 0xffffff00);
    } while (pcVar6 != (char *)0x0);
    FUN_00237a30(s_post_schema_00407224);
    uStack_d64._3_1_ = (**(code **)(*DAT_00469b54 + 0x4c))();
    if (DAT_004698d4 != (code *)0x0) {
      (*DAT_004698d4)(DAT_004698d8);
    }
    if (uStack_d64._3_1_ != '\0') {
      FUN_001e9150();
      if (DAT_004698d4 != (code *)0x0) {
        (*DAT_004698d4)(DAT_004698d8);
      }
      FUN_0004f2e0();
      uStack_d54 = 0xff950d1d;
      uStack_d50 = 0;
      apppuStack_d4c[0] = (undefined4 ***)0x0;
      pcStack_d58 = (char *)0x10;
      FUN_00238080(s_23_23_IProfileParser2_00406148,&DAT_0046993c);
      FUN_001eb220();
      FUN_0029f810();
      FUN_00067b90();
      (**(code **)(*DAT_00443304 + 0xc))(DAT_00443304,0x112,0,0,0);
      FUN_001ea890();
      if (DAT_0046998c == 0) {
        iVar5 = FUN_002ea01d(0x1b8);
        if (iVar5 == 0) {
          DAT_0046998c = 0;
        }
        else {
          DAT_0046998c = FUN_0017e7c0();
        }
      }
      DAT_00469940 = DAT_0046998c;
      DAT_00469944 = FUN_001785a0();
      iVar5 = FUN_002ea01d(0x2e8);
      if (iVar5 == 0) {
        DAT_00469948 = 0;
      }
      else {
        DAT_00469948 = FUN_001e52d0();
      }
      FUN_001e5340();
      pcVar6 = (char *)FUN_002ea01d(0xc);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)0x0;
      }
      else {
        *pcVar6 = uStack_d64._3_1_;
        iVar5 = FUN_0025ae60(pcVar6);
        *(int *)(pcVar6 + 4) = iVar5;
        *(undefined1 *)(iVar5 + 0x15) = 1;
        *(int *)(*(int *)(pcVar6 + 4) + 4) = *(int *)(pcVar6 + 4);
        *(undefined4 *)*(undefined4 *)(pcVar6 + 4) = *(undefined4 *)(pcVar6 + 4);
        *(int *)(*(int *)(pcVar6 + 4) + 8) = *(int *)(pcVar6 + 4);
        pcVar6[8] = '\0';
        pcVar6[9] = '\0';
        pcVar6[10] = '\0';
        pcVar6[0xb] = '\0';
      }
      DAT_0046994c = pcVar6;
      FUN_00146930(pcVar6);
      if (DAT_004698d4 != (code *)0x0) {
        (*DAT_004698d4)(DAT_004698d8);
      }
      DAT_00469954 = FUN_002ea01d(0x70);
      if (DAT_00469954 == 0) {
        DAT_00469954 = 0;
      }
      else {
        puVar9 = (undefined4 *)(DAT_00469954 + 8);
        iVar5 = 7;
        do {
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9 = puVar9 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_001e1550(DAT_00469954);
      iVar5 = FUN_002ea01d(0x2c4);
      if (iVar5 == 0) {
        DAT_00469950 = 0;
      }
      else {
        DAT_00469950 = FUN_000cd580();
      }
      FUN_000cd5d0();
      iVar5 = FUN_002ea01d(0x5778);
      if (iVar5 == 0) {
        DAT_0046995c = 0;
      }
      else {
        DAT_0046995c = FUN_001ebf60();
      }
      FUN_001ec170();
    }
    piVar4 = &DAT_003f7dc0;
    do {
      if (param_2 == *piVar4) {
        DAT_00469b0c = piVar4;
      }
      piVar4 = piVar4 + 5;
    } while ((int)piVar4 < 0x3f7dfc);
    FUN_000a49f0();
    FUN_000a2870();
  }
  DAT_00469924 = 1;
  DAT_004698bc = 7;
  FUN_00237a30(s_startup_0040721c);
  return uStack_d64._3_1_;
}
