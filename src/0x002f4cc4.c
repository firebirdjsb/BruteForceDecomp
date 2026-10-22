/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF5014EC0857420B3C61FE00E73167E6E6F9ABBBA1486EBBC530B3C6F3905F07
 * Entry: 0x002f4cc4, Ghidra index: 10879, label: UnhandledExceptionFilter
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_xapi_tls_filter_source.h"
undefined4 XAPILIB__UnhandledExceptionFilter(undefined4 param_1)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x20) + 0x250);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(iVar1 + 0x14))(0xc,0);
  }
  if (((iVar1 == 0) && (g_XapiCurrentTopLevelFilter != (code *)0x0)) &&
     (iVar1 = (*g_XapiCurrentTopLevelFilter)(param_1), iVar1 == -1)) {
    return 0xffffffff;
  }
  return 0;
}
