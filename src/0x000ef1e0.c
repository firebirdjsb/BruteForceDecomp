/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25175C4AF720EC5436EB0FC8D81D6115DC318AC3699FAA841A99888595A56438
 * Entry: 0x000ef1e0, Ghidra index: 2970, label: FUN_000ef1e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ef1e0(void)

{
  int iVar1;
  int *in_EAX;
  int *unaff_ESI;
  int local_4;
  
  iVar1 = *in_EAX;
  *(int *)((int)unaff_ESI + 0x29) = iVar1;
  local_4 = iVar1;
  FUN_000ee5c0(&local_4,0x3f000000);
  unaff_ESI[0xe] = iVar1;
  unaff_ESI[0xf] = local_4;
  (**(code **)(*unaff_ESI + 0x34))();
  return;
}
