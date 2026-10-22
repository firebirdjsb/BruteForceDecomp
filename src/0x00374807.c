/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B824C931C7B5E57D4590DD86FF6A7DA32BA62E33D17B2C0519047B3A85C8EA88
 * Entry: 0x00374807, Ghidra index: 13432, label: FUN_00374807
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00374807(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *unaff_ESI;
  
  bVar2 = false;
  if ((((param_3 < 0x58) || (param_3 == 0x62)) || (param_3 == 0x72)) || (param_3 != 0x97)) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0x330;
    bVar2 = true;
  }
  iVar1 = *(int *)(param_1 + 0x160);
  *(int *)(param_1 + 0x160) = (uVar3 >> 4) + iVar1;
  if (bVar2) {
    *(int *)(param_1 + 0x144 + *(int *)(param_1 + 0x100) * 4) = iVar1;
    FUN_00379a01();
  }
  FUN_00379995();
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  *unaff_ESI = param_2;
  unaff_ESI[2] = param_3;
  unaff_ESI[3] = iVar1;
  *(undefined2 *)((int)unaff_ESI + 6) = 1;
  FUN_003747d7();
  return 1;
}
