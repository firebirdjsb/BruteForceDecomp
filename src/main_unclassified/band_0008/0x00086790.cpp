/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC3352FC99EAFC4AAC2C02DB0A6D5A3C90ACB6FDA9F7C8C4B29BB576CC9566FD
 * Entry: 0x00086790, Ghidra index: 1582, label: FUN_00086790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00086790(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *in_EAX = *param_1;
    in_EAX = in_EAX + 1;
  }
  return;
}
