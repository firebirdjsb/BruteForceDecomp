/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A76C2646F4FC3AF3F2EA53B3A44BF268FE3FE0669AE705CA4CCA553E2B75150
 * Entry: 0x001a76b0, Ghidra index: 5404, label: FUN_001a76b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001a76b0(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_74 [12];
  undefined4 uStack_44;
  undefined4 local_34 [13];
  
  if (*(int *)(unaff_EBX + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4)) / 0x34;
    if (iVar2 != 0) goto LAB_001a76f1;
  }
  uStack_44 = 0x1a76e6;
  FUN_001ab990();
LAB_001a76f1:
  puVar3 = local_34;
  puVar4 = auStack_74;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_001b2540();
  return iVar2 * 0x34 + *(int *)(unaff_EBX + 4);
}
