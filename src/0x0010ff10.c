/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1606A535CE11C25A774F74AE672E79186A4C260F32370794D8849C616416973
 * Entry: 0x0010ff10, Ghidra index: 3546, label: FUN_0010ff10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0010ff10(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)(param_1 + 1);
  fVar2 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
  return (float10)(fVar1 * fVar1 + fVar2 * fVar2 + *param_1 * *param_1);
}
