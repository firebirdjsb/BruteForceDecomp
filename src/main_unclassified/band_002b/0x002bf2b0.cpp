/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FE9D9B82B208FE41D4D697589CEB86EF44B6E434FD30BC2AEA52A24839290E67
 * Entry: 0x002bf2b0, Ghidra index: 9994, label: FUN_002bf2b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e6f8;
extern uint32_t PTR_LAB_0038e720;
void FUN_002bf2b0(void)

{
  undefined4 *in_EAX;
  undefined4 in_ECX;
  undefined4 *puVar1;
  int iVar2;
  
  in_EAX[2] = in_ECX;
  in_EAX[4] = 0xffffffff;
  in_EAX[3] = 0xffffffff;
  *in_EAX = &PTR_LAB_0038e720;
  puVar1 = in_EAX + 6;
  iVar2 = 2;
  do {
    *puVar1 = &PTR_FUN_0038e6f8;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[0x1b] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[5] = in_EAX[5] & 0xcfc000ff | 0xfc00000;
  in_EAX[0x17] = 0;
  in_EAX[1] = 0;
  return;
}
