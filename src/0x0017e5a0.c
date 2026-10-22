/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9AF7E13B8FB2A5B1D8C527E8B6DE2E9BE4155AF11C6F559AB68F8650F8A284E
 * Entry: 0x0017e5a0, Ghidra index: 5104, label: FUN_0017e5a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0017e5a0(void)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(in_EAX + 4);
  if ((uVar3 != 0) && (FUN_0017e6a0(), uVar3 != 0)) {
    iVar2 = in_EAX + 0x2c;
    uVar1 = uVar3;
    do {
      FUN_00052db0(iVar2);
      iVar2 = iVar2 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return uVar3;
}
