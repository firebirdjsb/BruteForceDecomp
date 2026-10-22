/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A1B39A47CC1A6FCB475A8B3AF315A9B27D78117C49FAE27D8E575A98D97DAC0
 * Entry: 0x00261e40, Ghidra index: 8648, label: FUN_00261e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00261e40(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 != '\0') {
    FUN_00062280();
    return 1;
  }
  FUN_00062280();
  return 0;
}
