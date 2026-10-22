/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E727117BEB6C4954111E7F0757401CAB4E2E88C97BBDBCB7221986BBD97B5217
 * Entry: 0x00354393, Ghidra index: 13109, label: FUN_00354393
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00354393(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_0035308e(param_3,param_4,&param_4);
  bVar3 = false;
  if (iVar1 != 0) {
    uVar2 = *param_2;
    uVar2 = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8;
    *(uint *)(param_1 + 0xc0) = uVar2;
    *(uint *)(param_1 + 0xc4) = uVar2 + 1;
    *(undefined4 *)(param_1 + 0xbc) = param_4;
    if ((*(byte *)((int)param_2 + 9) & 0x10) == 0) {
      *(undefined1 *)(param_1 + 0x7c) = 3;
      iVar1 = FUN_00354267(param_1,1);
    }
    else {
      FUN_00353d20(param_1,param_2);
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 0x20000;
      iVar1 = 0;
    }
    bVar3 = -1 < iVar1;
  }
  return bVar3;
}
