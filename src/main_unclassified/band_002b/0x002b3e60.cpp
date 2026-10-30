/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C046A8D9C3832CBC34F31651612C806541EAB290BA348CD2B3EE787BA9EFDAF
 * Entry: 0x002b3e60, Ghidra index: 9778, label: FUN_002b3e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3e60(float *param_1,float *param_2,float *param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 1);
  uVar2 = *(undefined8 *)(param_2 + 1);
  *param_1 = *param_2 + *param_3 * param_4;
  *(ulonglong *)(param_1 + 1) =
       CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar1 >> 0x20) * param_4,
                (float)uVar2 + (float)uVar1 * param_4);
  return;
}
