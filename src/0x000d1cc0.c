/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A569DF36425318F94E7CC0A313B5F1F8D46710ABCD1D28A810417B9D06B5B39
 * Entry: 0x000d1cc0, Ghidra index: 2609, label: FUN_000d1cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040d634;
extern uint32_t DAT_0040d638;
void FUN_000d1cc0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  int in_ECX;
  
  uVar2 = DAT_0040d638;
  if (in_ECX != 0) {
    *(undefined4 *)(in_EAX + 0xc) = *(undefined4 *)(*(int *)(param_2 + 0xa44) + 0xe4);
    uVar1 = DAT_0040d634;
    *(undefined4 *)(in_EAX + 0x14) = uVar2;
    *(undefined4 *)(in_EAX + 4) = 0;
    *(undefined4 *)(in_EAX + 0x1c) = uVar1;
    *(undefined4 *)(in_EAX + 0x18) = uVar1;
    *(undefined4 *)(in_EAX + 0x20) = uVar1;
    *(undefined4 *)(in_EAX + 0x10) = param_3;
  }
  return;
}
