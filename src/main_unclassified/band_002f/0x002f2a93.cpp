/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0111FD170FDDDF204D4B2526FC55A771E5B63181EA9C632F31F91B34A02FB34
 * Entry: 0x002f2a93, Ghidra index: 10814, label: XGetLanguage
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint XAPILIB__XGetLanguage(void)

{
  int iVar1;
  undefined1 local_c [4];
  uint local_8;
  
  iVar1 = ExQueryNonVolatileSetting(7,local_c,&local_8,4,0);
  if (iVar1 < 0) {
    local_8 = 0;
  }
  else if (9 < local_8) {
    iVar1 = XGetGameRegion();
    return (iVar1 == 2) + 1;
  }
  return local_8;
}
