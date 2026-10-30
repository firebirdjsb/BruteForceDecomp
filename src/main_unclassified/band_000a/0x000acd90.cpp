/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB08D33346AA1B5DB8A0045321BA6F272BEF92A47100AB3C4D72C465D2A9989D
 * Entry: 0x000acd90, Ghidra index: 2066, label: FUN_000acd90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bbcb0(void);

extern uint32_t DAT_004a5c78;
extern uint32_t DAT_004a5c7c;
extern uint32_t PTR_FUN_003a023c;
void FUN_000acd90(void)

{
  uint uVar1;
  undefined4 *in_EAX;
  
  FUN_000bbcb0();
  uVar1 = DAT_004a5c7c;
  *in_EAX = &PTR_FUN_003a023c;
  in_EAX[0x11] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x12] = 0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0x40;
  *(undefined2 *)(in_EAX + 3) = 0x40;
  *(byte *)(in_EAX + 0xe) = *(byte *)(in_EAX + 0xe) & 0xfe | 2;
  if ((uVar1 & 1) == 0) {
    DAT_004a5c7c = DAT_004a5c7c | 1;
    DAT_004a5c78 = 0xffffffff;
    in_EAX[0xb] = 0xffffffff;
    return;
  }
  in_EAX[0xb] = DAT_004a5c78;
  return;
}
