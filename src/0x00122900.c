/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0827CBAD16EBFCE2E888572839B5933FC337D20CCC9AF37BEB06E68F91F1C36
 * Entry: 0x00122900, Ghidra index: 3663, label: FUN_00122900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00122900(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0x55c);
  iVar2 = FUN_000ff730(in_EAX + 0x558,iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000004);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
