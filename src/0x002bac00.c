/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69BED372EBD91461A6EF621AEBF421112C62ED172C014DB6F23500AE06CD3C25
 * Entry: 0x002bac00, Ghidra index: 9890, label: FUN_002bac00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bac00(int param_1)

{
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_10;
  undefined8 local_c;
  
  FUN_002bae30(param_1);
  *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + local_10;
  *(ulonglong *)(param_1 + 0x80) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x80) >> 0x20) +
                (float)((ulonglong)local_c >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x80) + (float)local_c);
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) + local_20;
  *(ulonglong *)(param_1 + 0x90) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
                (float)((ulonglong)local_1c >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x90) + (float)local_1c);
  return;
}
