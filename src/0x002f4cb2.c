/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC8EB4151F3CAD9B7E0F4F0C466867D35C68ADD00F3F247A56719AD8D221E73C
 * Entry: 0x002f4cb2, Ghidra index: 10878, label: SetUnhandledExceptionFilter
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__SetUnhandledExceptionFilter(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = g_XapiCurrentTopLevelFilter;
  g_XapiCurrentTopLevelFilter = param_1;
  return uVar1;
}
