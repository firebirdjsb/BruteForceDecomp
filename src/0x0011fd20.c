/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E107768BCF2531F1AB1B6287E423D8C08606400F30C5D626475DDFA431154CB
 * Entry: 0x0011fd20, Ghidra index: 3638, label: FUN_0011fd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011fd20(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int *piVar3;
  
  FUN_0011fcd0();
  FUN_0011fcd0();
  FUN_0011fcd0();
  piVar1 = *(int **)(in_EAX + 0x2c0);
  if (piVar1 != (int *)0xffffffff) {
    piVar2 = *(int **)(*(int *)(in_EAX + 500) + 0xc);
    piVar3 = *(int **)(*(int *)(in_EAX + 500) + 8);
    if (piVar3 != piVar2) {
      do {
        if ((int *)*piVar3 == piVar1) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar2);
      if ((piVar3 != piVar2) && (*piVar1 == 1)) {
        FUN_002668e0();
      }
    }
    *(undefined4 *)(in_EAX + 0x2c0) = 0xffffffff;
  }
  return;
}
