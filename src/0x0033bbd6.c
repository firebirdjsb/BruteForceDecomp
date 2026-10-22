/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 582158B777977B7ED0FD7C6E26EECE7EF043A21D0965F80D1B7E711D36C13F5F
 * Entry: 0x0033bbd6, Ghidra index: 12528, label: FUN_0033bbd6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033bbd6(int param_1)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + param_1;
  uVar1 = *(uint *)(in_ECX + 0xc);
  if (499 < uVar1) {
    iVar2 = *(int *)(in_ECX + 8);
    do {
      uVar1 = uVar1 - 500;
      iVar2 = iVar2 + 1;
    } while (499 < uVar1);
    *(int *)(in_ECX + 8) = iVar2;
    *(uint *)(in_ECX + 0xc) = uVar1;
  }
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) - param_1;
  return;
}
