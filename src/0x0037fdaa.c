/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB4FC96DA871F830908ABF6D03B49A261F5EAEAA9ACA4FE5CDC92F058885E12E
 * Entry: 0x0037fdaa, Ghidra index: 13516, label: XInputClose
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__XInputClose(void)

{
  XID_fCloseDevice();
  return;
}
