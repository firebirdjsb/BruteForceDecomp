/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A9EAA8696D71B7D19788332EFA2CB091C6C873DE98263857AFE634DFF4FB88B
 * Entry: 0x000782c0, Ghidra index: 1423, label: FUN_000782c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_00077da0(int param_1);

int FUN_000782c0(int param_1)

{
  int in_ECX;
  uint uVar1;
  int *unaff_EBX;
  int iVar2;
  
  if (unaff_EBX != (int *)0x0) {
    iVar2 = 0;
    for (uVar1 = 0;
        (*(int *)(in_ECX + 0x14) != 0 &&
        (uVar1 < (uint)(*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14) >> 4))); uVar1 = uVar1 + 1
        ) {
      if (*(int *)(*(int *)(in_ECX + 0x14) + iVar2) == *unaff_EBX) {
        if (param_1 == 1) {
          return *(int *)(in_ECX + 0x14) + iVar2;
        }
        iVar2 = FUN_00077da0();
        return iVar2;
      }
      iVar2 = iVar2 + 0x10;
    }
  }
  return 0;
}
