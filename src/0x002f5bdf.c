/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59278B2FFE086A43C9042DBBDFDF65741874B142D17BAA5090CA00AECEE1B126
 * Entry: 0x002f5bdf, Ghidra index: 10903, label: XCalculateContentSignature
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
XAPILIB__XCalculateContentSignature(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  undefined1 local_78 [116];
  
  if (param_3 != 0) {
    if (*param_4 < 0x14) {
      SetLastError(0x7a);
      return 0;
    }
    XcSHAInit(local_78);
    XcSHAUpdate(local_78,param_1,param_2);
    XcSHAFinal(local_78,param_3);
  }
  *param_4 = 0x14;
  return 1;
}
