/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6666CB865A788593B7614DFFAECA391598E671809BEDCF646A3A9ECB3C145F18
 * Entry: 0x000a7430, Ghidra index: 1986, label: FUN_000a7430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000a70d0(void);

extern uint32_t PTR_LAB_003a0640;
void FUN_000a7430(void)

{
  undefined4 *unaff_EDI;
  undefined1 local_4 [4];
  
  *unaff_EDI = &PTR_LAB_003a0640;
  FUN_000a70d0();
  FUN_000a7b20(local_4,*(undefined4 *)unaff_EDI[0x43],(undefined4 *)unaff_EDI[0x43]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(unaff_EDI[0x43]);
}
