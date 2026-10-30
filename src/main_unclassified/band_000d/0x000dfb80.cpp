/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD89653D046FD62C213BCE146F9A133E53E65B1DC5D2666D3C56EBA6F0050BE4
 * Entry: 0x000dfb80, Ghidra index: 2733, label: FUN_000dfb80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original x86 dfb94 LEA EAX,[ESP+0x10] after three saved registers = entry ESP+4.
 * This is an address-taken incoming 32-bit guest word, not a local zero.
 * Implicit EAX/EBX register inputs and host guest32 mapping remain ABI_UNVERIFIED. */
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);

void FUN_000dfb80(undefined4 guest_stack_word)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0xec);
  iVar2 = FUN_000ff730(in_EAX + 0xe8,iVar1,*(undefined4 *)(iVar1 + 4),&guest_stack_word);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
