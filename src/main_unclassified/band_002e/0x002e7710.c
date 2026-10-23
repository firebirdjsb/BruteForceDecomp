/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4A76416C3EBAE382E1C628F06BD777C9819E936FB9EA34E132273E116E48DE0
 * Entry: 0x002e7710, Ghidra index: 10514, label: FUN_002e7710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e7710(undefined1 param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  *(undefined1 *)(in_ECX + 6) = param_1;
  piVar2 = (int *)(in_ECX + 0x14);
  iVar3 = 4;
  do {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
    *(undefined1 *)(iVar1 + 6) = param_1;
  } while (iVar3 != 0);
  return;
}
