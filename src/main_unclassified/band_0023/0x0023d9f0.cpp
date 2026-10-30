/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6B9DC80EE4FFFAAE405F8FF5BAE1EAB61C2460DE5DBCAB6378062D705114374
 * Entry: 0x0023d9f0, Ghidra index: 7963, label: FUN_0023d9f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_002ea01d(0x38);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0026ab50(iVar1,in_EAX,param_2,param_3,param_4);
  }
  iVar1 = in_EAX;
  if (*(int *)(in_EAX + 0x10) != 0) {
    iVar1 = *(int *)(in_EAX + 8);
  }
  if ((iVar1 != 0) && (iVar1 != -1)) {
    if (*(int *)(in_EAX + 0x10) != 0) {
      in_EAX = *(int *)(in_EAX + 8);
    }
    *(uint *)(in_EAX + 0x44) = *(uint *)(in_EAX + 0x44) | 0x240;
  }
  FUN_0026add0(uVar2);
  puVar3 = (undefined4 *)FUN_002ea01d(8);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 2;
    puVar3[1] = uVar2;
  }
  FUN_001611d0();
  return;
}
