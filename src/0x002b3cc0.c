/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8EC695777DE4EF1C9E6389D84A07A1AF70D214CF5A961E877EEB5DFA8A3374F
 * Entry: 0x002b3cc0, Ghidra index: 9774, label: FUN_002b3cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3cc0(float *param_1,float *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 1);
  *param_1 = *param_1 + *param_2;
  *(ulonglong *)(param_1 + 1) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20) +
                (float)((ulonglong)uVar1 >> 0x20),(float)*(undefined8 *)(param_1 + 1) + (float)uVar1
               );
  return;
}
