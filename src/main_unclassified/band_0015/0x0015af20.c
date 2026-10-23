/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B655D91D0E9970EA3C2218B943710C0DA27858703187FDA2A999BB24B26D43DC
 * Entry: 0x0015af20, Ghidra index: 4520, label: FUN_0015af20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0015af20(float param_1)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  undefined4 uVar3;
  int *piVar4;
  
  if (((*(byte *)(in_EAX + 0x70) & 0x40) != 0) && (-1 < (char)*(byte *)(in_EAX + 0x70))) {
    *(float *)(in_EAX + 0xd4) = *(float *)(in_EAX + 0xd4) - param_1;
    if (*(undefined4 **)(in_EAX + 0x19c) == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)**(undefined4 **)(in_EAX + 0x19c);
    }
    piVar1 = *(int **)(in_EAX + 0x19c);
    do {
      piVar2 = piVar4;
      if (piVar2 == piVar1) {
        if (*(float *)(in_EAX + 0xd4) < 0.0 != (*(float *)(in_EAX + 0xd4) == 0.0)) {
          *(undefined4 *)(in_EAX + 0xd4) = 0;
          uVar3 = FUN_0015ae30(in_EAX);
          piVar4 = (int *)(*(int *)(in_EAX + 8) + 0xc68);
          *piVar4 = *piVar4 + 1;
          return uVar3;
        }
        return 1;
      }
      piVar4 = (int *)*piVar2;
    } while (((float)piVar2[4] < *(float *)(in_EAX + 0xd4)) ||
            (FUN_0015ac90(in_EAX,piVar2 + 2), piVar2 == *(int **)(in_EAX + 0x19c)));
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar2);
  }
  return 1;
}
