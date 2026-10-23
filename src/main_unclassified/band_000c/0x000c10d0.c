/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A7AB5BF4E7DB633E34EE86B75BA98E1C76F8255505AC7C6915A17962FFCB2A9A
 * Entry: 0x000c10d0, Ghidra index: 2348, label: FUN_000c10d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t *DAT_00469b54;
void FUN_000c10d0(void)

{
  char cVar1;
  int in_EAX;
  
  cVar1 = (**(code **)(**(int **)(DAT_00469aac + 0xbec) + 0x30))();
  if (cVar1 == '\0') {
    (**(code **)(*DAT_00469b54 + 0x10))(0);
    *(byte *)(in_EAX + 0xbc) = *(byte *)(in_EAX + 0xbc) | 2;
  }
  FUN_000c11f0();
  *(byte *)(in_EAX + 0xbc) = *(byte *)(in_EAX + 0xbc) & 0xf7 | 5;
  *(byte *)(in_EAX + 0x13) = *(byte *)(in_EAX + 0x13) & 0xfe;
  return;
}
