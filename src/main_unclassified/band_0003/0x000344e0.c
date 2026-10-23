/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2E2C3FBB623F959C6A697D176CB36A7E175B79353FA58A7FF5C3DF69B892B0A8
 * Entry: 0x000344e0, Ghidra index: 342, label: FUN_000344e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000344e0(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  
  if (in_ECX[0x180] == 0) {
    FUN_0003f0e0(1);
    if (((*(byte *)(in_ECX + 0xd4) & 1) != 0) && ((*(byte *)(in_ECX + 0xd4) >> 1 & 1) != 0)) {
      in_ECX[0xd5] = 0x40a00000;
      in_ECX[0xd3] = 0x40a00000;
      *(byte *)(in_ECX + 0xd4) = *(byte *)(in_ECX + 0xd4) & 0xf9 | 1;
      in_ECX[0x180] = 1;
    }
    uVar1 = (**(code **)(*in_ECX + 0xd0))(param_1);
    return uVar1;
  }
  if (in_ECX[0x180] != 1) {
    return 0;
  }
  if (((*(byte *)(in_ECX + 0xd4) & 1) != 0) && ((*(byte *)(in_ECX + 0xd4) >> 1 & 1) != 0)) {
    in_ECX[0xd5] = 0x40a00000;
    in_ECX[0xd3] = 0x40a00000;
    *(byte *)(in_ECX + 0xd4) = *(byte *)(in_ECX + 0xd4) & 0xf9 | 1;
    in_ECX[0x180] = 0;
  }
  FUN_0003f0e0(0);
  uVar1 = (**(code **)(*in_ECX + 0xd0))(param_1);
  return uVar1;
}
