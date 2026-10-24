/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3ECA68F4E3B2611858114A8A846223E07EFF909D0175458411E84E20FC740AC5
 * Entry: 0x002e13a0, Ghidra index: 10369, label: FUN_002e13a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e13a0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13 [6];
  undefined1 local_d;
  undefined1 local_c [4];
  int local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  *(uint8_t *)((uint8_t *)&local_18 + 2) = 0;
  puVar3 = &local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_1c[0] = 0;
  while( true ) {
    local_24 = *(int *)(in_ECX + 0xf8);
    if (*(int *)(iVar1 + 700) != 0) {
      local_24 = local_24 - *(int *)(iVar1 + 700);
    }
    local_20 = *(int *)(in_ECX + 0x11c);
    iVar2 = FUN_002e3bd0(local_c,&local_24,&local_20,local_13,local_1c,&param_1,&local_d);
    if (iVar2 < 0) break;
    if ((local_20 != 0) || (*(int *)(iVar1 + 700) == 0)) {
      ((uint8_t *)&local_18)[3] =
           (((uint8_t *)&local_18)[3] ^ ((uint8_t)((uint32_t)local_20 << 1) ^ ((uint8_t *)&local_18)[3]) & 0xe) & 0xf |
           ((uint32_t)(uint8_t)param_1 << 4);
      local_14 = local_1c[0];
      if (*(int *)(iVar1 + 700) != 0) {
        local_4 = *(undefined4 *)(iVar1 + 0x2c0);
        ((uint8_t *)&local_18)[3] = ((uint8_t *)&local_18)[3] | 1;
        local_8 = *(int *)(iVar1 + 700);
      }
      iVar2 = FUN_002e0960(&local_18,iVar1);
      if (-1 < iVar2) {
        *(undefined4 *)(iVar1 + 700) = 0;
      }
      return;
    }
    FUN_002e12a0(iVar1);
  }
  return;
}
