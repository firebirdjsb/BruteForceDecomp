/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46191390A1F2E394CB8B18A4C63B875681C8D57E8B8A058996D7C2366524A7C5
 * Entry: 0x00161cf0, Ghidra index: 4624, label: FUN_00161cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161cf0(int param_1,int param_2)

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
    if ((local_8 == 0) || ((uint)((*(int *)(param_2 + 8) - local_8) / 0x144) <= local_1c)) break;
    local_c = *(undefined4 *)(iVar1 + local_8);
    local_8 = iVar1 + local_8;
    local_4 = 0;
    FUN_00160e40(&local_c);
    local_1c = local_1c + 1;
    *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) | 1;
    iVar1 = iVar1 + 0x144;
  }
  return;
}
