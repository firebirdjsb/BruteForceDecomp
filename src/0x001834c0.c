/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 663FB0A9BBC3EAB2EC6B4FFF527E7352D2CB05549D09D8F3C7B0AE7976A3286F
 * Entry: 0x001834c0, Ghidra index: 5197, label: FUN_001834c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001834c0(void)

{
  int iVar1;
  int unaff_EBX;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBX + 0xb8);
  for (iVar2 = *(int *)(unaff_EBX + 0xb4); iVar2 != iVar1; iVar2 = iVar2 + 8) {
    XAPILIB__CloseHandle(*(undefined4 *)(iVar2 + 4));
  }
  iVar2 = *(int *)(unaff_EBX + 0xb4);
  if ((iVar2 != 0) && (*(int *)(unaff_EBX + 0xb8) - iVar2 >> 3 != 0)) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
    *(undefined4 *)(unaff_EBX + 0xb4) = 0;
    *(undefined4 *)(unaff_EBX + 0xb8) = 0;
    *(undefined4 *)(unaff_EBX + 0xbc) = 0;
    FUN_001acd40(0x10);
  }
  return;
}
