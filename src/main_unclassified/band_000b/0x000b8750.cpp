/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 192438AD0707775B20DB9ACAE34121FB65DC06205FDB327BECBCA4B4BC70396F
 * Entry: 0x000b8750, Ghidra index: 2223, label: FUN_000b8750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern void FUN_000b2530(void);

extern uint32_t PTR_FUN_0039f89c;
extern uint32_t PTR_FUN_0039fbc0;
void FUN_000b8750(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039fbc0;
  if (in_ECX[0x1a] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x18] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_FUN_0039f89c;
  FUN_000b2530();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
