/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E9C6077914699E9859D8D81771B7FF8B6420578451AD1D425F64D6B2CDD3D685
 * Entry: 0x000ba410, Ghidra index: 2256, label: FUN_000ba410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original x86 ba42d LEA EAX,[ESP+0x10] after three saved registers = entry ESP+4; the same guest DWORD is loaded into EBX at ba411.
 * This is an address-taken incoming 32-bit guest word, not a local zero.
 * Implicit EAX/EBX register inputs and host guest32 mapping remain ABI_UNVERIFIED. */
extern uint FUN_000ba460(void);
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);

void FUN_000ba410(undefined4 guest_stack_word)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  FUN_000ba460();
  iVar1 = *(int *)(in_EAX + 0x1364);
  iVar2 = FUN_000ff730(in_EAX + 0x1360,iVar1,*(undefined4 *)(iVar1 + 4),&guest_stack_word);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
