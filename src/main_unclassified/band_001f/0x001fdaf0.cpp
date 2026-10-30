/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1622C86642C20F223D6EC99AA5617156D23E1EED6C76A0BE5161D2209320E92
 * Entry: 0x001fdaf0, Ghidra index: 7207, label: FUN_001fdaf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395510;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fdaf0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_FUN_00395510;
  unaff_ESI[2] = PTR_FUN_0039c24c;
  unaff_ESI[3] = PTR_FUN_0039e7e8;
  if ((undefined4 *)unaff_ESI[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)unaff_ESI[0x1f])(1);
    unaff_ESI[0x1f] = 0;
  }
  if (unaff_ESI[0x1c] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_ESI[0x1c]);
  }
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  FUN_001fe150();
  return;
}
