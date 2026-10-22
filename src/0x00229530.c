/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A9D87E0B4F65290ACFFEA7C326EB4ADE34E63862AF6C4F630E75558D57B9F77
 * Entry: 0x00229530, Ghidra index: 7669, label: FUN_00229530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00229530(int param_1)

{
  int in_ECX;
  
  FUN_0022b0f0(param_1);
  *(undefined4 *)(in_ECX + 0x3ec) = *(undefined4 *)(param_1 + 0x344);
  *(undefined4 *)(in_ECX + 0x3f0) = *(undefined4 *)(param_1 + 0x350);
  *(undefined4 *)(in_ECX + 0x3f4) = *(undefined4 *)(param_1 + 0x354);
  *(float *)(in_ECX + 0x3f8) = *(float *)(param_1 + 0x348) * 0.017453292;
  *(float *)(in_ECX + 0x3fc) = *(float *)(param_1 + 0x34c) * 0.017453292;
  *(float *)(in_ECX + 0x400) = *(float *)(param_1 + 0x358) * 0.017453292;
  *(undefined4 *)(in_ECX + 0x404) = *(undefined4 *)(param_1 + 0x35c);
  *(undefined4 *)(in_ECX + 0x408) = *(undefined4 *)(param_1 + 0x360);
  *(undefined4 *)(in_ECX + 0x40c) = *(undefined4 *)(param_1 + 0x364);
  return;
}
