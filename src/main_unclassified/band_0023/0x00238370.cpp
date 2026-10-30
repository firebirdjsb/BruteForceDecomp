/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3EB699B28D83FE8B8E6545934A0455CB0C3F1FC53E3F210C5DFAB96D5EED4BC6
 * Entry: 0x00238370, Ghidra index: 7870, label: FUN_00238370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
uint FUN_00238370(void)

{
  uint uVar1;
  char *in_ECX;
  char *unaff_ESI;
  
  if ((in_ECX != (char *)0x0) && (in_ECX != unaff_ESI)) {
    uVar1 = 0xffffffff;
    do {
      uVar1 = uVar1 >> 8 ^
              *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[*in_ECX] ^ uVar1) & 0xff) * 4);
      in_ECX = in_ECX + 1;
    } while (in_ECX != unaff_ESI);
    return ~uVar1;
  }
  return 0;
}
