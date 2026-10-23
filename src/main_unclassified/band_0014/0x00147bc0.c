/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16FC76513D7BE1FF10D97C211D05FE7FFC111F10D6AA3ECBF7271EAF81D0324F
 * Entry: 0x00147bc0, Ghidra index: 4242, label: FUN_00147bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_00310250; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_00310250(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a88e8;
extern uint32_t DAT_004a88ec;
extern uint32_t _DAT_004a88e8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00147bc0(void)

{
  char cVar1;
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0xc) & 2) == 0) {
    if ((DAT_004a88ec & 1) == 0) {
      DAT_004a88ec = DAT_004a88ec | 1;
      _DAT_004a88e8 = 0xe8038d2;
      _atexit(FUN_00310250);
    }
    cVar1 = FUN_00147c20(&DAT_004a88e8,1);
    *(byte *)(in_EAX + 0xc) = *(byte *)(in_EAX + 0xc) ^ (cVar1 << 1 ^ *(byte *)(in_EAX + 0xc)) & 2;
  }
  return;
}
