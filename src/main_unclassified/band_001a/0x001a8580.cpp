/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4544AE4A120F9A0EDECC3B0788B75349684650911FF200799B84702F6C5C0A19
 * Entry: 0x001a8580, Ghidra index: 5440, label: FUN_001a8580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern void FUN_001e0ea0(void);
char * FUN_001a8580(void)

{
  char *in_EAX;
  
  FUN_001e0ea0();
  if (*in_EAX == '\0') {
    return (char *)0x0;
  }
  return in_EAX + 4;
}
