/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DCCAF6EE9811117A77304DBD09E6C0FE251E1B9C039688E342A897B150850325
 * Entry: 0x00319a70, Ghidra index: 12241, label: FUN_00319a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00319a70(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ROUND((float10)3.321928 * (float10)((float)param_1 * 0.0005));
  fVar2 = (float10)fscale((float10)1,fVar1);
  fVar1 = (float10)f2xm1((float10)3.321928 * (float10)((float)param_1 * 0.0005) -
                         (float10)(float)fVar1);
  return (float10)(float)((fVar1 + (float10)1.0) * fVar2);
}
