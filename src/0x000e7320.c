/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76A73CE6A1E010701FC6A225C58643FF51D1A7EE205633507ABAA2B5F8EE5433
 * Entry: 0x000e7320, Ghidra index: 2868, label: FUN_000e7320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000e7320(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = *(int *)(in_EAX + 0x180);
  if (iVar3 == 0) {
    iVar2 = *(int *)(*(int *)(in_EAX + 0x8c) + 0xd8);
    iVar1 = *(int *)(*(int *)(*(int *)(in_EAX + 0x80) + 0xb80) + 0x14);
    if (iVar2 == 2) {
      if (in_ECX != (int *)0x0) {
        if ((*(int *)(in_ECX[3] + 4) == 3) && ((*(byte *)(in_ECX + 0x1c) & 1) == 0)) {
          return *(int *)(iVar1 + 0x10);
        }
        iVar2 = (**(code **)(*in_ECX + 0x20))();
        if (((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 3)) &&
           ((*(byte *)(iVar2 + 0x70) & 1) == 0)) {
          return *(int *)(iVar1 + 0x14);
        }
      }
    }
    else if ((iVar2 == 1) && (in_ECX != (int *)0x0)) {
      if (*(int *)(in_ECX[3] + 4) == 3) {
        return *(int *)(iVar1 + 8);
      }
      iVar2 = (**(code **)(*in_ECX + 0x20))();
      if ((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 3)) {
        iVar3 = *(int *)(iVar1 + 0xc);
      }
    }
  }
  return iVar3;
}
