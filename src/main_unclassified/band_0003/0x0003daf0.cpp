/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AA1E3A10E9EF0C3EF2594F0F77D7D12EB933239A92BB53DF3FF10F0E2BA93DC
 * Entry: 0x0003daf0, Ghidra index: 460, label: FUN_0003daf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0003daf0(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  
  fVar4 = (float10)0.0;
  uVar3 = 0;
  if (*(int *)(in_EAX + 0x10) != 0) {
    do {
      iVar1 = *(int *)(in_EAX + 0xc) + uVar3;
      uVar2 = iVar1 / 2;
      if (*(uint *)(in_EAX + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(in_EAX + 8);
      }
      fVar4 = fVar4 + (float10)*(float *)(*(int *)(*(int *)(in_EAX + 4) + uVar2 * 4) + 4 +
                                         (iVar1 % 2) * 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(in_EAX + 0x10));
  }
  return fVar4;
}
