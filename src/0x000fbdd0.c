/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 504C558632518B41514C7EB5332A2B227E72594CEF9A56237751FBB5A865BA7E
 * Entry: 0x000fbdd0, Ghidra index: 3143, label: FUN_000fbdd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fbdd0(void)

{
  int iVar1;
  int *in_EAX;
  int *unaff_ESI;
  int local_4;
  
  if (unaff_ESI != (int *)0x0) {
    iVar1 = *in_EAX;
    *(int *)((int)unaff_ESI + 0x29) = iVar1;
    local_4 = iVar1;
    FUN_000ee5c0(&local_4,0x3f000000);
    unaff_ESI[0xf] = local_4;
    unaff_ESI[0xe] = iVar1;
    (**(code **)(*unaff_ESI + 0x34))();
  }
  return;
}
