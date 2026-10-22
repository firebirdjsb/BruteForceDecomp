/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4D57E5987747AE15E4C7E2EE47216787269786A133E64BF1897627B3559DF30D
 * Entry: 0x001e9e80, Ghidra index: 6866, label: FUN_001e9e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e9e80(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_30 [4];
  undefined2 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = (param_2 - param_1 >> 5) - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar1) {
    iVar2 = iVar1 * 0x20 + param_1;
    do {
      uVar3 = *(undefined4 *)(iVar2 + -0x20);
      uStack_14 = param_3;
      iVar2 = iVar2 + -0x20;
      local_18 = 7;
      local_1c = 0;
      iVar1 = iVar1 + -1;
      local_2c = 0;
      FUN_00087940(local_30,0,0xffffffff);
      FUN_001e9f80(param_1,iVar1,uVar3);
    } while (0 < iVar1);
  }
  return;
}
