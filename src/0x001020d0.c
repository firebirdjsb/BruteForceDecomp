/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 401CB969229656079CF6180971A0A8DA40650BEC737A5273DADAB34586292A58
 * Entry: 0x001020d0, Ghidra index: 3261, label: FUN_001020d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001020d0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (((in_ECX != 0) && (*(int *)(in_ECX + 0xa8) != 0)) &&
     (piVar1 = *(int **)(*(int *)(in_ECX + 0xa8) + 0xbec), piVar1 != (int *)0x0)) {
    iVar2 = FUN_000f6da0();
    if (iVar2 != 0x19) {
      iVar2 = FUN_000f6e10();
      if (iVar2 != 9) {
        uVar3 = (**(code **)(*piVar1 + 8))(iVar2);
        return uVar3;
      }
    }
  }
  return 0;
}
