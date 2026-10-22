/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92CD4ADEC3B976ED83BC756F5AD30AA180B6FCBA7029C1B8406EE8B676650554
 * Entry: 0x001b3bb0, Ghidra index: 5650, label: FUN_001b3bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3bb0(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x14;
  }
  if (uVar4 < in_EAX) {
    FUN_001bff50();
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x14)))
     && (iVar1 + in_EAX * 0x14 != iVar2)) {
    uVar3 = FUN_001d8140(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
