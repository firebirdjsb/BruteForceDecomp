/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F574DC6D1469D43A4D798E33EF23671A4626CB72D17D02B89A7EBAC7F2A668AF
 * Entry: 0x002e33a0, Ghidra index: 10398, label: FUN_002e33a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e33a0(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (*in_ECX != -1) {
    iVar1 = FUN_00345084(*in_ECX);
    *in_ECX = -1;
    if (iVar1 == 0) {
      *in_ECX = param_1;
      return;
    }
    iVar1 = XAPILIB__GetLastError();
    if (0 < iVar1) {
      XAPILIB__GetLastError();
      *in_ECX = param_1;
      return;
    }
    XAPILIB__GetLastError();
  }
  *in_ECX = param_1;
  return;
}
