/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1B61D3C2EDF13FB27A534CA47C99C0EFD4DD92B7F48C0E3670FD6F04697917A
 * Entry: 0x00205ac0, Ghidra index: 7291, label: FUN_00205ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
ushort FUN_00205ac0(float param_1,float param_2)

{
  float fVar1;
  float *in_EAX;
  
  fVar1 = *in_EAX;
  param_1 = param_1 + *in_EAX;
  *in_EAX = param_1;
  if (fVar1 <= param_2) {
    if (fVar1 >= param_2) {
      return (ushort)(fVar1 < param_2) << 8 | (ushort)(isnan(fVar1) || isnan(param_2)) << 10 |
             (ushort)(fVar1 == param_2) << 0xe;
    }
    if (param_2 <= param_1) {
      return 1;
    }
  }
  else if (param_1 < param_2 != (param_1 == param_2)) {
    return 1;
  }
  return 0;
}
