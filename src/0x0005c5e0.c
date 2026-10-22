/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D57385348B8DC0B82D251543783E2E1A18993EACED091E75F7DA6EF2BAEF799
 * Entry: 0x0005c5e0, Ghidra index: 954, label: FUN_0005c5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0005c5e0(undefined4 *param_1,float param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *in_EAX;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  float *pfVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *local_10;
  float local_c;
  float local_4;
  
  puVar4 = param_1;
  uVar9 = *in_EAX;
  puVar2 = (undefined4 *)param_1[0xe];
  cVar1 = *(char *)((int)puVar2[1] + 0x1d);
  puVar5 = puVar2;
  puVar10 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((uint)puVar10[3] < uVar9) {
      puVar6 = (undefined4 *)puVar10[2];
      puVar10 = puVar5;
    }
    else {
      puVar6 = (undefined4 *)*puVar10;
    }
    puVar5 = puVar10;
    puVar10 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x1d);
  }
  if ((puVar5 == puVar2) || (uVar9 < (uint)puVar5[3])) {
    local_10 = puVar2;
    ppuVar7 = &local_10;
  }
  else {
    ppuVar7 = &param_1;
  }
  puVar2 = *ppuVar7;
  if ((uVar9 == DAT_0046d064) || (uVar9 == 0xc07b477)) {
    if (param_2 <= 0.0) {
      if (param_2 < 0.0) {
        param_1[0xc] = param_2 + (float)param_1[0xc];
      }
    }
    else {
      param_1[0xb] = param_2 + (float)param_1[0xb];
    }
  }
  else if (puVar2 == (undefined4 *)param_1[0xe]) {
    local_4 = (float)CONCAT31(local_4._1_3_,(undefined1)param_3);
    local_c = param_2;
    param_1 = puVar5;
    param_3 = uVar9;
    pfVar8 = (float *)FUN_0005d2b0();
    *pfVar8 = local_c;
    pfVar8[1] = 1.4013e-45;
    pfVar8[2] = local_4;
    puVar5 = param_1;
  }
  else {
    puVar2[5] = puVar2[5] + 1;
    puVar2[4] = param_2 + (float)puVar2[4];
  }
  param_1 = puVar5;
  uVar9 = 0;
  if (puVar4[1] != 0) {
    if (puVar4[1] == 0) goto LAB_0005c713;
    do {
      iVar3 = *(int *)(puVar4[2] + uVar9 * 4);
      if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) && (*(int *)(iVar3 + 0x14) != 0)) &&
         (*(int *)(*(int *)(*(int *)(iVar3 + 0x14) + 0x30) + 0x58) != 0)) {
        FUN_000b1bb0(1,1);
        FUN_000b1d70(param_2,1);
        FUN_000b2610();
      }
LAB_0005c713:
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)puVar4[1]);
  }
  return;
}
