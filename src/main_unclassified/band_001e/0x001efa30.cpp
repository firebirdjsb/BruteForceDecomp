/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBAA2AAF3A267758446BF6C2B2A2E65F231C7B440D63FE5A143CBF4F8CB8760D
 * Entry: 0x001efa30, Ghidra index: 6970, label: FUN_001efa30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Byte-returning 0x002E5880 callee reads implicit guest ECX.
 * Host C++ declaration matches existing draft only; ABI_UNVERIFIED. */
extern undefined1 FUN_002e5880(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc760;
extern uint32_t DAT_003bc764;
extern uint32_t DAT_004698d0;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
extern uint32_t PTR_FUN_003968c4;
extern uint32_t PTR_FUN_00396a38;
extern uint32_t PTR_FUN_00396b80;
extern char s_Parameters_004071bc[];
int FUN_001efa30(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int in_ECX;
  int extraout_ECX;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int local_f8;
  undefined **appuStack_f4 [6];
  int iStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined **appuStack_d0 [6];
  int iStack_b8;
  undefined4 auStack_b4 [44];
  
  cVar1 = FUN_002e5880();
  if ((cVar1 == '\0') || (iVar3 = *(int *)(param_1 + 0x18), iVar3 == 0)) {
    return 0;
  }
  pcVar9 = s_Parameters_004071bc;
  FUN_002e5920(s_Parameters_004071bc);
  iVar2 = FUN_002e4a30(pcVar9);
  if ((*(byte *)(iVar2 + 0x21c) & 8) == 0) {
    iVar3 = FUN_002e5700(param_1,0x80000015);
    return iVar3;
  }
  iVar2 = *(int *)(iVar2 + 0x204);
  iVar6 = 1;
  if (*(char *)(in_ECX + 0x5648) != '\0') {
    iVar6 = 2;
  }
  if (*(char *)(in_ECX + 0x5660) != '\0') {
    iVar6 = iVar6 + 1;
  }
  if (*(char *)(in_ECX + 0x5678) != '\0') {
    iVar6 = iVar6 + 1;
  }
  if (iVar6 == (&DAT_003bc760)[iVar2 * 2]) {
    iVar3 = FUN_002e5700(param_1,0x8000000b);
    return iVar3;
  }
  uVar4 = (uint)(*(char *)(in_ECX + 0x6f4) != '\0');
  if (*(char *)(in_ECX + 0xc8c) != '\0') {
    uVar4 = uVar4 + 1;
  }
  if (*(char *)(in_ECX + 0x1224) != '\0') {
    uVar4 = uVar4 + 1;
  }
  if (*(char *)(in_ECX + 0x17bc) != '\0') {
    uVar4 = uVar4 + 1;
  }
  if (*(char *)(in_ECX + 0x1d54) != '\0') {
    uVar4 = uVar4 + 1;
  }
  if (*(char *)(in_ECX + 0x22ec) != '\0') {
    uVar4 = uVar4 + 1;
  }
  if (*(char *)(in_ECX + 0x2884) != '\0') {
    uVar4 = uVar4 + 1;
  }
  if (uVar4 == (&DAT_003bc764)[iVar2 * 2]) {
    iVar3 = FUN_002e5700(param_1,0x8000000b);
    return iVar3;
  }
  uVar8 = FUN_001ede40(in_ECX);
  *(int *)(iVar3 + 0x2c) = (int)uVar8;
  *(undefined1 *)(in_ECX + 0x5630 + (int)uVar8 * 0x18) = 1;
  *(undefined4 *)(in_ECX + 0x5638 + *(int *)(iVar3 + 0x2c) * 0x18) = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)(in_ECX + 0x5633 + *(int *)(iVar3 + 0x2c) * 0x18) = 0;
  *(undefined1 *)(in_ECX + 0x5631 + *(int *)(iVar3 + 0x2c) * 0x18) = 0;
  *(undefined1 *)(in_ECX + 0x5632 + *(int *)(iVar3 + 0x2c) * 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x5634 + *(int *)(iVar3 + 0x2c) * 0x18) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x563c + *(int *)(iVar3 + 0x2c) * 0x18) = 0;
  *(undefined4 *)(in_ECX + (*(int *)(iVar3 + 0x2c) + 0x398) * 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x5644 + *(int *)(iVar3 + 0x2c) * 0x18) = 0;
  if ((int)((ulonglong)uVar8 >> 0x20) == (&DAT_003bc760)[iVar2 * 2] + -1) {
    *(uint *)(extraout_ECX + 0x21c) = *(uint *)(extraout_ECX + 0x21c) & 0xfffffff7;
  }
  uVar10 = 1;
  FUN_002e5920(1);
  FUN_002e4880(uVar10);
  local_f8 = 1;
  do {
    pbVar5 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(local_f8);
    if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 1) != 0)) {
      FUN_002e8c40();
      appuStack_d0[0] = &PTR_FUN_003968c4;
      puVar7 = auStack_b4;
      for (iVar3 = 0x2a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        puVar7 = puVar7 + 1;
      }
      iStack_b8 = local_f8;
      FUN_002e7f50(*(undefined4 *)(param_1 + 0xc),appuStack_d0,1,1);
      FUN_002e8b80();
    }
    local_f8 = local_f8 + 1;
  } while (local_f8 < 9);
  iVar3 = DAT_004698d0 + 0x20;
  iVar2 = 1;
  puVar7 = (undefined4 *)(in_ECX + 0x66c);
  do {
    if (*(char *)(puVar7 + -0x144) != '\0') {
      FUN_002e8c40();
      uStack_d8 = *puVar7;
      appuStack_f4[0] = &PTR_FUN_00396b80;
      iStack_dc = iVar3;
      iStack_d4 = iVar2;
      FUN_002e7f50(*(undefined4 *)(param_1 + 0xc),appuStack_f4,1,1);
      FUN_002e8b80();
    }
    iVar2 = iVar2 + 1;
    puVar7 = puVar7 + 0x166;
  } while (iVar2 < 9);
  iVar3 = FUN_002e5700(param_1,0);
  if ((-1 < iVar3) &&
     (uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c), *(int *)(DAT_0046995c + 0x1c) != 0)
     ) {
    FUN_002e8c40();
    appuStack_f4[0] = &PTR_FUN_00396a38;
    iStack_dc = 0x93c5b7b;
    iStack_d4 = 9;
    uStack_d8 = uVar10;
    FUN_002e7f50(0xfffffffd,appuStack_f4,1,1);
    FUN_002e8b80();
  }
  return iVar3;
}
