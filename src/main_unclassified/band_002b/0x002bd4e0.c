/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0398C2C32EC917C2BAB5225F5DF071FA25E44A564A11391C39669E33B1D22277
 * Entry: 0x002bd4e0, Ghidra index: 9947, label: FUN_002bd4e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd4e0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  uint *unaff_ESI;
  
  iVar1 = *(ushort *)(in_ECX + 0xea) - 1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(*(int *)(in_ECX + 0xec) + iVar1 * 4);
    while ((uint *)*puVar2 != unaff_ESI) {
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -1;
      if (iVar1 < 0) {
        return;
      }
    }
    if (-1 < iVar1) {
      FUN_002be8b0();
      *unaff_ESI = *unaff_ESI & 0xffffffcf;
    }
  }
  return;
}
