/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A4E713624E30243645FEF9FC49C88C30DCD0F045A5D647ECBAACD75D1709704
 * Entry: 0x002e9e50, Ghidra index: 10565, label: FUN_002e9e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_002e9e50(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)0x0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    puVar1 = (undefined4 *)
             (*(int *)(in_ECX + 0x14) * *(int *)(in_ECX + 0x18) + *(int *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 0x18) = *puVar1;
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
  }
  return puVar1;
}
