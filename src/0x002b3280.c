/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35A118A2320FF272409F05AFB24FBF7FF2E5282D7BE39F3F979C75D12F5B50F9
 * Entry: 0x002b3280, Ghidra index: 9757, label: FUN_002b3280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b3280(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x1c);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 8);
    FUN_002c0fc0();
  }
  return;
}
