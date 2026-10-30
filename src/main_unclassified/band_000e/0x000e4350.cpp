/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 568B786F2D5C282CC644F49E5B0ADB0CF15E91E65713877971098491C1F65B73
 * Entry: 0x000e4350, Ghidra index: 2842, label: FUN_000e4350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Recorded 0x000FF730 four-DWORD guest call with final stack-word
 * address, and 0x000B2A50 source-level void() helper. Register inputs,
 * guest-memory translation and full Xbox ABI remain UNVERIFIED. */
extern undefined4 FUN_000ff730(undefined4, undefined4, undefined4, undefined4 *);
extern void FUN_000b2a50(void);
/* Original 0x000e4366 LEA EAX,[ESP+0x10] after three saved registers
 * takes the address of the incoming guest DWORD at entry ESP+4.
 * ESI register input and host guest32 address mapping remain ABI_UNVERIFIED. */
void FUN_000e4350(undefined4 guest_stack_word)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int **)(unaff_ESI + 0x30) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(unaff_ESI + 0x30);
  }
  iVar1 = FUN_000ff730(unaff_ESI + 0x2c,iVar2,*(undefined4 *)(iVar2 + 4),&guest_stack_word);
  FUN_000b2a50();
  *(int *)(iVar2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  iVar2 = *(int *)(unaff_ESI + 0x5c) + 1;
  *(int *)(unaff_ESI + 0x5c) = iVar2;
  if (*(int *)(unaff_ESI + 0x58) < iVar2) {
    *(int *)(unaff_ESI + 0x58) = iVar2;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x58) = *(undefined4 *)(unaff_ESI + 0x58);
  return;
}
