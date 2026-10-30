/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D7A6378E7C4B6C1F925E0DA1CE89B112F16C2C6E66D80E444A266805CE1392C
 * Entry: 0x002941a0, Ghidra index: 9281, label: FUN_002941a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002941a0(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = *(int *)(in_ECX + 8);
    *(undefined4 *)(in_ECX + 4) = 1;
    if (-1 < iVar2) {
      iVar1 = (iVar2 + 1) * 0x10 + in_ECX;
      iVar2 = iVar2 + 1;
      do {
        FUN_00294270(iVar1);
        iVar1 = iVar1 + -0x10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}
