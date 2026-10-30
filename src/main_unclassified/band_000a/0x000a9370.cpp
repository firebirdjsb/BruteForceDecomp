/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46E08FB9D18AB04A06AC7D76D7D874477FD46DF1EA0594E4B8A7E2432CBD291B
 * Entry: 0x000a9370, Ghidra index: 2024, label: FUN_000a9370
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern void FUN_000c5040(void);

extern uint32_t PTR_FUN_003a0338;
extern uint32_t PTR_LAB_003a0324;
void FUN_000a9370(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_003a0338;
  in_ECX[0xb] = &PTR_LAB_003a0324;
  if (in_ECX[0x34] != 0) {
    FUN_0008f6e0();
  }
  if (in_ECX[0x32] != 0) {
    FUN_0008f6e0();
  }
  FUN_000c5040();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
