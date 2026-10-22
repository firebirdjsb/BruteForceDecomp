/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E76826B57AE922ACD5337F7B1AD7D92E1FC891AE737DEBB54ADF98EFB428938
 * Entry: 0x001dd110, Ghidra index: 6613, label: FUN_001dd110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dd110(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *puStack00000004;
  
  if (in_EAX != (undefined4 *)0x0) {
    *in_EAX = *in_ECX;
    in_EAX[1] = in_ECX[1];
    puStack00000004 = in_EAX + 2;
    FUN_001e0dd0();
    return;
  }
  return;
}
