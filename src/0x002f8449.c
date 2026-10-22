/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4D095F27398C79341C1257E016C1401027F1BF9562E6B4DFE55F08D877E8EF6
 * Entry: 0x002f8449, Ghidra index: 10947, label: XGetParentalControlSetting
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__XGetParentalControlSetting(void)

{
  int iVar1;
  undefined1 local_c [4];
  undefined4 local_8;
  
  iVar1 = ExQueryNonVolatileSetting(10,local_c,&local_8,4,0);
  if (-1 < iVar1) {
    return local_8;
  }
  return 0;
}
