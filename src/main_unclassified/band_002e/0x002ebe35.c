/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E199D08C071941E0A5866BDEEB68FF23E698E5C72D999613711678E1C1332CA
 * Entry: 0x002ebe35, Ghidra index: 10644, label: FUN_002ebe35
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Matched to C-draft definitions, NOT verified original Xbox callback ABI. */
extern void FUN_002efa98(char *param_1);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003b7190;
extern uint32_t PTR_FUN_003b7194;
extern uint32_t PTR_FUN_003b7198;
extern uint32_t PTR_FUN_003b719c;
extern uint32_t PTR_FUN_003b71a0;
extern uint32_t PTR_FUN_003b71a4;
extern uint32_t UNK_002efaf0;
extern uint32_t UNK_002efb3b;
/* Original Xbox 0x002EBE35..0x002EBE6C: six stores of exact 32-bit
 * guest code addresses. Keep them as guest addresses, not host C pointers.
 * Verified against the SHA-256-pinned original XBE instruction immediates. */
void FUN_002ebe35(void)
{
  PTR_FUN_003b7190 = UINT32_C(0x002EFE2D);
  PTR_FUN_003b7194 = UINT32_C(0x002EFAF0);
  PTR_FUN_003b7198 = UINT32_C(0x002EFB55);
  PTR_FUN_003b719c = UINT32_C(0x002EFA98);
  PTR_FUN_003b71a0 = UINT32_C(0x002EFB3B);
  PTR_FUN_003b71a4 = UINT32_C(0x002EFE2D);
}
