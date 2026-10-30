/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 377C218BFCA3FF8C666789E4C0F5E06910455D87C7824697B6FF45DDC35E733E
 * Entry: 0x0035ac20, Ghidra index: 13184, label: FUN_0035ac20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035ac20(void)

{
  int unaff_ESI;
  
  XAPILIB__CloseHandle(*(undefined4 *)(unaff_ESI + 0x14));
  XAPILIB__CloseHandle(*(undefined4 *)(unaff_ESI + 0xc));
  XAPILIB__CloseHandle(*(undefined4 *)(unaff_ESI + 8));
  FUN_002f8e70(unaff_ESI);
  return;
}
