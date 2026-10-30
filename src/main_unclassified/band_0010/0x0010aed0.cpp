/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6058570135EE72FB3BB679A95CB89FB0F383120201085601FF7D730362D2A72
 * Entry: 0x0010aed0, Ghidra index: 3439, label: FUN_0010aed0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010aed0(undefined4 param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(in_EAX + 4);
  if (7 < *(uint *)(in_EAX + 0x18)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  if ((int)puVar1 + *(int *)(in_EAX + 0x14) * 2 == 0) {
    FUN_0010af50(1,param_1);
    return;
  }
  FUN_0010af50(1,param_1);
  return;
}
