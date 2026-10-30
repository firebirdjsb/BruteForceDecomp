/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADB563AEE63E700D7D9FCDF185786F02386A89B01EACA65625CFAA2BF8AF7E28
 * Entry: 0x00050e20, Ghidra index: 726, label: FUN_00050e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00050e20(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    in_EAX[2] = in_ECX[2];
  }
  return;
}
