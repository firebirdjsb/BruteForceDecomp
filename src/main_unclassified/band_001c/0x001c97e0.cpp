/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B51F169418C52396ED40CE148D7D29AD88DCBB4F0C023FB9A30860102C229AC0
 * Entry: 0x001c97e0, Ghidra index: 5833, label: FUN_001c97e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001c97e0(int param_1)

{
  int in_EAX;
  
  FUN_000fdc90(param_1);
  *(undefined4 *)(in_EAX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  FUN_000fdba0();
  FUN_001bddb0(in_EAX + 0x30);
  FUN_001cca00(in_EAX + 0x40);
  return;
}
