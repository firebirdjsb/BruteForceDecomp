/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37230A2CFF2661C3599C98F30C188404C9B9D8C412CD5E3751F9450D5E2F82D5
 * Entry: 0x000be6e0, Ghidra index: 2319, label: FUN_000be6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c78;
extern uint32_t DAT_004a5c7c;
extern uint32_t PTR_FUN_0039f75c;
void FUN_000be6e0(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  
  FUN_000bb360();
  *in_EAX = &PTR_FUN_0039f75c;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x20;
  *(undefined2 *)(in_EAX + 3) = 0x20;
  FUN_000ba6d0();
  if ((DAT_004a5c7c & 1) == 0) {
    DAT_004a5c7c = DAT_004a5c7c | 1;
    DAT_004a5c78 = 0xffffffff;
  }
  uVar2 = DAT_004a5c78;
  uVar1 = (undefined1)DAT_004a5c78;
  *(char *)((int)in_EAX + 0x2d) = (char)((uint)DAT_004a5c78 >> 8);
  *(undefined1 *)(in_EAX + 0xb) = uVar1;
  *(char *)((int)in_EAX + 0x2e) = (char)((uint)uVar2 >> 0x10);
  return;
}
