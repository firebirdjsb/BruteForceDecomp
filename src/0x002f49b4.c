/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D16B60BA209F0308B4E5F7BFB979CCBA8194D3CCD18318426A863EBD04FAF1EB
 * Entry: 0x002f49b4, Ghidra index: 10864, label: ResetEvent
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__ResetEvent(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = NtClearEvent(param_1);
  if (iVar1 < 0) {
    XapiSetLastNTError(iVar1);
  }
  return iVar1 >= 0;
}
