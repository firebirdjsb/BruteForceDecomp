/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B480B88E81031EB0F0B3B3B3097D72FC20C43B963286D0DA3C0828CE8D6C14E6
 * Entry: 0x00071ce0, Ghidra index: 1270, label: FUN_00071ce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00071ce0(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined4 *in_EAX;
  undefined1 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined1 **)(param_1 + 8);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar2;
  }
  *in_EAX = param_2;
  return;
}
