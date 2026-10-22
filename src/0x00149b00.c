/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63C7664BB9D82CF32E856D5B5CE381263E5F5E4A466A2940E9B2DD2755091FE4
 * Entry: 0x00149b00, Ghidra index: 4274, label: FUN_00149b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c78;
extern uint32_t DAT_004a5c7c;
void FUN_00149b00(void)

{
  int in_EAX;
  int iVar1;
  
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  *(undefined4 *)(in_EAX + 0x34) = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)(in_EAX + iVar1 * 4) = 0;
    if ((DAT_004a5c7c & 1) == 0) {
      DAT_004a5c7c = DAT_004a5c7c | 1;
      DAT_004a5c78 = 0xffffffff;
    }
    *(undefined4 *)(in_EAX + 0x38 + iVar1 * 4) = DAT_004a5c78;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  *(undefined4 *)(in_EAX + 100) = 0x3f800000;
  *(undefined1 *)(in_EAX + 0x60) = 1;
  return;
}
