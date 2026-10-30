/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0CD1E1430FC44A219C7705D99A36C28EA5E3C529426F3032C615B8DD5CDA716
 * Entry: 0x00241480, Ghidra index: 8007, label: FUN_00241480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00241480(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_3c [5];
  undefined4 uStack_28;
  undefined4 local_18 [6];
  
  if (*(int *)(unaff_EBX + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(unaff_EBX + 8) - *(int *)(unaff_EBX + 4)) / 0x18;
    if (iVar2 != 0) goto LAB_002414c1;
  }
  uStack_28 = 0x2414b6;
  FUN_001aaa90();
LAB_002414c1:
  puVar3 = local_18;
  puVar4 = auStack_3c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_000d29b0();
  return *(int *)(unaff_EBX + 4) + iVar2 * 0x18;
}
