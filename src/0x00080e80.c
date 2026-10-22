/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 313E091B3F2A9AF8DBF2ADF95922068500E25490AEDBA875601E8563925D794C
 * Entry: 0x00080e80, Ghidra index: 1516, label: FUN_00080e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00080e80(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  uVar2 = (**(code **)(iVar1 + 0x60))();
  (**(code **)(iVar1 + 0xe8))(uVar2);
  return;
}
