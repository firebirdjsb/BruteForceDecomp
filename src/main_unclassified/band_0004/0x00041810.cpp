/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90191C84DE961FBA2AE7CFF02ED73322880131F7AE7893B488325527735E413F
 * Entry: 0x00041810, Ghidra index: 499, label: FUN_00041810
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00012680(int32_t unaff_ESI, uint32_t in_EAX);

void FUN_00041810(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int unaff_EBX;
  undefined1 local_4 [4];
  
  FUN_00012680();
  iVar3 = *(int *)(in_EAX + 4);
  iVar2 = *(int *)(in_EAX + 8);
  if (iVar3 != iVar2) {
    while (piVar1 = (int *)(iVar3 + 0x14), iVar3 = iVar3 + 0x18,
          *piVar1 != *(int *)(*(int *)(*(int *)(unaff_EBX + 4) + 4) + 0xc)) {
      if (iVar3 == iVar2) {
        return;
      }
    }
    if (iVar3 != iVar2) {
      FUN_00042b10(local_4,iVar3,iVar2);
    }
  }
  return;
}
