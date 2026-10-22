/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A304F7914232DB8A9A3D5EA24AB7BD80E5BA4EBABDCA89DE5A2647F588F997F7
 * Entry: 0x00031f00, Ghidra index: 321, label: FUN_00031f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00031f00(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  if ((*(byte *)(in_ECX + 0x109) & 2) != 0) {
    if ((in_ECX[0x13d] & 0x40U) == 0) {
      in_ECX[0x13d] = in_ECX[0x13d] | 0x40;
      FUN_0002f270(in_ECX + -0x10,0x3f400000,0x41000000,0);
    }
    if ((in_ECX[0x134] != 0) && (iVar1 = (**(code **)(*in_ECX + 0x130))(param_1), iVar1 != 0)) {
      return;
    }
  }
  if (((in_ECX[0xe1] & 0x100U) != 0) && (in_ECX[6] == 3)) {
    (**(code **)(*in_ECX + 0x2b0))(param_1);
    return;
  }
  (**(code **)(*in_ECX + 0xb0))(param_1);
  return;
}
