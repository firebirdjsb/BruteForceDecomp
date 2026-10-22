/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A6C992248B0162DC47CEEAF6D828FB725B576B48C35238EBB928237835F9172
 * Entry: 0x0013ebc0, Ghidra index: 4038, label: FUN_0013ebc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_0013ebc0(float param_1)

{
  undefined1 uVar1;
  int unaff_ESI;
  
  uVar1 = 0;
  if ((*(byte *)(*(int **)(unaff_ESI + 0x18) + 0x1c) & 1) != 0) {
    FUN_0010e3e0();
    return 1;
  }
  if ((*(float *)(unaff_ESI + 0x20) < *(float *)(unaff_ESI + 0x24)) &&
     (*(float *)(unaff_ESI + 0x24) < param_1 + *(float *)(unaff_ESI + 0x20))) {
    (**(code **)(**(int **)(unaff_ESI + 0x18) + 0x50))(unaff_ESI + 0x34);
    uVar1 = 1;
  }
  param_1 = param_1 + *(float *)(unaff_ESI + 0x20);
  *(float *)(unaff_ESI + 0x20) = param_1;
  if (*(float *)(unaff_ESI + 0x30) <= param_1) {
    FUN_0010e3e0();
  }
  return uVar1;
}
