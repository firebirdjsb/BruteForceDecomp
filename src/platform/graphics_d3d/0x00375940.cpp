/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D045256A2F5BF519CEDB7711D8C77F77D5C795358D5983432FE39E5BCB149417
 * Entry: 0x00375940, Ghidra index: 13443, label: FUN_00375940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only callee-draft declaration; x87/guest ABI_UNVERIFIED. */
extern float10 FUN_003758d0(float param_1);
float10 FUN_00375940(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_003758d0(param_1 * param_1);
  return (float10)(float)((uint)param_1 & 0x80000000 | (uint)(float)fVar1);
}
