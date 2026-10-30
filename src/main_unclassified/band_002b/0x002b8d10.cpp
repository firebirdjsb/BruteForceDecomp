/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51CED97F607CBAA8833A6E2C7597C524B12F22852A55832D95D6C575CA7AC49D
 * Entry: 0x002b8d10, Ghidra index: 9862, label: FUN_002b8d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b8d10(float *param_1,float *param_2,float param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 1);
  *param_1 = *param_1 + *param_2 * param_3;
  *(ulonglong *)(param_1 + 1) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20) +
                (float)((ulonglong)uVar1 >> 0x20) * param_3,
                (float)*(undefined8 *)(param_1 + 1) + (float)uVar1 * param_3);
  return;
}
