/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B2B078E40642C34E4A25CD904A893473227717E993602FC5874A572325AA4CD3
 * Entry: 0x0034e7ce, Ghidra index: 13024, label: FUN_0034e7ce
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034e7ce(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int local_10;
  int local_c;
  
  local_10 = -1;
  piVar1 = *(int **)(param_1 + 0x10);
  if (((piVar1 != (int *)(param_1 + 0x10)) && (*(int *)(*(int *)(param_1 + 8) + 0x14) == 0)) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 0x14) == 0)) {
    if ((*(int *)(param_1 + 4) == 0) || (*(char *)((int)piVar1 + 0x2b) == '\x03')) {
      local_c = (*(int *)(param_1 + 0x30) + 7U & 0xfffffff8) * 8 + 0x308;
    }
    else {
      local_c = 0x610;
    }
    iVar3 = *(int *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x2c) - *(int *)KeTickCount_exref < 0) {
      iVar3 = *(int *)KeTickCount_exref;
    }
    if ((*(int *)(in_ECX + 0x1dc) + 200) - iVar3 < 0) {
      local_10 = *(int *)(in_ECX + 0x1d8) + 1;
    }
    else {
      *(uint *)(param_1 + 0x2c) = (uint)(local_c * 1000) / *(uint *)(param_1 + 0x28) + iVar3;
      iVar3 = *piVar1;
      piVar2 = (int *)piVar1[1];
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      *piVar1 = 0;
      FUN_0034e526(param_1,piVar1);
      *(undefined1 *)((int)piVar1 + 0x2b) = 0;
    }
  }
  FUN_0034c35a(param_1 + 0x18,local_10);
  return;
}
