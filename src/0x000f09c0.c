/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8570F389FE03B867075321CAEDDA3EC02D9C86E35F14A1A1AAC73412556D5B4
 * Entry: 0x000f09c0, Ghidra index: 3005, label: FUN_000f09c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000f09c0(void)

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
  *(undefined4 *)((int)unaff_ESI + 0x2d) = 0xc8ffffff;
                    /* WARNING: Could not recover jumptable at 0x000f0a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_ESI + 0x34))();
  return;
}
