/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CF2F3648C5AC580C5148FD9C833A621EE76FB0C948B14D8556E7EA019D2DB4B
 * Entry: 0x001e52d0, Ghidra index: 6794, label: FUN_001e52d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00396cd8;
void FUN_001e52d0(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *in_EAX = PTR_LAB_00396cd8;
  puVar1 = in_EAX + 0x20;
  iVar2 = 0x21;
  do {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[0x1f] = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  puVar1 = in_EAX + 0xd;
  iVar2 = 9;
  do {
    puVar1[-9] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
