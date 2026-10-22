/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04F703A237F56505AF6D47017A4D6E7F7A7117999511E183F3B5BBBC1A8AFB75
 * Entry: 0x00373ab0, Ghidra index: 13413, label: FUN_00373ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00373ab0(void)

{
  int iVar1;
  uint in_ECX;
  
  iVar1 = 0;
  if (in_ECX != 0) {
    for (; (in_ECX >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
    }
  }
  return iVar1;
}
