/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 14B97B6651C6984AEAEFB056D3FF636C704CF477227787CF0D2F8E86C89D51B9
 * Entry: 0x00353b88, Ghidra index: 13098, label: FUN_00353b88
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00353b88(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 0x34);
  uVar3 = -(uint)(piVar1 != (int *)(param_1 + 0x34)) & (uint)(piVar1 + -5);
  if (*(uint *)(param_1 + 0xb0) < *(uint *)(uVar3 + 0x20)) {
    uVar2 = 1;
  }
  else {
    FUN_00345541(0xfffffdff,0);
    if (*(short *)(uVar3 + 0x30) == 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    else {
      *(undefined2 *)(uVar3 + 0x30) = 0;
      FUN_00353621(param_1,uVar3,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}
