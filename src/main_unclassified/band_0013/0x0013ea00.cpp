/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B662DFBA7EF6624A41D9AF73BC1DEFF46529B3E907715C440B571785E9FA8755
 * Entry: 0x0013ea00, Ghidra index: 4033, label: FUN_0013ea00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0013ea00(void)

{
  char cVar1;
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x1c) & 1) == 0) || (*(int *)(in_ECX + 0x18) == 0)) {
    cVar1 = FUN_0013ea90();
    if (cVar1 != '\0') {
      cVar1 = FUN_0013eb20();
      if (cVar1 != '\0') {
        FUN_0010e470();
        return 2;
      }
    }
  }
  else if ((*(byte *)(*(int *)(in_ECX + 0x18) + 0x70) & 1) != 0) {
    FUN_0010e3e0();
  }
  return 0;
}
