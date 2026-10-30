/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7308BA851EEB3818DCEB0D781BF9738E8AD1056BE17250B05977AA4055F7528
 * Entry: 0x001fca50, Ghidra index: 7171, label: FUN_001fca50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00395980;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_001fca50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00395980;
  in_ECX[2] = PTR_FUN_0039c24c;
  in_ECX[3] = PTR_FUN_0039e7e8;
  if (in_ECX[0x1b] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x19] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x14] != 0) {
    FUN_0020d8a0(in_ECX[0x14],in_ECX[0x15],in_ECX + 0x13,in_ECX);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x14]);
  }
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  FUN_001fe150();
  return;
}
