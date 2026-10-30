/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9125A2066C28897BBFFAC1750702D2FE00591A586F6131FEE16B148480CA676B
 * Entry: 0x001fb0b0, Ghidra index: 7109, label: FUN_001fb0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039641c;
void FUN_001fb0b0(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*puVar1;
  }
  if (puVar2 != puVar1) {
    do {
      puVar1 = (undefined4 *)puVar2[2];
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = PTR_LAB_0039641c;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(puVar1);
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != *(undefined4 **)(in_EAX + 4));
  }
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_001298b0(local_4,0,0);
    return;
  }
  FUN_001298b0(local_4,*puVar1,puVar1);
  return;
}
