/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B23AA6B5F4A7DFDB3D9C6D7B65CF89DDD1D87B53F79C16F5B9D26CFF5B6DBAE2
 * Entry: 0x002c0cb0, Ghidra index: 10016, label: FUN_002c0cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c0cb0(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  *(uint *)(unaff_ESI + 0x14) = *(uint *)(unaff_ESI + 0x14) & 0xffd7ffff | 0x140000;
  fVar1 = (float10)FUN_002bf0f0(param_1);
  fVar2 = (float10)FUN_002bf0f0(param_2);
  *(float *)(unaff_ESI + 0x5c) = (float)(fVar2 + (float10)(float)fVar1);
  return;
}
