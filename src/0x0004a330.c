/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB256D86921400B468873A6E2EB4ECA9B5D2EA4365372A913C59164252378C5E
 * Entry: 0x0004a330, Ghidra index: 596, label: FUN_0004a330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0004a330(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  iVar1 = FUN_000120f0();
  if (iVar1 == 0) {
    return (float10)0.0;
  }
  if (*(int *)(iVar1 + 0x59c) != 0) {
    piVar2 = (int *)FUN_0005bca0();
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)FUN_000120f0();
      if (piVar2 != piVar3) {
        iVar1 = (**(code **)(*piVar2 + 0xf4))();
        if (iVar1 != 0) {
          uVar4 = (**(code **)(*piVar2 + 0xf4))();
          fVar5 = (float10)FUN_0004a280(uVar4);
          return fVar5;
        }
      }
    }
  }
  return (float10)0.0;
}
