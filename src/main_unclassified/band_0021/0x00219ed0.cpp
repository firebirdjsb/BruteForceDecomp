/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F673EA3CCE0CFBFEDC10978B9070FD322E5F370926B7A172A427E0FCADC7A8B
 * Entry: 0x00219ed0, Ghidra index: 7505, label: FUN_00219ed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00219ed0(undefined4 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *in_EDX;
  
  fVar1 = *(float *)(in_ECX + 0x11c);
  if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x118);
    uVar3 = *(undefined4 *)(in_ECX + 0x114);
    *in_EDX = *(undefined4 *)(in_ECX + 0x110);
    in_EDX[1] = uVar3;
    in_EDX[2] = uVar2;
    *param_1 = *(undefined4 *)(in_ECX + 0x11c);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return (uint)(ushort)((ushort)(fVar1 < 0.0) << 8 | (ushort)isnan(fVar1) << 10 |
                       (ushort)(fVar1 == 0.0) << 0xe);
}
