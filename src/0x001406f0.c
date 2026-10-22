/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEEBFC819EB2D19BF43C04E79769D7F3039CED9F67AA671E2AE71EAF314A33F4
 * Entry: 0x001406f0, Ghidra index: 4080, label: FUN_001406f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001406f0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_001370f0(in_EAX,param_1,param_2,1);
  if (iVar1 != 0) {
    iVar1 = FUN_002ea01d(0x48);
    if (iVar1 != 0) {
      iVar2 = FUN_0013f3a0();
    }
    if (*(int *)(iVar2 + 0x10) != param_2) {
      FUN_0008f6a0(param_2);
    }
    FUN_001377b0(local_10);
    *(undefined4 *)(iVar2 + 4) = param_3;
    *(byte *)(iVar2 + 0x44) =
         *(byte *)(iVar2 + 0x44) ^
         ((byte)(*(uint *)(in_EAX + 0x54) >> 1) ^ *(byte *)(iVar2 + 0x44)) & 1;
    *(undefined4 *)(iVar2 + 8) = 0x42700000;
    FUN_0013f7b0(iVar2);
  }
  FUN_00137dc0();
  return;
}
