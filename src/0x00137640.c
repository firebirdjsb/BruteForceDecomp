/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ECF4AF3DAFAE9BB4067C450B30BCBF5762A1B30E1FA77B7A492E614614CDFB88
 * Entry: 0x00137640, Ghidra index: 3907, label: FUN_00137640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00137640(void)

{
  int iVar1;
  undefined4 in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(in_ECX + 8) - iVar1 >> 4) < (uint)(*(int *)(in_ECX + 0xc) - iVar1 >> 4))) {
    iVar1 = *(int *)(in_ECX + 8);
    FUN_001399c0(iVar1,1);
    *(int *)(in_ECX + 8) = iVar1 + 0x10;
    return;
  }
  FUN_00137b90(*(undefined4 *)(in_ECX + 8),in_EAX);
  return;
}
