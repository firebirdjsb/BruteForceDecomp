/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AEF332D75EC52B6D8B73CF52FE7209A28E5F6F27114B6600330AE713A7E566C
 * Entry: 0x0020bc50, Ghidra index: 7341, label: FUN_0020bc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020bc50(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_000e1ac0(local_4,0,0);
    return;
  }
  FUN_000e1ac0(local_4,*puVar1,puVar1);
  return;
}
