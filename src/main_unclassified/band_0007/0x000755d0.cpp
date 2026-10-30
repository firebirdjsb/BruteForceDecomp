/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73721EE8AAA5B1C443F1B5AFA98AFB4FDB2412B20CCDF798B523BCD661BE0153
 * Entry: 0x000755d0, Ghidra index: 1348, label: FUN_000755d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0008f6e0(std::uint32_t guest_edx);

void FUN_000755d0(int param_1)

{
  if (*(char *)(param_1 + 0x29) == '\0') {
    FUN_000755d0(*(undefined4 *)(param_1 + 8));
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_0008f6e0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
