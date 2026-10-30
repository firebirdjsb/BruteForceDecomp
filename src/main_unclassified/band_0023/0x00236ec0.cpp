/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D46E9ED43E287ED3E86A02E32C9B4BB54CB8E5D75D97D27DD3D76C61C0699E8E
 * Entry: 0x00236ec0, Ghidra index: 7843, label: FUN_00236ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00236ec0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  int unaff_EBX;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined4 **)(unaff_EBX + 8);
    puVar2 = param_1;
    for (; param_2 != puVar1; param_2 = param_2 + 2) {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 **)(unaff_EBX + 8) = puVar2;
  }
  *in_EAX = *param_1;
  return;
}
