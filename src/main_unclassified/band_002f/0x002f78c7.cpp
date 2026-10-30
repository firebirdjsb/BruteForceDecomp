/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8D9F29108C91EB0BAD62A7EAD81B3D56E83ADFBFCFE50EB9607EFFA2CB8E9CE
 * Entry: 0x002f78c7, Ghidra index: 10931, label: XFreeSectionByHandle
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__XFreeSectionByHandle(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = XeUnloadSection(param_1);
  if (-1 >= iVar1) {
    XapiSetLastNTError(iVar1);
  }
  return -1 < iVar1;
}
