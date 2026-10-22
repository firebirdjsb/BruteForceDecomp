/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B1F1C47278E33A1C708001B4462428E66FB3AE33C69A8E89FA7188760C1FE46
 * Entry: 0x0014bc50, Ghidra index: 4325, label: FUN_0014bc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014bc50(void)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = 10;
  do {
    piVar3 = in_EAX + 4;
    piVar2 = (int *)in_EAX[3];
    if (piVar2 != (int *)*piVar3) {
      do {
        if ((int *)*piVar2 != (int *)0x0) {
          (**(code **)(*(int *)*piVar2 + 0x38))();
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != (int *)*piVar3);
    }
    iVar1 = iVar1 + -1;
    in_EAX = piVar3;
  } while (iVar1 != 0);
  return;
}
