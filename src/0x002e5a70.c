/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F59C80F8FD2B3EA3CBA2A8CD9399194268FEAC594DB8103DD3AD52285D86E71
 * Entry: 0x002e5a70, Ghidra index: 10484, label: FUN_002e5a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002e5a70(void)

{
  uint uVar1;
  
  uVar1 = XONLINES__XNetGetEthernetLinkStatus();
  return uVar1 & 1;
}
