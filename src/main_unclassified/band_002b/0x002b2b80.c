/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F0994E43ADACBDBCEF79F8BCA4CD2E00B70914FC10D539406F5E7619D2C0B9E
 * Entry: 0x002b2b80, Ghidra index: 9750, label: FUN_002b2b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7ee0;
uint FUN_002b2b80(void)

{
  byte bVar1;
  uint uVar2;
  int in_ECX;
  byte *in_EDX;
  
  uVar2 = 0xffffffff;
  if (-1 < in_ECX + -1) {
    do {
      bVar1 = *in_EDX;
      in_EDX = in_EDX + 1;
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_003b7ee0 + ((bVar1 ^ uVar2) & 0xff) * 4);
      in_ECX = in_ECX + -1;
    } while (in_ECX != 0);
  }
  return uVar2 | 0x80000000;
}
