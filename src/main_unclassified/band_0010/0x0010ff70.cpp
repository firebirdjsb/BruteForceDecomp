/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E2F485A0463B14D372F67262F4472849135A8071C5CD3556225FA2147C74501
 * Entry: 0x0010ff70, Ghidra index: 3548, label: FUN_0010ff70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010ff70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  *(byte *)(in_EAX + 0x225) = *(byte *)(in_EAX + 0x225) | 2;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *(undefined4 *)(in_EAX + 0x2e8) = *in_ECX;
  *(undefined4 *)(in_EAX + 0x2ec) = uVar2;
  *(undefined4 *)(in_EAX + 0x2f0) = uVar1;
  uVar1 = in_EDX[2];
  uVar2 = in_EDX[1];
  *(undefined4 *)(in_EAX + 0x2dc) = *in_EDX;
  *(undefined4 *)(in_EAX + 0x2e0) = uVar2;
  *(undefined4 *)(in_EAX + 0x2e4) = uVar1;
  return;
}
