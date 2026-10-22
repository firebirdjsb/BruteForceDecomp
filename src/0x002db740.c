/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19917E6A46B4E7A201B53CA42D7AE5CDE8574EEE8FCAD2DA6A33958CB11FB2CF
 * Entry: 0x002db740, Ghidra index: 10283, label: FUN_002db740
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002db740(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int in_ECX;
  
  iVar4 = in_EAX + 1;
  if (iVar4 < *(int *)(in_ECX + 0x3c)) {
    do {
      iVar1 = *(int *)(in_ECX + 0x34);
      iVar2 = *(int *)(iVar1 + iVar4 * 4);
      iVar3 = *(int *)(iVar1 + -4 + iVar4 * 4);
      *(int *)(iVar1 + -4 + iVar4 * 4) = iVar2;
      *(int *)(*(int *)(in_ECX + 0x34) + iVar4 * 4) = iVar3;
      *(int *)(*(int *)(in_ECX + 0x38) + iVar2 * 4) = iVar4 + -1;
      *(int *)(*(int *)(in_ECX + 0x38) + iVar3 * 4) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x3c));
  }
  return;
}
