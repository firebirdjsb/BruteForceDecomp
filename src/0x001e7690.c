/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 25298E702A2AD96E20324435203EDC9CFBAF581A863010DB0D205C394E15256D
 * Entry: 0x001e7690, Ghidra index: 6811, label: FUN_001e7690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e7690(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  int *piVar2;
  
  FUN_001f28c0(param_1);
  piVar2 = (int *)(in_EAX + 0x21c);
  iVar1 = 4;
  do {
    if (*(char *)(*(int *)piVar2[-4] + 4) != '\x01') {
      FUN_001e7a40(((int *)piVar2[-4])[1]);
    }
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))(param_1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
