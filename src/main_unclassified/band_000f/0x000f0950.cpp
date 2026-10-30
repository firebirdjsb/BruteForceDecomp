/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11343D509C3A0B403069330B1F943FB35A9C2E239E5EE4AC310E9029050FB78D
 * Entry: 0x000f0950, Ghidra index: 3004, label: FUN_000f0950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000f0950(void)

{
  int *piVar1;
  undefined4 in_EAX;
  int *piVar2;
  int *unaff_ESI;
  
  piVar2 = (int *)FUN_000a7770(in_EAX);
  piVar1 = (int *)unaff_ESI[0x1f];
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      unaff_ESI[0x1f] = 0;
    }
    unaff_ESI[0x1f] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  if ((*(byte *)(unaff_ESI + 10) & 4) == 0) {
    *(byte *)(unaff_ESI + 10) = *(byte *)(unaff_ESI + 10) | 4;
    (**(code **)(*unaff_ESI + 0x28))();
  }
  *(undefined4 *)((int)unaff_ESI + 0x2d) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x000f09b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_ESI + 0x34))();
  return;
}
