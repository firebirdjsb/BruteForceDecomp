/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5ACBAE7CCAB7EB9D729DF5E1828B8599C7916BABD94686BB4287A4BF36867409
 * Entry: 0x0037fc3c, Ghidra index: 13509, label: GetTypeInformation_8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xapi_device_identities_x86.h"
undefined * XAPILIB__GetTypeInformation_8(void)

{
  undefined **ppuVar1;
  char in_CL;
  char *in_EDX;
  char cVar2;
  
  *in_EDX = '\0';
  ppuVar1 = &g_DeviceTypeInfoTableBegin;
  cVar2 = '\0';
  do {
    if (*ppuVar1 != (char *)0x0) {
      if (**ppuVar1 == in_CL) {
        *in_EDX = cVar2;
        return *ppuVar1;
      }
      cVar2 = cVar2 + '\x01';
    }
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < &g_DeviceTypeInfoTableEnd);
  return (undefined *)0x0;
}
