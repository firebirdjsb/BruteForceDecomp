/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CFA6275208CB7227F6BE7C63F0F8AA01416A7E7B572F411F98EC8B8F05C9CB8B
 * Entry: 0x000d56c0, Ghidra index: 2660, label: FUN_000d56c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00160da0(void);
extern void FUN_00228ed0(undefined4 param_1,int param_2,int *param_3);
extern void FUN_00178b20(void);

extern void FUN_0001f4f0(int param_1,uint param_2,uint param_3);
extern void FUN_001e8a20(void);
extern void FUN_000784c0(uint param_1);
extern void FUN_000d5680(void);
extern undefined4 FUN_000e2320(undefined4 param_1);

extern undefined4 FUN_000e49d0(void);
extern void FUN_0001fed0(undefined4 *param_1,uint param_2);
extern undefined1 FUN_001659d0(int param_1);
extern void FUN_0001fe90(char *param_1);

extern void FUN_000b89b0(undefined4 param_1);
extern void FUN_000d03a0(void);
extern void FUN_00179110(undefined4 param_1);
extern void FUN_00074450(undefined4 param_1);
extern void FUN_001521c0(void);
extern void FUN_001513a0(void);
extern undefined4 FUN_000e3f50(void);
extern undefined4 FUN_000723f0(undefined4 *param_1);
extern void FUN_0008f6a0(std::uint32_t guest_esi, std::uint32_t guest_word_0);
extern void FUN_000b8af0(void);
extern undefined4 FUN_000e9720(void);

extern void FUN_00237a30(undefined4 param_1);
extern undefined4 FUN_001e4e30(int param_1,undefined4 param_2,undefined4 *param_3);
extern uint FUN_002383b0(void);
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_00225dd0(void);
extern void FUN_001658c0(void);
extern void FUN_000d19d0(undefined4 param_1);
extern void FUN_00061500(void);
extern void FUN_00174130(undefined4 param_1);
extern void FUN_000d44c0(undefined4 param_1);
extern void FUN_000e4670(void);
extern void FUN_002192e0(void);
extern void FUN_000e3ed0(void);
extern void FUN_00149b00(void);
extern void FUN_00140870(undefined4 param_1);
extern void FUN_0008bf70(undefined4 param_1);
extern void FUN_00072190(undefined4 param_1);

extern uint32_t DAT_004000a0;
extern uint32_t DAT_004000b4;
extern uint32_t DAT_004000d8;
extern uint32_t DAT_004000ec;
extern uint32_t DAT_004000f4;
extern uint32_t DAT_00400108;
extern uint32_t DAT_00400240;
extern uint32_t DAT_0040ddd8;
extern uint32_t *DAT_004432f8;
/* 0x000d5e17 loads DWORD [0x004698d4] for an indirect call.
 * ABI_UNVERIFIED: host pointer width and callee prototype remain unknown. */
extern code *DAT_004698d4;
extern uint32_t DAT_004698d8;
extern uint32_t DAT_00469958;
extern uint32_t DAT_004699a4;
extern uint32_t DAT_004699c4;
extern uint32_t DAT_00469ab0;
extern uint32_t DAT_00469ab4;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_00469d90;
extern uint32_t DAT_004a5900;
extern char s_begin_load_0040d624[];
extern char s_mp_common_0040748c[];
/* WARNING: Removing unreachable block (ram,0x000d5f38) */

undefined1 FUN_000d56c0(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined4 uStack_130;
  undefined4 uStack_11c;
  char acStack_118 [7];
  char cStack_111;
  char acStack_110 [7];
  char cStack_109;
  char acStack_108 [252];
  char *pcStack_c;
  
  *(byte *)(param_1 + 0xc50) = *(byte *)(param_1 + 0xc50) | 4;
  FUN_00237a30(s_begin_load_0040d624);
  DAT_00469d90 = 0;
  DAT_004699c4 = 0;
  DAT_004699a4 = 0;
  cVar3 = FUN_001e4e30(DAT_00469958,param_2,param_3,1);
  if (cVar3 == '\0') {
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x26c))();
    return 0;
  }
  piVar8 = DAT_004432f8;
  (**(code **)(*DAT_004432f8 + 0x20))();
  pcVar11 = DAT_004000a0;
  if (DAT_004000b4 < 0x10) {
    pcVar11 = (char *)&DAT_004000a0;
  }
  pcVar13 = acStack_108;
  do {
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar13 = cVar3;
    pcVar13 = pcVar13 + 1;
    pcVar4 = param_2;
  } while (cVar3 != '\0');
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  uVar5 = (int)pcVar4 - (int)param_2;
  pcVar11 = &cStack_109;
  do {
    pcVar13 = pcVar11 + 1;
    pcVar11 = pcVar11 + 1;
  } while (*pcVar13 != '\0');
  for (uVar12 = uVar5 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; pcVar13 = &DAT_0040ddd8, uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *param_2;
    param_2 = param_2 + 1;
    pcVar11 = pcVar11 + 1;
  }
  do {
    pcVar11 = pcVar13;
    pcVar13 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  pcVar13 = &cStack_109;
  do {
    pcVar4 = pcVar13 + 1;
    pcVar13 = pcVar13 + 1;
  } while (*pcVar4 != '\0');
  pcVar4 = &DAT_0040ddd8;
  for (uVar5 = (uint)(pcVar11 + -0x40ddd7) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar5 = (uint)(pcVar11 + -0x40ddd7) & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar13 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar13 = pcVar13 + 1;
  }
  (**(code **)(*DAT_004432f8 + 0x1c))(DAT_004432f8,acStack_108);
  pcVar11 = DAT_004000a0;
  if (DAT_004000b4 < 0x10) {
    pcVar11 = (char *)&DAT_004000a0;
  }
  pcVar13 = acStack_110;
  do {
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar13 = cVar3;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  pcVar11 = DAT_004000f4;
  pcVar13 = DAT_004000f4;
  if (DAT_00400108 < 0x10) {
    pcVar11 = (char *)&DAT_004000f4;
    pcVar13 = pcVar11;
  }
  do {
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  uVar5 = (int)pcVar11 - (int)pcVar13;
  pcVar11 = &cStack_111;
  do {
    pcVar4 = pcVar11 + 1;
    pcVar11 = pcVar11 + 1;
  } while (*pcVar4 != '\0');
  for (uVar12 = uVar5 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar11 = pcVar11 + 1;
  }
  (**(code **)(*DAT_004432f8 + 0x1c))(DAT_004432f8,acStack_110);
  piVar6 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  iVar10 = *piVar6;
  if ((iVar10 == 0x120785ef) || (iVar10 == -0x104e72d8)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  cVar3 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x24))();
  if ((cVar3 != '\0') && (bVar2)) {
    cVar3 = FUN_001e4e30(DAT_00469958,s_mp_common_0040748c,0,1);
    if (cVar3 == '\0') {
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x26c))();
      cVar3 = '\0';
    }
    else {
      cVar3 = (char)((uint)piVar8 >> 0x18);
    }
    pcVar11 = DAT_004000a0;
    if (DAT_004000b4 < 0x10) {
      pcVar11 = (char *)&DAT_004000a0;
    }
    pcVar13 = acStack_118;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar13 = cVar1;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    pcVar11 = DAT_004000d8;
    pcVar13 = DAT_004000d8;
    if (DAT_004000ec < 0x10) {
      pcVar11 = (char *)&DAT_004000d8;
      pcVar13 = pcVar11;
    }
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar11 - (int)pcVar13;
    pcVar11 = (char *)((int)&uStack_11c + 3);
    do {
      pcVar4 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar4 != '\0');
    for (uVar12 = uVar5 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar11 = pcVar11 + 1;
    }
    (**(code **)(*DAT_004432f8 + 0x1c))(DAT_004432f8,acStack_118);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  uVar15 = (undefined1)((uint)piVar8 >> 0x10);
  uVar7 = FUN_002383b0();
  *(undefined4 *)(param_1 + 0xb64) = uVar7;
  piVar8 = (int *)FUN_002ea01d(0x14);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    iVar9 = FUN_00225dd0(piVar8 + 2);
    piVar8[3] = iVar9;
    piVar8[4] = 0;
    piVar8[1] = 0x80;
    *piVar8 = param_1;
  }
  *(int **)(param_1 + 0x1fc) = piVar8;
  piVar8 = (int *)FUN_002ea01d(0x30);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[4] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = 0x100;
    *piVar8 = param_1;
    piVar8[10] = 9;
    piVar8[0xb] = 0;
  }
  *(int **)(param_1 + 0x200) = piVar8;
  iVar9 = FUN_002ea01d(0x228);
  if (iVar9 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_001658c0();
  }
  *(undefined4 *)(param_1 + 0xbd8) = uVar7;
  iVar9 = FUN_002ea01d(0xec);
  if (iVar9 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_0016a250(iVar9,*(undefined4 *)(param_1 + 0xbd8),param_1);
  }
  *(undefined4 *)(param_1 + 0xa44) = uVar7;
  iVar9 = FUN_002ea01d(0x2c);
  if (iVar9 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_000d19d0(param_1);
  }
  *(undefined4 *)(param_1 + 0xa48) = uVar7;
  iVar9 = FUN_002ea01d(0xc);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    uVar7 = FUN_00061500(iVar9);
    *(undefined4 *)(iVar9 + 4) = uVar7;
    *(undefined4 *)(iVar9 + 8) = 0;
  }
  *(int *)(param_1 + 500) = iVar9;
  iVar9 = FUN_002ea01d(0x20);
  if (iVar9 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00174130(param_1);
  }
  *(undefined4 *)(param_1 + 0x20c) = uVar7;
  if (iVar10 == 0x120785ef) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  else {
    iVar10 = FUN_002ea01d(0x28);
    if (iVar10 == 0) {
      *(undefined4 *)(param_1 + 0x1f8) = 0;
    }
    else {
      uVar7 = FUN_000d44c0(param_1);
      *(undefined4 *)(param_1 + 0x1f8) = uVar7;
    }
  }
  iVar10 = FUN_002ea01d(100);
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    *(undefined4 *)(iVar10 + 0x20) = 0;
    *(int *)(iVar10 + 4) = param_1;
    *(undefined4 *)(iVar10 + 0x60) = 0xffffffff;
  }
  *(int *)(param_1 + 0xb74) = iVar10;
  iVar10 = FUN_002ea01d(0xb64);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_000e4670();
  }
  *(undefined4 *)(param_1 + 0xb78) = uVar7;
  iVar10 = FUN_002ea01d(0x14);
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    *(undefined4 *)(iVar10 + 8) = 0xffffffff;
    uVar7 = FUN_002ea01d(0xf0b4);
    *(undefined4 *)(iVar10 + 4) = uVar7;
    *(int *)(iVar10 + 0x10) = param_1;
  }
  *(int *)(param_1 + 0xb7c) = iVar10;
  iVar10 = FUN_002ea01d(0x18);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_002192e0(param_1);
  }
  *(undefined4 *)(param_1 + 0xb80) = uVar7;
  iVar10 = FUN_002ea01d(0x6c);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_000e3ed0();
  }
  *(undefined4 *)(param_1 + 0xbf4) = uVar7;
  iVar10 = FUN_002ea01d(0x68);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00149b00();
  }
  *(undefined4 *)(param_1 + 0xbe0) = uVar7;
  iVar10 = FUN_002ea01d(0x34);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00140870(param_1);
  }
  *(undefined4 *)(param_1 + 0xbe8) = uVar7;
  iVar10 = FUN_002ea01d(0xec);
  if (iVar10 == 0) {
    DAT_00469ab4 = 0;
  }
  else {
    DAT_00469ab4 = FUN_0008bf70(param_1);
  }
  *(undefined4 *)(param_1 + 0xbec) = DAT_00469ab4;
  piVar8 = (int *)FUN_002ea01d(0x10);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8[3] = 0;
    piVar8[2] = 0;
    piVar8[1] = 0;
    *piVar8 = param_1;
  }
  *(int **)(param_1 + 0xbdc) = piVar8;
  iVar10 = FUN_002ea01d(0xd4);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00072190(param_1);
  }
  *(undefined4 *)(param_1 + 0xbf0) = uVar7;
  iVar10 = FUN_002ea01d(0x13fc);
  if (iVar10 == 0) {
    DAT_00469ab0 = 0;
  }
  else {
    DAT_00469ab0 = FUN_000b89b0(param_1);
  }
  *(undefined4 *)(param_1 + 0xbe4) = DAT_00469ab0;
  iVar10 = FUN_002ea01d(0x44);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_000d03a0();
  }
  *(undefined4 *)(param_1 + 0x204) = uVar7;
  iVar10 = FUN_002ea01d(0x50);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00179110(param_1);
  }
  *(undefined4 *)(param_1 + 0x208) = uVar7;
  iVar10 = FUN_002ea01d(0x3c);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00074450(param_1);
  }
  *(undefined4 *)(param_1 + 0xc04) = uVar7;
  iVar10 = FUN_002ea01d(0xf0);
  if (iVar10 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_001521c0();
  }
  *(undefined4 *)(param_1 + 0xc54) = uVar7;
  FUN_001513a0();
  FUN_00058d40(&DAT_004a5900,500);
  *(undefined4 *)(param_1 + 0xa5c) = 0;
  *(undefined4 *)(param_1 + 0xa60) = 0;
  *(undefined4 *)(param_1 + 0xbd4) = 0;
  *(undefined4 *)(param_1 + 0xb84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb94) = 0;
  *(undefined4 *)(param_1 + 0xb98) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xb9c) = 0;
  *(undefined4 *)(param_1 + 0xba0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xba4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xba8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbb0) = 0;
  *(undefined4 *)(param_1 + 0xbb4) = 0xbf800000;
  *(undefined4 *)(param_1 + 3000) = 0;
  FUN_000e3f50();
  FUN_000723f0(*(undefined4 *)(param_1 + 0xbf0));
  iVar10 = *(int *)(param_1 + 0xbe4);
  if (*(int *)(*(int *)(iVar10 + 0x135c) + 0x10) != 0) {
    FUN_0008f6a0(0);
  }
  FUN_000b8af0();
  (**(code **)(**(int **)(iVar10 + 0x135c) + 0x14))();
  FUN_000e9720();
  FUN_000e49d0();
  pcVar11 = pcStack_c;
  do {
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  FUN_0001fed0(pcStack_c,(int)pcVar11 - (int)(pcStack_c + 1));
  FUN_001659d0(*(undefined4 *)(param_1 + 0xbd8));
  if (DAT_004698d4 != (code *)0x0) {
    (*DAT_004698d4)(DAT_004698d8);
  }
  FUN_0001fe90(pcStack_c);
  FUN_0001f4f0(&DAT_00400240,0,0xffffffff);
  FUN_001e8a20();
  FUN_000784c0(0);
  FUN_000784c0(0);
  if (uStack_11c < 0x10) {
    FUN_000d5680();
    cVar3 = FUN_000e2320(param_1 + 0xa64);
    uVar14 = 1;
    if (cVar3 == '\0') {
      uVar14 = uVar15;
    }
    FUN_002383b0();
    iVar10 = FUN_00160da0(0xffffffff,1);
    if (iVar10 != 0) {
      iVar9 = FUN_002ea01d(0x34);
      if (iVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00228ed0(param_1,0x40800000,iVar10);
      }
      *(undefined4 *)(param_1 + 0xa58) = uVar7;
    }
    FUN_00178b20();
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uStack_130);
}
