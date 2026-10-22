/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46787C51B8D657795FE0851722014815CA5DAFA0E19A48DE47C07BDC2B23316E
 * Entry: 0x00358ff0, Ghidra index: 13162, label: FUN_00358ff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00358ff0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_0035b1a0();
    if (*(int *)(param_1 + 0x27c) != 0) {
      *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + (iVar1 - *(int *)(param_1 + 0x27c));
      *(undefined4 *)(param_1 + 0x27c) = 0;
    }
    FUN_00358d90();
    if ((param_2 == 0) && (*(int *)(param_1 + 0xfc) != 0)) {
      *(undefined4 *)(param_1 + 0x280) = 0;
      *(undefined4 *)(param_1 + 0x338) = 0;
    }
    *(int *)(param_1 + 0xfc) = param_2;
    if (*(int *)(param_1 + 0x2f8) != 0) {
      iVar1 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x300) + iVar1;
        (**(code **)(iVar2 + 0x14))(iVar2,param_2);
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 0x178;
      } while (uVar3 < *(uint *)(param_1 + 0x2f8));
    }
    if ((*(int *)(param_1 + 0x270) != 0) && (*(int *)(param_1 + 0x2f8) != 0)) {
      FUN_00356f00(param_1);
    }
    return *(undefined4 *)(param_1 + 0xfc);
  }
  return 0;
}
