/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA5A013A5D47131AFE1622B25827CEC2628CA233A530EA6A100007971EC1DB58
 * Entry: 0x002f5bc0, Ghidra index: 10902, label: XLocateSignatureByName
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XLocateSignatureByName
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  XLocateSignatureByNameEx(param_1,param_2,param_3,&param_4,param_5,param_6);
  return;
}
