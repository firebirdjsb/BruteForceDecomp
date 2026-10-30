/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C94B681EF8D9C434557AD03BE8EB23BDA14AFFEDC0DEA7530FBFB296737212E
 * Entry: 0x0035f700, Ghidra index: 13219, label: FUN_0035f700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035f700(int param_1)

{
  if (*(code **)(param_1 + 0xec) != (code *)0x0) {
    (**(code **)(param_1 + 0xec))(param_1);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    XAPILIB__CloseHandle(*(undefined4 *)(param_1 + 0x4c));
  }
  if (*(code **)(param_1 + 0xf4) != (code *)0x0) {
    (**(code **)(param_1 + 0xf4))(param_1);
  }
  return;
}
