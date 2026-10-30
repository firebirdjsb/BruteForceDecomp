/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3B2F755A96836663A2BD99B7F21EF87093BFACD00D336CF1CFD3C1B066A38751
 * Entry: 0x0006b910, Ghidra index: 1214, label: FUN_0006b910
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00235b40(void);
extern void FUN_00235ac0(void);

extern uint32_t PTR_FUN_003a29a8;
extern uint32_t PTR_LAB_003a27a0;
void FUN_0006b910(byte param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_003a27a0;
  if ((in_ECX[0x17] != 0) && (in_ECX[0x17] != -1)) {
    FUN_00235b40();
    iVar1 = in_ECX[0x17];
    if (iVar1 != 0) {
      FUN_00235ac0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
    in_ECX[0x17] = 0;
  }
  *in_ECX = &PTR_FUN_003a29a8;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
