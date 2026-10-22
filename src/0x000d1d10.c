/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5B5D0DF9C12C4861E979F6F87F68F841372B2BE3E0743607D4BB97C03333DFB
 * Entry: 0x000d1d10, Ghidra index: 2610, label: FUN_000d1d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_000d1d10(undefined4 *param_1,int *param_2,int param_3,float param_4,float param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94 [5];
  undefined4 local_80;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54 [17];
  undefined4 *local_10;
  
  if ((((param_2 != (int *)0x0) && (param_2 != (int *)0xffffffff)) &&
      (iVar4 = *(int *)(*param_2 + 0x24), iVar4 != 0)) &&
     ((*(int *)(iVar4 + 4) != 0 &&
      (puVar3 = *(undefined4 **)(*(int *)(iVar4 + 4) + 8), puVar3 != (undefined4 *)0x0)))) {
    bVar6 = param_1 == (undefined4 *)0x0;
    FUN_002b4710();
    FUN_000d1940();
    if (bVar6) {
      FUN_000d1bf0(in_ECX,&local_c4,&local_c8,param_2);
      puVar5 = local_94;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_64 = local_c4;
      local_10 = local_94;
      local_94[0] = 0x3f800000;
      local_80 = 0x3f800000;
      local_6c = 0x3f800000;
      local_60 = local_c0;
      local_5c = local_bc;
    }
    else {
      local_bc = puVar3[2];
      local_c0 = puVar3[1];
      local_c4 = *puVar3;
      local_c8 = 1.0;
      local_b8 = local_c0;
    }
    FUN_000d1cc0(in_ECX,param_8,local_c8 * param_5);
    iVar4 = FUN_0016b3f0(param_8,puVar3,local_54);
    if ((*(uint *)(iVar4 + 0x70) & 0x300) == 0) {
      FUN_002c00d0(*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x10));
      *(uint *)(iVar4 + 0x70) = *(uint *)(iVar4 + 0x70) & 0xfffffdff | 0x100;
    }
    *(int **)(iVar4 + 0x9c) = in_ECX + 7;
    *(uint *)(iVar4 + 0x8c) = *(uint *)*param_2 | 0x80000000;
    FUN_002b3c60();
    iVar2 = FUN_000d2990();
    if (iVar2 == *in_ECX) {
      FUN_000d2890(0xffffffff);
    }
    cVar1 = FUN_000d2820();
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)FUN_000d27d0();
      *(byte *)(puVar3 + 3) =
           *(byte *)(puVar3 + 3) ^ (*(byte *)(param_3 + 0x71) >> 2 ^ *(byte *)(puVar3 + 3)) & 1;
      puVar3[1] = iVar4;
      *puVar3 = param_2;
      puVar3[5] = param_1;
      *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) & 0xfd;
      puVar3[4] = puVar3[4] ^ (*(uint *)(param_3 + 0x44) ^ puVar3[4]) & 3;
      if (bVar6) {
        puVar3[2] = local_c8 * param_4;
        param_1 = puVar3;
      }
      else {
        puVar3[2] = param_1[2];
        FUN_002b74e0(param_1[1],0xbf800000);
      }
      puVar3[5] = param_1;
      iVar4 = FUN_0004e8d0();
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        FUN_000d1d10(param_1,*(undefined4 *)(param_2[0x13] + iVar4 * 4),param_3,param_4,param_5,
                     param_6,param_7,param_8);
        FUN_00235e40();
      }
      if (bVar6) {
        local_a0 = param_6[1];
        local_a4 = *param_6;
        local_9c = param_6[2];
        local_b4 = *param_7;
        local_b0 = param_7[1];
        local_ac = param_7[2];
        local_98 = 0;
        local_a8 = 0;
        FUN_002b3bc0(&local_b4,&local_a4);
      }
    }
    if (local_54[0] != 0) {
      (*(code *)PTR_FUN_003bc654)(local_54[0]);
      return;
    }
  }
  return;
}
