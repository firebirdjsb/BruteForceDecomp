/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0D83DEF944197ADC5E12B243D8DF787CE21F993ED51E907FEB200DF0F75AC20
 * Entry: 0x000dddd0, Ghidra index: 2710, label: FUN_000dddd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_002ebea0(void);
extern void FUN_002b8d60(void);
extern void FUN_002b3590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern void FUN_002b8de0(void);

extern uint32_t PTR_FUN_0039efc8;
undefined1
FUN_000dddd0(int param_1,undefined3 param_2,float param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int *param_9,
            undefined4 param_10,undefined4 param_11,int param_12,int param_13,int param_14,
            undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,
            undefined4 param_19,float param_20,undefined4 param_21)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  char cVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int *extraout_ECX;
  int iVar11;
  int *extraout_EDX;
  undefined1 uStack0000000b;
  undefined4 in_stack_00000064;
  undefined **in_stack_00000074;
  int in_stack_000000c8;
  
  FUN_002ebea0();
  if (extraout_ECX != (int *)0x0) {
    *extraout_ECX = 0;
  }
  param_13 = extraout_EDX[1];
  param_14 = extraout_EDX[2];
  param_3 = (float)extraout_EDX[1] - param_3;
  param_12 = *extraout_EDX;
  param_15 = 0;
  param_16 = 0;
  param_17 = 0xbf800000;
  param_18 = 0;
  param_19 = 0;
  param_21 = 0;
  param_20 = param_3;
  FUN_002b7970(&stack0x00000074,&param_12);
  in_stack_00000074 = &PTR_FUN_0039efc8;
  FUN_002b8d60();
  puVar8 = (undefined4 *)&stack0x000000e4;
  iVar11 = 0x100;
  do {
    *puVar8 = 0;
    puVar8 = puVar8 + 8;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  iVar11 = extraout_EDX[2];
  iVar3 = *extraout_EDX;
  iVar4 = *(int *)(param_1 + 0xa40);
  cVar7 = FUN_001f4740(iVar4,&stack0xfffffffc,&stack0x00000000,iVar3,iVar11);
  if (cVar7 == '\0') {
    iVar11 = 0;
  }
  else {
    iVar11 = (**(int **)(iVar4 + 0x20) * iVar3 + iVar11) * 0x40 + *(int *)(iVar4 + 0x18);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x204) + 0x3c);
  *(int *)(*(int *)(param_1 + 0x204) + 0x3c) = iVar3 + 1;
  if (iVar11 != 0) {
    for (puVar8 = *(undefined4 **)(iVar11 + 0x1c); puVar8 != (undefined4 *)0x0;
        puVar8 = (undefined4 *)*puVar8) {
      piVar10 = *(int **)((uint)*(ushort *)(puVar8 + 2) * 0x10 + 0xc +
                         *(int *)(*(int *)(param_1 + 0x204) + 0x14));
      if ((((piVar10 != (int *)0x0) && (piVar10 != param_4)) &&
          (iVar11 = piVar10[6], piVar10[6] = iVar3, iVar11 != iVar3)) &&
         ((1 << ((byte)*(undefined4 *)(piVar10[3] + 4) & 0x1f) & 0x4000004U) != 0)) {
        (**(code **)(*piVar10 + 0x108))(&stack0x00000074);
      }
    }
  }
  for (puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x204) + 0x2c); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    piVar10 = *(int **)((uint)*(ushort *)(puVar8 + 2) * 0x10 + 0xc +
                       *(int *)(*(int *)(param_1 + 0x204) + 0x14));
    if (((piVar10 != (int *)0x0) && (piVar10 != param_4)) &&
       ((iVar11 = piVar10[6], piVar10[6] = iVar3, iVar11 != iVar3 &&
        ((1 << ((byte)*(undefined4 *)(piVar10[3] + 4) & 0x1f) & 0x4000004U) != 0)))) {
      (**(code **)(*piVar10 + 0x108))(&stack0x00000074);
    }
  }
  if (*(int *)(param_1 + 0xa40) != 0) {
    FUN_001f34a0(*(int *)(param_1 + 0xa40),&stack0x00000074);
  }
  if ((*(int *)(in_stack_000000c8 + 4) == 0) ||
     (piVar10 = *(int **)(*(int *)(in_stack_000000c8 + 4) + 0xc), piVar10 == (int *)0x0)) {
LAB_000de238:
    uStack0000000b = 0;
  }
  else {
    piVar5 = *(int **)(piVar10[4] + 0x9c);
    iVar11 = *piVar5;
    if (iVar11 == 0) {
      fVar1 = (float)extraout_EDX[1] - (float)piVar10[7];
      if ((param_3 < fVar1) && (param_3 = fVar1, extraout_ECX != (int *)0x0)) {
        *extraout_ECX = 2;
        if (*piVar5 == 0) {
          iVar11 = piVar5[1];
        }
        else {
          iVar11 = 0;
        }
        extraout_ECX[1] = iVar11;
        extraout_ECX[2] = piVar10[4];
        iVar11 = piVar10[2];
        iVar3 = piVar10[1];
        extraout_ECX[6] = *piVar10;
        extraout_ECX[8] = iVar11;
        extraout_ECX[7] = iVar3;
        fVar1 = (float)extraout_EDX[1];
        iVar11 = extraout_EDX[2];
        fVar2 = (float)piVar10[7];
        extraout_ECX[3] = *extraout_EDX;
        extraout_ECX[5] = iVar11;
        extraout_ECX[4] = (int)(fVar1 - fVar2);
        extraout_ECX[10] =
             extraout_ECX[10] ^ ((uint)*(byte *)(piVar10[6] + 3) << 2 ^ extraout_ECX[10]) & 0x7c;
LAB_000de20f:
        uVar9 = (*(uint *)piVar10[6] >> 0x1e ^ extraout_ECX[10]) & 1 ^ extraout_ECX[10];
        extraout_ECX[10] = uVar9;
        extraout_ECX[10] = (*(uint *)piVar10[6] >> 0x1c ^ uVar9) & 2 ^ uVar9;
      }
    }
    else if (iVar11 == 2) {
      fVar1 = (float)extraout_EDX[1] - (float)piVar10[7];
      if ((param_3 < fVar1) && (param_3 = fVar1, extraout_ECX != (int *)0x0)) {
        *extraout_ECX = 1;
        if (*piVar5 == 2) {
          iVar11 = piVar5[1];
        }
        else {
          iVar11 = 0;
        }
        extraout_ECX[1] = iVar11;
        extraout_ECX[2] = piVar10[4];
        iVar11 = piVar10[2];
        iVar3 = piVar10[1];
        extraout_ECX[6] = *piVar10;
        extraout_ECX[8] = iVar11;
        extraout_ECX[7] = iVar3;
        fVar1 = (float)extraout_EDX[1];
        iVar11 = extraout_EDX[2];
        fVar2 = (float)piVar10[7];
        extraout_ECX[3] = *extraout_EDX;
        extraout_ECX[5] = iVar11;
        extraout_ECX[4] = (int)(fVar1 - fVar2);
        extraout_ECX[10] =
             extraout_ECX[10] ^ ((uint)*(byte *)(piVar10[6] + 3) << 2 ^ extraout_ECX[10]) & 0x7c;
        goto LAB_000de20f;
      }
    }
    else {
      if (iVar11 != 4) goto LAB_000de238;
      fVar1 = (float)extraout_EDX[1] - (float)piVar10[7];
      if ((param_3 < fVar1) && (param_3 = fVar1, extraout_ECX != (int *)0x0)) {
        *extraout_ECX = 3;
        extraout_ECX[1] = 0;
        extraout_ECX[2] = piVar10[4];
        iVar11 = piVar10[2];
        iVar3 = piVar10[1];
        extraout_ECX[6] = *piVar10;
        extraout_ECX[8] = iVar11;
        extraout_ECX[7] = iVar3;
        fVar1 = (float)extraout_EDX[1];
        fVar2 = (float)piVar10[7];
        iVar11 = extraout_EDX[2];
        extraout_ECX[3] = *extraout_EDX;
        extraout_ECX[4] = (int)(fVar1 - fVar2);
        extraout_ECX[5] = iVar11;
      }
    }
    _param_2 = (float *)CONCAT13(1,param_2);
    pfVar6 = _param_2;
    if ((extraout_ECX != (int *)0x0) &&
       (((*extraout_ECX == 2 || (*extraout_ECX == 3)) && (iVar11 = extraout_ECX[2], iVar11 != 0))))
    {
      in_stack_00000064 = 0;
      FUN_002b3590(iVar11,&param_4,*(undefined4 *)(*(int *)(iVar11 + 0x14) + 0x108),
                   *(undefined4 *)(*(int *)(iVar11 + 0x14) + 0x10c));
      param_9 = param_4;
      param_10 = param_5;
      param_8 = param_7;
      param_11 = param_6;
      piVar10 = (int *)FUN_0001fb70(&param_8,&stack0x00000068,extraout_ECX + 6);
      iVar11 = piVar10[2];
      iVar3 = piVar10[1];
      extraout_ECX[6] = *piVar10;
      extraout_ECX[7] = iVar3;
      extraout_ECX[8] = iVar11;
    }
    uStack0000000b = 1;
    *pfVar6 = param_3;
  }
  in_stack_00000074 = &PTR_FUN_0039efc8;
  FUN_002b8de0();
  return uStack0000000b;
}
