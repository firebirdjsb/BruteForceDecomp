/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F652B964582F43382DBC1848428776CE90A7D6FA6661A3E150CC7F76EE4DCE5A
 * Entry: 0x002bf150, Ghidra index: 9993, label: FUN_002bf150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bf150(float *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0x3f;
  *param_1 = param_2 * 0.1;
  param_1[1] = param_2 * 0.9 + *param_1;
  param_1[0x42] = param_2 * 0.0 + param_1[1];
  iVar1 = 0x104;
  do {
    iVar2 = iVar1 + -4;
    *(float *)(iVar1 + (int)param_1) =
         (float)local_8 * 0.015625 * (param_1[0x42] - param_1[1]) + param_1[1];
    local_8 = local_8 + -1;
    iVar1 = iVar2;
  } while (7 < iVar2);
  param_1[0x43] = param_2 + param_1[0x42];
  param_1[0x44] = param_2 * 0.3 + param_1[0x43];
  param_1[0x45] = SQRT((param_1[0x44] - param_1[1]) * 19.62);
  param_1[0x46] = param_2 * 0.01;
  param_1[0x47] = param_2 * 2.5 + param_1[0x43];
  param_1[0x48] = param_2 * 20.0 + param_1[0x43];
  param_1[0x4a] = param_2 + param_2;
  param_1[0x49] = param_1[1] * 0.1;
  return;
}
