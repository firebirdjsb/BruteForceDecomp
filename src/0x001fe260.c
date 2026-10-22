/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4D7EC408C65EC53A7F7FFC62D6E9AE4EB093D305E449732074B5FD5BFED7BF2
 * Entry: 0x001fe260, Ghidra index: 7225, label: FUN_001fe260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
extern uint32_t PTR_LAB_003a4f50;
void FUN_001fe260(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  undefined4 *puVar4;
  undefined **ppuStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  for (; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
    piVar2 = (int *)puVar4[3];
    if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x5c))(), iVar3 == 0x14)) {
      ppuStack_14 = &PTR_LAB_003a3fb4;
      uStack_4 = 0xffffffff;
      uStack_10 = 0xd;
      uStack_8 = 0;
      uStack_c = 0;
      (**(code **)(*piVar2 + 0x60))(&ppuStack_14);
      (**(code **)(*piVar2 + 0x1c))(0);
      ppuStack_14 = &PTR_LAB_003a4f50;
    }
  }
  return;
}
