/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE2A073CCA9AD6CBABFA5D456002305E1C8386F366EDAD1E83F256A815AC597A
 * Entry: 0x00067a90, Ghidra index: 1133, label: FUN_00067a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00067a90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x88) + 1;
  *(int *)(param_1 + 0x88) = iVar1;
  return iVar1;
}
