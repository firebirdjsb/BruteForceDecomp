/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 427A3E1341FC825128C6DC5A9736CF2D2B720785F6A3067BF36E1EEC0F9BBB13
 * Entry: 0x002aaac0, Ghidra index: 9651, label: FUN_002aaac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact source-draft declaration only. Original callers move ESI into EAX;
 * this void interface does not bind that hidden input or the callers'
 * EAX=ESI return. Guest register/memory contracts remain ABI_UNVERIFIED. */
extern void FUN_00066920(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038f800;
void FUN_002aaac0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00066920();
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  unaff_ESI[0x28] = 0;
  /* Original 002aaade C7 /0 stores the four-byte guest value 0x0038f800.
   * No host address is substituted; guest storage remains ABI_UNVERIFIED. */
  *unaff_ESI = UINT32_C(0x0038f800);
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x2a] = 0;
  unaff_ESI[0x2b] = 0;
  return;
}
