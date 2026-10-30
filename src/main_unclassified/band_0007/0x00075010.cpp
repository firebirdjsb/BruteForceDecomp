/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3138AF391A68C8257C8C3A67E3257B6AD98E3A8708B5B542CDAED739809C058
 * Entry: 0x00075010, Ghidra index: 1340, label: FUN_00075010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00075410(uint *param_1);

int FUN_00075010(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *in_ECX;
  local_8 = 0;
  local_4 = 0;
  piVar1 = (int *)FUN_00075410(&local_c);
  return *piVar1 + 0x10;
}
