/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEAA33FEFA953DB7D820F79CECDE0A9A0EF3DD3CD4CA96B0E72D27E1936C4F62
 * Entry: 0x0022afe0, Ghidra index: 7682, label: FUN_0022afe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003944a0;
extern uint32_t PTR_FUN_0039a828;
extern uint32_t PTR_LAB_003944c0;
extern uint32_t PTR_LAB_003944d0;
void FUN_0022afe0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  FUN_00145d90();
  unaff_ESI[0x75] = &PTR_FUN_0039a828;
  *unaff_ESI = &PTR_FUN_003944a0;
  unaff_ESI[6] = &PTR_LAB_003944d0;
  unaff_ESI[0x75] = &PTR_LAB_003944c0;
  FUN_001a9850();
  uVar1 = FUN_00279bb0(unaff_ESI + 0xf5);
  unaff_ESI[0xf6] = uVar1;
  unaff_ESI[0xf7] = 0;
  uVar1 = FUN_00279bb0(unaff_ESI + 0xf8);
  unaff_ESI[0xf9] = uVar1;
  unaff_ESI[0xfa] = 0;
  unaff_ESI[1] = 0x14;
  return;
}
