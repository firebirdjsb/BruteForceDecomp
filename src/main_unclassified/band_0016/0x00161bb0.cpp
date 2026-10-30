/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 88CAD53232B2985C3799E41DECA056E494CD928DEA0D24E500B6C1E257A5A686
 * Entry: 0x00161bb0, Ghidra index: 4622, label: FUN_00161bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-level declaration matches original-address callee 0x00160E40.
 * The callee draft takes the address of one 32-bit local DWORD, but
 * original Xbox implicit registers and native ABI remain UNVERIFIED. */
extern void FUN_00160e40(uint *guest_word);
void FUN_00161bb0(int param_1,int param_2)

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
    if ((local_8 == 0) || ((uint)((*(int *)(param_2 + 8) - local_8) / 0x48) <= local_1c)) break;
    local_c = *(undefined4 *)(iVar1 + local_8);
    local_8 = iVar1 + local_8;
    local_4 = 0;
    FUN_00160e40(&local_c);
    local_1c = local_1c + 1;
    *(byte *)(param_1 + 0x114) = *(byte *)(param_1 + 0x114) | 1;
    iVar1 = iVar1 + 0x48;
  }
  return;
}
