/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A7B414C734B524ED73EE8AA8B5A14F084B4F399E3D3AF674DB17217C8BC1DDA
 * Entry: 0x0011e7c0, Ghidra index: 3631, label: FUN_0011e7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee-draft-matched declaration for C++17 name lookup only; Xbox ABI_UNVERIFIED. */
extern int FUN_00072010(int param_1,float param_2);
float10 FUN_0011e7c0(int param_1,float param_2)

{
  float fVar1;
  
  if (param_2 <= -1.0471976) {
    param_2 = -1.0471976;
  }
  if (1.0471976 <= param_2) {
    param_2 = 1.0471976;
  }
  fVar1 = *(float *)(param_1 + 0x5f4);
  *(float *)(param_1 + 0x5f4) = param_2;
  FUN_00072010(param_1 + 0x5bc,param_2 - fVar1);
  return (float10)*(float *)(param_1 + 0x5f4);
}
