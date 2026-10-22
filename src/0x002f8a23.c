/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24BF173785CD73E9156F45F9975C1DE316BAF77857B94F7D2BAF186E66877B27
 * Entry: 0x002f8a23, Ghidra index: 10955, label: XapiFormatObjectAttributes
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XapiFormatObjectAttributes(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_ESI;
  
  RtlInitAnsiString(param_2,param_3);
  unaff_ESI[1] = param_2;
  *unaff_ESI = 0xfffffffc;
  unaff_ESI[2] = 0x80;
  return;
}
