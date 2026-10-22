/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64A1405F645C43A133D24E207C2CF26E32216AC50EDDF163BD70DCA2E9918330
 * Entry: 0x0005bee0, Ghidra index: 938, label: FUN_0005bee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0005bee0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 != 0) goto LAB_0005befc;
    iVar3 = 0;
    while (*(int *)(iVar3 + 4) != param_2) {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) {
        return;
      }
LAB_0005befc:
      iVar3 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 4);
    }
    if (((uVar2 != 0xffffffff) && (uVar2 < uVar1)) &&
       (iVar3 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 4), iVar3 != 0)) {
      if (*(int *)(iVar3 + 0x14) != 0) {
        FUN_0008a720(*(int *)(iVar3 + 0x14),0);
      }
      if (*(int *)(param_2 + 0x2e8) != 0) {
        FUN_0014cb60(0);
      }
      *(undefined4 *)(param_2 + 0x59c) = 0;
      FUN_0005dba0();
      FUN_0005bff0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar3);
    }
  }
  return;
}
