/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4332E8E7597073F5723DCD532E851ACA931732C454A06346EC1CFF8FB643FC3A
 * Entry: 0x002f5c41, Ghidra index: 10905, label: XGetGameRegion
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XGetGameRegion(void)

{
  int iVar1;
  undefined1 local_c [4];
  undefined4 local_8;
  
  iVar1 = ExQueryNonVolatileSetting(0x104,local_c,&local_8,4,0);
  if (-1 < iVar1) {
    return local_8;
  }
  return 0;
}
