/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87F871A1E43BD0A0CE5280F6612405B715B3AD7F716EB4AEB4D292AD2E3B9198
 * Entry: 0x0035af50, Ghidra index: 13194, label: FUN_0035af50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0035af50(byte param_1)

{
  undefined4 *in_EAX;
  int unaff_EDI;
  
  in_EAX[8] = in_EAX[8] + -1;
  if (((param_1 & 1) != 0) && (in_EAX[6] == 0)) {
    FUN_0035ad00(in_EAX);
    XAPILIB__CloseHandle(*(undefined4 *)(unaff_EDI + 4));
    *(undefined4 *)(unaff_EDI + 4) = 0;
    return 1;
  }
  *in_EAX = 4;
  XAPILIB__WaitForSingleObject(in_EAX[5],0xffffffff);
  *in_EAX = 1;
  XAPILIB__ReleaseMutex(in_EAX[5]);
  XAPILIB__CloseHandle(*(undefined4 *)(unaff_EDI + 4));
  *(undefined4 *)(unaff_EDI + 4) = 0;
  return 0;
}
