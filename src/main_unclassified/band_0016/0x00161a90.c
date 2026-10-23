/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8745BE46309B2AD2E0B6B68D2FB991C1583E74852F0951C9B5431A1650CB39DB
 * Entry: 0x00161a90, Ghidra index: 4620, label: FUN_00161a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161a90(int param_1)

{
  int iVar1;
  int unaff_ESI;
  uint local_18;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  local_18 = 0;
  while( true ) {
    local_8 = *(int *)(param_1 + 4);
    if ((local_8 == 0) || ((uint)(*(int *)(param_1 + 8) - local_8 >> 6) <= local_18)) break;
    local_c = *(undefined4 *)(local_8 + iVar1);
    local_8 = local_8 + iVar1;
    local_4 = 0;
    FUN_00160e40(&local_c);
    local_18 = local_18 + 1;
    *(byte *)(unaff_ESI + 0x114) = *(byte *)(unaff_ESI + 0x114) | 1;
    iVar1 = iVar1 + 0x40;
  }
  return;
}
