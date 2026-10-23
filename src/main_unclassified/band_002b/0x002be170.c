/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DCADDB0BC5A88FB9D1F363F91958C4563015DA250D1D66C35DEF860C18202C2
 * Entry: 0x002be170, Ghidra index: 9968, label: FUN_002be170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002be170(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  
  *in_EAX = in_ECX;
  in_EAX[6] = 0;
  in_EAX[0x6a] = 0;
  in_EAX[2] = 0x80000000;
  in_EAX[3] = 0x402375c2;
  in_EAX[4] = 0x40000000;
  in_EAX[5] = 0x3fd33333;
  return;
}
