/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADE65B7B734DFAEB60F933E139D62556A0E4454E295CE1284084567F22E6EB8C
 * Entry: 0x00072b60, Ghidra index: 1286, label: FUN_00072b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00072b60(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  int *piVar2;
  int in_EDX;
  
  if (in_EDX == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x38);
  do {
    if (*piVar2 == in_EDX) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 2;
  } while ((int)uVar1 < 7);
  return uVar1 & 0xffffff00;
}
