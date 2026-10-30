/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2020793FA9FEDEE881172AB786DF7F1CA6C742CC6ED32DB3A43FE2197422B13B
 * Entry: 0x000bb360, Ghidra index: 2271, label: FUN_000bb360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* C++ declaration matches one guest DWORD-pointer argument in the
 * 0x000BA5B0 Ghidra draft; original guest ABI remains UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f9e8;
void FUN_000bb360(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ba5b0(unaff_ESI);
  *unaff_ESI = &PTR_FUN_0039f9e8;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *(undefined2 *)((int)unaff_ESI + 0xe) = 1;
  *(undefined2 *)(unaff_ESI + 3) = 1;
  unaff_ESI[0xf] = 0x3f800000;
  return;
}
