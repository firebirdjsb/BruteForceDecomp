/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 084E8406688F723D4812E86313FA393CA2BDB0B51321A216CD0F388EDC168B9C
 * Entry: 0x001b3fb0, Ghidra index: 5651, label: FUN_001b3fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b3fb0(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(unaff_ESI + 8) - iVar1 >> 3;
  }
  if (uVar3 < in_EAX) {
    FUN_00263ec0(*(undefined4 *)(unaff_ESI + 8),&stack0x00000004);
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)(iVar2 - iVar1 >> 3))) &&
     (iVar1 + in_EAX * 8 != iVar2)) {
    uVar4 = FUN_001cec30(iVar2,iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar4;
  }
  return;
}
