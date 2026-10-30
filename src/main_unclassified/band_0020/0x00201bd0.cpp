/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFA16FA3A13BA9C3AADC0DFFD02F77C058ABE2B5AD0FBAC61737DB562BA5C8CC
 * Entry: 0x00201bd0, Ghidra index: 7265, label: FUN_00201bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395f54;
extern uint32_t PTR_FUN_00395f68;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_00201bd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00395f68;
  in_ECX[2] = PTR_FUN_0039c24c;
  in_ECX[3] = PTR_FUN_0039e7e8;
  in_ECX[0x10] = PTR_FUN_00395f54;
  if (in_ECX[0x2a] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x2a]);
  }
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  if (in_ECX[0x26] != 0) {
    FUN_0020da30(in_ECX + 0x25);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x26]);
  }
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  if (0xf < (uint)in_ECX[0x24]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x1f]);
  }
  in_ECX[0x24] = 0xf;
  in_ECX[0x23] = 0;
  *(undefined1 *)(in_ECX + 0x1f) = 0;
  if (0xf < (uint)in_ECX[0x1d]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x18]);
  }
  in_ECX[0x1d] = 0xf;
  in_ECX[0x1c] = 0;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  if (in_ECX[0x16] != 0) {
    FUN_0008f6e0();
  }
  FUN_001fe150();
  return;
}
