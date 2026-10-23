/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 809866C26FFE6E3398215AF34FA0F34149B532F778BEDCFE5B205285D01BF110
 * Entry: 0x00101510, Ghidra index: 3240, label: FUN_00101510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float * FUN_00101510(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int local_10;
  int local_c;
  
  FUN_001013d0(&local_10);
  fVar1 = 48.0;
  if (48.0 <= (float)local_10) {
    fVar1 = (float)local_10;
  }
  fVar2 = 36.0;
  if (36.0 <= (float)local_c) {
    fVar2 = (float)local_c;
  }
  *param_2 = fVar1;
  param_2[1] = fVar2;
  return param_2;
}
