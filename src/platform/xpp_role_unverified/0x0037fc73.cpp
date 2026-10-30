/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E06286D5BAAE0A34FBF1F05B3AAA7DE7AE87AC4FE20E386CD2256E306D21759E
 * Entry: 0x0037fc73, Ghidra index: 13510, label: GetTypeInformation_4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xapi_device_identities_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_0037eca8;
undefined * XAPILIB__GetTypeInformation_4(void)

{
  undefined **ppuVar1;
  int in_ECX;
  
  ppuVar1 = &g_DeviceTypeInfoTableBegin;
  while ((*ppuVar1 == (undefined *)0x0 || (*(int *)(*ppuVar1 + 4) != in_ECX))) {
    ppuVar1 = ppuVar1 + 1;
    if ((undefined **)((int)&PTR_DAT_0037eca8 + 3) < ppuVar1) {
      return (undefined *)0x0;
    }
  }
  return *ppuVar1;
}
