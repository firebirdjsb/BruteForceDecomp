/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1752BB4B6564D4490CDB30AFEB2735BC87E037DF4B8472B3A23D2A453A2E348F
 * Entry: 0x00161970, Ghidra index: 4618, label: FUN_00161970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00161970(int param_1)

{
  int iVar1;
  int unaff_ESI;
  uint local_18;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  iVar1 = 0;
  local_18 = 0;
  while( true ) {
    iStack_8 = *(int *)(param_1 + 4);
    if ((iStack_8 == 0) || ((uint)(*(int *)(param_1 + 8) - iStack_8 >> 4) <= local_18)) break;
    uStack_c = *(undefined4 *)(iStack_8 + iVar1);
    iStack_8 = iStack_8 + iVar1;
    uStack_4 = 0;
    FUN_00160e40(&uStack_c);
    local_18 = local_18 + 1;
    *(byte *)(unaff_ESI + 0x114) = *(byte *)(unaff_ESI + 0x114) | 1;
    iVar1 = iVar1 + 0x10;
  }
  return;
}
