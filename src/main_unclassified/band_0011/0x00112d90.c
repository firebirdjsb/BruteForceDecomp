/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A3576664D7AA2A028E869B86E1CFFD3BBABC61AB9F6D56670A64849F797E6C6
 * Entry: 0x00112d90, Ghidra index: 3563, label: FUN_00112d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00112d90(void)

{
  int iVar1;
  undefined4 in_ECX;
  int unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *(undefined1 *)(unaff_EDI + 4) = local_1;
  iVar1 = FUN_0025ae60((undefined1 *)(unaff_EDI + 4));
  *(int *)(unaff_EDI + 8) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(unaff_EDI + 8) + 4) = *(int *)(unaff_EDI + 8);
  *(undefined4 *)*(undefined4 *)(unaff_EDI + 8) = *(undefined4 *)(unaff_EDI + 8);
  *(int *)(*(int *)(unaff_EDI + 8) + 8) = *(int *)(unaff_EDI + 8);
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  return;
}
