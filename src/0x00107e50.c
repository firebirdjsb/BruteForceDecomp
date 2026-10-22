/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7EE85AB82C11F5327AEDE9539CF7366F7B32ABA6411C93A346797F60EC94161
 * Entry: 0x00107e50, Ghidra index: 3378, label: FUN_00107e50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00107e50(void)

{
  char cVar1;
  
  cVar1 = FUN_00107dd0();
  if (cVar1 != '\0') {
    return '\0';
  }
  cVar1 = FUN_00107a40();
  if (cVar1 != '\0') {
    return '\x03';
  }
  cVar1 = FUN_00107d10();
  return (cVar1 != '\0') + '\x01';
}
