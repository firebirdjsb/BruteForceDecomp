/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32822520B7D11FD3A0639CB6B7565AC9756F18C6C888028281D45FFDA03979F2
 * Entry: 0x001d0fb0, Ghidra index: 6223, label: FUN_001d0fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration only; original x86 guest ABI remains unverified. */
extern void FUN_001d2cf0(void);
void FUN_001d0fb0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x70) {
    FUN_001d2cf0();
  }
  return;
}
