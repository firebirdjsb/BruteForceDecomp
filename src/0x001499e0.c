/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1896FE06B75FD33C9A9DAA22240EE7E7CDC6E862FF4C6BBB6A33F9306909B2FB
 * Entry: 0x001499e0, Ghidra index: 4273, label: FUN_001499e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001499e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + -0x48) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    if ((*(byte *)(in_ECX + -0x3c) & 2) == 0) {
      return 1;
    }
  }
  else if (*(int *)(param_1 + 0x14) == 0x4e) {
    if ((*(byte *)(*(int *)(in_ECX + -0x1f0) + 0xc50) & 0x10) != 0) {
      return 1;
    }
    if ((*(byte *)(in_ECX + -0x188) & 1) != 0) {
      return 1;
    }
    if ((*(byte *)(in_ECX + -0x3c) & 2) == 0) {
      return 1;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 3)) {
      FUN_0010fed0();
    }
    FUN_0010fef0();
    (**(code **)(*(int *)(in_ECX + -0x1f8) + 0x144))(1);
    *(byte *)(in_ECX + -0x188) = *(byte *)(in_ECX + -0x188) & 0xbf;
    (**(code **)(*(int *)(in_ECX + -0x1f8) + 0x15c))();
    return 1;
  }
  uVar2 = FUN_00156e50(param_1);
  return uVar2;
}
