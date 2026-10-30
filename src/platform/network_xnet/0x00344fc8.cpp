/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B2ADC436345BEFAD341D5DA55B85DE40EE5A38A01B8AF2AFBED3951C76A7D39
 * Entry: 0x00344fc8, Ghidra index: 12764, label: FUN_00344fc8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00344fc8(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (in_ECX == 0) {
    return 0x276d;
  }
  uVar1 = FUN_0034ff75();
  return uVar1;
}
