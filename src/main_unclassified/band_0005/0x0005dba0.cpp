/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F184A8F08F8359E9ECC2D9193B1135C89CF23280D85943FCDF849C8D5C6F6BF3
 * Entry: 0x0005dba0, Ghidra index: 974, label: FUN_0005dba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005dba0(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int unaff_EBX;
  
  if (unaff_EBX != 0) {
    uVar1 = *(uint *)(in_ECX + 4);
    uVar3 = 0;
    if (uVar1 != 0) {
      piVar2 = *(int **)(in_ECX + 8);
      piVar4 = piVar2;
      while (*piVar4 != unaff_EBX) {
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
        if (*(uint *)(in_ECX + 4) <= uVar3) {
          return;
        }
      }
      if (uVar3 < uVar1) {
        piVar2[uVar3] = piVar2[uVar1 - 1];
        *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -1;
      }
    }
  }
  return;
}
