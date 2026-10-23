/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6D9855E1A7A7E8A60A33D8158ADA6782563BF0A5ED3A4CBD995AC1494D83B17
 * Entry: 0x00342834, Ghidra index: 12692, label: FUN_00342834
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00342834(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_b0 [116];
  undefined1 local_3c [10];
  undefined1 local_32 [26];
  uint local_18 [5];
  
  FUN_0034506e(local_3c);
  XcSHAInit(local_b0);
  XcSHAUpdate(local_b0,local_32,6);
  XcSHAFinal(local_b0,local_18);
  uVar1 = 0xc02;
  for (iVar2 = *(int *)(param_1 + 0x14) - (uint)(*(short *)(param_1 + 0x3c) != 0xc02); iVar2 != 0;
      iVar2 = iVar2 - (uint)(uVar1 != *(ushort *)(param_1 + 0x3c))) {
    if (4999 < uVar1) {
      uVar1 = uVar1 - 5000;
    }
    uVar1 = (uVar1 + (local_18[0] & 0x7fff) + 1) % 0xa97f + 5000;
  }
  *(short *)(param_1 + 0x3e) = (short)uVar1;
  return;
}
