/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 42285A9B4B805AFC3D09520445299262BB6176195CB60D6677100B84501B96D0
 * Entry: 0x002e7790, Ghidra index: 10517, label: FUN_002e7790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e7790(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 == -1) {
    iVar1 = 0x10000;
  }
  return iVar1;
}
