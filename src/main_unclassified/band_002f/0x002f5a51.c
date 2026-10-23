/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8458F17C0CFAE4918E1B2ABB3260C92B1BCC20AE2A8607A0082A34DD9CDEAB6F
 * Entry: 0x002f5a51, Ghidra index: 10900, label: XLocateSignatureByIndex
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XLocateSignatureByIndex(int param_1,uint param_2,int *param_3,uint *param_4)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0xc);
  if (param_2 < puVar1[1]) {
    *param_3 = puVar1[param_2 * 2 + *puVar1 * 5 + 4] + *puVar1 * 0x14 + 0xc + (int)puVar1;
    *param_4 = puVar1[param_2 * 2 + *puVar1 * 5 + 3];
  }
  else {
    if (*puVar1 <= param_2 - puVar1[1]) {
      SetLastError(0x490);
      return 0;
    }
    *param_3 = (int)(puVar1 + param_2 * 5 + 3);
    *param_4 = 0x14;
  }
  return 1;
}
