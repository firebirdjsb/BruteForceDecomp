/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0CA82DE51CEF3C0FECCFE1F37F315A1BDDB20495322DAA52777AF3486DBAB245
 * Entry: 0x00373aa0, Ghidra index: 13412, label: FUN_00373aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00373aa0(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)log2((float10)param_1);
  return (float10)0.6931471805599453 * fVar1;
}
