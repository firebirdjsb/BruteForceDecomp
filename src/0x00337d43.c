/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D498415AEA9F64821EDA72F0E430A647EF847E28A066AB7FB394E512B88F039A
 * Entry: 0x00337d43, Ghidra index: 12468, label: FUN_00337d43
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00337d43(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1 + 100;
  iVar1 = FUN_00330c3e(iVar2);
  if (iVar1 != 0) {
    if (iVar1 < 0) {
      if (((*(code **)(param_1 + 0xe8) != (code *)0x0) &&
          (iVar2 = (**(code **)(param_1 + 0xe8))(iVar1,param_1), iVar2 == 0x15fffe)) &&
         (iVar1 = FUN_0033e833(param_1), -1 < iVar1)) {
        *(undefined4 *)(param_1 + 0x14) = 1;
        uVar3 = XAPILIB__GetTickCount();
        *(undefined4 *)(param_1 + 0x20) = uVar3;
        return 0;
      }
    }
    else {
      FUN_0033f147(*(undefined4 *)(param_1 + 0x74),param_1 + 0x9c,1,0,*(undefined4 *)(param_1 + 8),
                   iVar2);
      iVar1 = FUN_0033f0ca(iVar2,1);
      if (-1 < iVar1) {
        *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 0x20;
        *(undefined4 *)(param_1 + 0x14) = 2;
        return 0;
      }
    }
    *(int *)(param_1 + 0xc) = iVar1;
    *(undefined4 *)(param_1 + 0x14) = 6;
  }
  return 0;
}
