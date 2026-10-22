/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 996DD648E728239492C65639362C67D32111B24036A970CEDD7106E2F49955A8
 * Entry: 0x002816b0, Ghidra index: 9046, label: FUN_002816b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002816b0(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2824);
  for (iVar2 = *(int *)(iVar1 + 8 + *(int *)(iVar1 + 4 + in_EAX * 0xc) * 0xc); iVar2 != 0;
      iVar2 = *(int *)(iVar1 + 8 + iVar2 * 0xc)) {
  }
  return;
}
