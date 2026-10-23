/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0A7692781C8187737621D84C0926DE9BD069A9FED82EB74BD6F178C494D37CB
 * Entry: 0x003825b6, Ghidra index: 13598, label: FUN_003825b6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412722;
extern uint32_t DAT_00412723;
void FUN_003825b6(void)

{
  uint in_ECX;
  uint unaff_EBX;
  uint uVar1;
  undefined4 local_8;
  
  uVar1 = unaff_EBX & 0xffffff00;
  local_8 = in_ECX & 0xffffff00;
  DAT_00412723 = 10;
  if (DAT_00412721 == '\0') {
    FUN_00380f6c();
    FUN_003812a8(in_ECX);
    if (DAT_00412722 != '\0') {
      uVar1 = CONCAT31((int3)(unaff_EBX >> 8),DAT_00412722);
      local_8 = CONCAT31((int3)(in_ECX >> 8),*(undefined1 *)(in_ECX + 4)) & 0xffffff7f;
    }
  }
  if (*(char *)(in_ECX + 5) != '\0') {
    FUN_003822c5();
  }
  FUN_00382100(in_ECX);
  if ((char)uVar1 != '\0') {
    FUN_00382132(local_8,CONCAT31((int3)(uVar1 >> 8),(char)uVar1 + -1));
  }
  DAT_00412721 = 0;
  FUN_0038244b(0,in_ECX);
  return;
}
