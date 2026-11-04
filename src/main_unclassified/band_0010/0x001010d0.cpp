/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05117FF33FC68F3F829829C30AFAA8986E35C869EA44EF8D42283427DEDF6F32
 * Entry: 0x001010d0, Ghidra index: 3234, label: FUN_001010d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched forward declaration only; original x86 ABI_UNVERIFIED. */
extern void FUN_000ef330(undefined4 param_1);
void FUN_001010d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_EAX;
  int *piVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(in_EAX + 0x78);
  for (piVar3 = *(int **)(in_EAX + 0x74); piVar3 != piVar1; piVar3 = piVar3 + 1) {
    puVar2 = *(undefined4 **)(*piVar3 + 0x58);
    for (puVar4 = *(undefined4 **)(*piVar3 + 0x54); puVar4 != puVar2; puVar4 = puVar4 + 1) {
      (**(code **)(*(int *)*puVar4 + 0xc))();
    }
    FUN_000ef330(0);
  }
  return;
}
