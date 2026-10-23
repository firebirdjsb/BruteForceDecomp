/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 900326B4EF0B4286BE302C98781794CCFF587A3AC89339EF2C1F606372DA8659
 * Entry: 0x002f5738, Ghidra index: 10896, label: FUN_002f5738
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f5738(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_294 [512];
  undefined1 local_94 [116];
  undefined1 local_20 [20];
  undefined1 local_c [4];
  uint local_8;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_3 + 0x24);
  }
  XAPILIB__XComputeContentSignatureKey(param_2,local_20);
  uVar3 = 0x6c;
  if (*(uint *)(param_3 + 0x18) < 0x6c) {
    uVar3 = *(uint *)(param_3 + 0x18);
  }
  FUN_002f314a(local_20,0x14,local_94);
  XcSHAUpdate(local_94,param_3 + 0x14,uVar3 - 0x14);
  if ((param_1 != 0) && (0x6c < *(uint *)(param_3 + 0x18))) {
    for (uVar3 = *(uint *)(param_3 + 0x18) - 0x6c; uVar3 != 0; uVar3 = uVar3 - uVar2) {
      uVar2 = 0x200;
      if (uVar3 < 0x200) {
        uVar2 = uVar3;
      }
      iVar1 = NtReadFile(param_1,0,0,0,local_c,local_294,uVar2,0);
      if (iVar1 < 0) {
LAB_002f5807:
        XAPILIB__XapiSetLastNTError(iVar1);
        return 0;
      }
      if (local_8 != uVar2) {
        iVar1 = -0x3fffffef;
        goto LAB_002f5807;
      }
      XcSHAUpdate(local_94,local_294,uVar2);
    }
  }
  FUN_002f31b1(local_94,local_20,0x14,param_4);
  return 1;
}
