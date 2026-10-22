/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D14A1CB3A820C5B6F70FAE2E1268ECE050BC111085C381FB8461A281FB7A1823
 * Entry: 0x0006e5d0, Ghidra index: 1240, label: FUN_0006e5d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698cc;
extern uint32_t PTR_DAT_004021a0;
void FUN_0006e5d0(void)

{
  ushort *puVar1;
  uint in_EAX;
  ushort in_CX;
  int in_EDX;
  
  puVar1 = (ushort *)(*(int *)(in_EDX + 0x120) + (in_EAX & 0xffff) * 6);
  *puVar1 = *puVar1 & 0xf000 | in_CX & 0xfff | 0x2000;
  puVar1[2] = (ushort)DAT_004698cc;
  *(uint *)(PTR_DAT_004021a0 + (uint)(in_CX >> 5) * 4) =
       *(uint *)(PTR_DAT_004021a0 + (uint)(in_CX >> 5) * 4) | 1 << ((byte)in_CX & 0x1f);
  return;
}
