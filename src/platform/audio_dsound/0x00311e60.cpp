/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CF36658AC7FD0A141104F079A8E693A6EF0D75C56ED7A4BED01F8DDE7FAF906
 * Entry: 0x00311e60, Ghidra index: 11929, label: FUN_00311e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00311e60(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int in_ECX;
  int iVar6;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0xd4) != 0) {
    FUN_00314937(*(int *)(in_ECX + 0xd4));
    *(undefined4 *)(in_ECX + 0xd4) = 0;
  }
  *(uint *)(in_ECX + 0xd8) = param_1;
  if (param_1 != 0) {
    puVar4 = (undefined4 *)FUN_003148cf(0x61645344,param_1 << 3,0);
    local_c = (-(uint)(puVar4 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
    *(undefined4 **)(in_ECX + 0xd4) = puVar4;
    if (-1 < local_c) {
      for (iVar6 = (param_1 & 0x1fffffff) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar4 = *param_2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      if (*(int *)(in_ECX + 0xd8) != 1) {
        do {
          iVar6 = local_8 * 8;
          puVar5 = (uint *)(*(int *)(in_ECX + 0xd4) + iVar6);
          uVar1 = *puVar5;
          if (puVar5[2] < uVar1) {
            uVar2 = puVar5[1];
            local_8 = 0;
            *puVar5 = puVar5[2];
            puVar5[1] = puVar5[3];
            iVar3 = *(int *)(in_ECX + 0xd4);
            *(uint *)(iVar6 + 8 + iVar3) = uVar1;
            *(uint *)(iVar6 + 0xc + iVar3) = uVar2;
          }
          else {
            local_8 = local_8 + 1;
          }
        } while (local_8 < *(int *)(in_ECX + 0xd8) - 1U);
      }
    }
  }
  return local_c;
}
