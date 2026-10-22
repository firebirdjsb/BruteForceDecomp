/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC7290227BA0D8B797B8ED945A8B2F7DA8CAD960440670B44B734A8AB8EB8097
 * Entry: 0x001d66d0, Ghidra index: 6361, label: FUN_001d66d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d66d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    param_2 = param_2 + -8;
    param_3 = param_3 + -8;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_2 != param_1);
  *in_EAX = param_3;
  return;
}
