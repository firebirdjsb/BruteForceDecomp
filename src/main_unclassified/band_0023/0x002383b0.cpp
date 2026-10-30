/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D410734EA4A6CB1222DACFB5476C267844303F561A7367F821575587A489FA6C
 * Entry: 0x002383b0, Ghidra index: 7871, label: FUN_002383b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003bc150;
extern uint32_t DAT_003bc550;
uint FUN_002383b0(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *in_EDX;
  
  if (in_EDX != (char *)0x0) {
    uVar3 = 0xffffffff;
    cVar2 = *in_EDX;
    while (cVar2 != '\0') {
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_003bc150 + (((byte)(&DAT_003bc550)[cVar2] ^ uVar3) & 0xff) * 4);
      pcVar1 = in_EDX + 1;
      in_EDX = in_EDX + 1;
      cVar2 = *pcVar1;
    }
    return ~uVar3;
  }
  return 0;
}
