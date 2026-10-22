/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 144472A7302A9663ED72996E472EDA478B3B319063663529BCDFBE87C473F5C4
 * Entry: 0x0034d2b1, Ghidra index: 12999, label: FUN_0034d2b1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fef00144;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034d2b1(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int in_ECX;
  uint uVar8;
  
  if (*(int **)(in_ECX + 0x260) == (int *)0x0) {
    iVar4 = FUN_0034c841();
    puVar2 = *(uint **)(in_ECX + 0x234);
    uVar1 = *(ushort *)(param_1 + 4) + 0xe + (*(uint *)(param_1 + 8) >> 0x13 & 1) * 8;
    FUN_0034c2f0(param_1);
    MmLockUnlockBufferPages(iVar4,uVar1,0);
    uVar5 = MmGetPhysicalAddress(iVar4);
    *puVar2 = uVar5;
    uVar8 = -(uVar5 & 0xfff) + 0x1000;
    if (uVar8 < uVar1) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x20;
      if (puVar2 == *(uint **)(in_ECX + 0x22c)) {
        puVar7 = *(uint **)(in_ECX + 0x228);
      }
      else {
        puVar7 = puVar2 + 2;
      }
      *(int *)(in_ECX + 0x220) = *(int *)(in_ECX + 0x220) + 1;
      uVar6 = MmGetPhysicalAddress(uVar8 + iVar4);
      *puVar7 = uVar6;
      puVar7[1] = (uVar1 - uVar8) - 1 | 0x80010000;
      puVar2[1] = -(uVar5 & 0xfff) + 0xfff | 0x80000000;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xdf;
      puVar2[1] = uVar1 - 1 | 0x80010000;
      puVar7 = puVar2;
    }
    if (puVar7 == *(uint **)(in_ECX + 0x22c)) {
      puVar7 = *(uint **)(in_ECX + 0x228);
    }
    else {
      puVar7 = puVar7 + 2;
    }
    *(int *)(in_ECX + 0x220) = *(int *)(in_ECX + 0x220) + 1;
    *(uint **)(in_ECX + 0x234) = puVar7;
    if ((*(byte *)(in_ECX + 1) & 0x20) == 0) {
      _DAT_fef00144 = 1;
    }
  }
  else {
    iVar4 = **(int **)(in_ECX + 0x260);
    uVar3 = FUN_0034c841(*(ushort *)(param_1 + 4) + 0xe + (*(uint *)(param_1 + 8) >> 0x13 & 1) * 8);
    (**(code **)(iVar4 + 0x14))(param_1,uVar3);
  }
  return;
}
