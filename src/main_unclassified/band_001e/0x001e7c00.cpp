/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 018758295FCEA09F6A795B024789DD41F873BEAD8F6FF6FC8D5368528824F659
 * Entry: 0x001e7c00, Ghidra index: 6824, label: FUN_001e7c00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7c00(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_EAX;
  int *in_ECX;
  
  fVar1 = *(float *)(*in_ECX * 4 + *(int *)(in_EAX + 0xb4));
  fVar2 = *(float *)(*in_ECX * 4 + *(int *)(in_EAX + 0xb8));
  iVar3 = in_ECX[2];
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      if ((0.0 < fVar1) && (fVar2 == 0.0)) goto LAB_001e7c5a;
    }
    else if (iVar3 == 2) {
      if ((fVar1 == 0.0) && (0.0 < fVar2)) {
        FUN_001f2910(1.0 - fVar1);
        return;
      }
    }
    else if (iVar3 == 3) {
      FUN_001f2910(-fVar1);
    }
    return;
  }
LAB_001e7c5a:
  FUN_001f2910(fVar1);
  return;
}
