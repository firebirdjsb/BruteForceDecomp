/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 163AF090935B6F68AEFC30294D55D15AE3D9508833481E679B90835BACE40251
 * Entry: 0x00317e2d, Ghidra index: 12189, label: FUN_00317e2d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00317e2d(void)

{
  int iVar1;
  int *in_ECX;
  int *local_c;
  int *local_8;
  
  local_c = in_ECX;
  local_8 = in_ECX;
  KeQuerySystemTime(&local_c);
  if ((*(ushort *)((int)in_ECX + 0x12) & 0x8001) == 0x8001) {
    iVar1 = in_ECX[0x21] + (uint)(0xffb3b4bf < (uint)in_ECX[0x20]);
    if ((iVar1 <= (int)local_8) &&
       ((iVar1 < (int)local_8 || ((int *)(in_ECX[0x20] + 5000000U) <= local_c)))) {
      FUN_00317d44();
    }
  }
  else {
    (**(code **)(*in_ECX + 0x1c))(0);
  }
  return;
}
