/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F2F7865B0CAF6DCC0A25B9DA6AD1698B8B475CF9A81A2EC5521BFE523F642C5
 * Entry: 0x000e42f0, Ghidra index: 2841, label: FUN_000e42f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original 0x000e4306 LEA EAX,[ESP+0x10] after three saved registers
 * takes the address of the incoming guest DWORD at entry ESP+4.
 * ESI register input and host guest32 address mapping remain ABI_UNVERIFIED. */
void FUN_000e42f0(undefined4 guest_stack_word)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int **)(unaff_ESI + 0x24) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(unaff_ESI + 0x24);
  }
  iVar1 = FUN_000ff730(unaff_ESI + 0x20,iVar2,*(undefined4 *)(iVar2 + 4),&guest_stack_word);
  FUN_000b2a50();
  *(int *)(iVar2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  iVar2 = *(int *)(unaff_ESI + 0x60) + 1;
  *(int *)(unaff_ESI + 0x60) = iVar2;
  if (*(int *)(unaff_ESI + 0x54) < iVar2) {
    *(int *)(unaff_ESI + 0x54) = iVar2;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x54) = *(undefined4 *)(unaff_ESI + 0x54);
  return;
}
