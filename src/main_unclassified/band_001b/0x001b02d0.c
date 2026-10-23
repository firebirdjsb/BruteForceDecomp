/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1742A556ED3BF3B8EDD472C71B78F898FB5E48D7D9163D080B2C3E82A03A09A7
 * Entry: 0x001b02d0, Ghidra index: 5581, label: FUN_001b02d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b02d0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 local_14;
  
  if (in_EAX == 0) {
    FUN_0017dd30();
    return;
  }
  if (*in_ECX == 0) {
    puVar1 = (undefined4 *)FUN_002ea01d(0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = local_14;
      FUN_001c63c0(puVar1 + 2);
      *in_ECX = (int)puVar1;
      FUN_0017ddf0();
      return;
    }
    *in_ECX = 0;
    FUN_0017ddf0();
  }
  return;
}
