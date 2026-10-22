/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E18C0CE8C06F6E3E1E729BD044250EFDD13ADADA9D70F49A61A074462577584F
 * Entry: 0x000d5680, Ghidra index: 2659, label: FUN_000d5680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d5680(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(in_EAX + 0xc1c);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_001298b0(local_4,0,0);
    return;
  }
  FUN_001298b0(local_4,*puVar1,puVar1);
  return;
}
