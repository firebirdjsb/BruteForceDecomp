/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DE949EDC920F3DCEA35A9AC8A1EE35D0CD43C91899A1EF47984573E6CA3EDDE
 * Entry: 0x00161b10, Ghidra index: 4621, label: FUN_00161b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161b10(int param_1,int param_2)

{
  int iVar1;
  uint local_1c;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  local_1c = 0;
  while( true ) {
    local_8 = *(int *)(param_2 + 4);
    if ((local_8 == 0) || ((uint)((*(int *)(param_2 + 8) - local_8) / 0x3d4) <= local_1c)) break;
    local_c = *(undefined4 *)(iVar1 + local_8);
    local_8 = iVar1 + local_8;
    local_4 = 0;
    FUN_00160e40(&local_c);
    local_1c = local_1c + 1;
    *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) | 1;
    iVar1 = iVar1 + 0x3d4;
  }
  return;
}
