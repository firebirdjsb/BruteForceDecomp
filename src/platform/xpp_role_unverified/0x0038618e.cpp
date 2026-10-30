/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 197E7970EB7823A119A3D2F8CFE2ADBE595CB5B32C56F5915BEB265AAE812259
 * Entry: 0x0038618e, Ghidra index: 13689, label: FUN_0038618e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0038618e(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x41c);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(in_ECX + 0x41c);
    cVar3 = FUN_00385d45(*(undefined2 *)(iVar1 + 0x20));
    if (cVar3 == '\0') break;
    iVar2 = *(int *)(iVar1 + 0x24);
    *(int *)(in_ECX + 0x41c) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0x420) = 0;
    }
    FUN_00385df0(iVar1);
    iVar1 = *(int *)(in_ECX + 0x41c);
  }
  return;
}
