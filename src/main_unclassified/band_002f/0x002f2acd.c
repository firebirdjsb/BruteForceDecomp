/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1E225747DC9E40D79EAF75CD8C69A5030E67E0D568357F7106CEF765F45FE511
 * Entry: 0x002f2acd, Ghidra index: 10815, label: XGetVideoStandard
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 XAPILIB__XGetVideoStandard(void)

{
  int iVar1;
  undefined1 local_c [4];
  undefined1 local_8;
  undefined1 local_7;
  
  iVar1 = ExQueryNonVolatileSetting(0x103,local_c,&local_8,4,0);
  if (-1 < iVar1) {
    return local_7;
  }
  return 0;
}
