/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8AC44A5B1B8858C01C7C0EB46140FC659FBC81450314F401EC8C0E754404B4E
 * Entry: 0x002f7900, Ghidra index: 10933, label: FUN_002f7900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002f7900(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002f783f(param_1);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = XAPILIB__XFreeSectionByHandle(iVar1);
  }
  return uVar2;
}
