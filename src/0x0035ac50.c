/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32953388A1158042299FE61875488AE3FE5464D6AE4445E0E61F5284EECED3AB
 * Entry: 0x0035ac50, Ghidra index: 13185, label: FUN_0035ac50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035ac50(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 4;
      XAPILIB__WaitForSingleObject(param_2[5],0xffffffff);
      *param_2 = 2;
    }
    return;
  }
  *param_1 = 4;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 4;
    FUN_0035a960();
    *param_1 = 2;
    *param_2 = 2;
    return;
  }
  XAPILIB__WaitForSingleObject(param_1[5],0xffffffff);
  *param_1 = 2;
  return;
}
