/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC098A5D74B3C2CCCB46631C8541A92C95D82F8DC735B7B2A5BC1A7484B52A1F
 * Entry: 0x001e2430, Ghidra index: 6748, label: FUN_001e2430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e2430(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != param_3) {
    while (iVar3 = param_2, iVar3 + 0x1c != param_3) {
      if (*(uint *)(iVar3 + 0x34) < 0x10) {
        iVar1 = iVar3 + 0x20;
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x20);
      }
      iVar1 = FUN_000e0b20(0,iVar1,*(undefined4 *)(iVar3 + 0x30));
      param_2 = iVar3 + 0x1c;
      if (iVar1 == 0) {
        for (iVar1 = iVar3 + 0x38; iVar1 != param_3; iVar1 = iVar1 + 0x1c) {
          if (*(uint *)(iVar1 + 0x18) < 0x10) {
            iVar2 = iVar1 + 4;
          }
          else {
            iVar2 = *(int *)(iVar1 + 4);
          }
          iVar2 = FUN_000e0b20(0,iVar2,*(undefined4 *)(iVar1 + 0x14));
          if (iVar2 != 0) {
            iVar3 = iVar3 + 0x1c;
            FUN_0001f4f0(iVar1,0,0xffffffff);
          }
        }
        *param_1 = iVar3 + 0x1c;
        return;
      }
    }
  }
  *param_1 = param_3;
  return;
}
