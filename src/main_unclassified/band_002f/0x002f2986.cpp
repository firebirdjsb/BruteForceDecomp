/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70BA83B459AA83150DC6FB7078B292C4A53D35AA6B26B690DEB64971B7AE4374
 * Entry: 0x002f2986, Ghidra index: 10809, label: QueryPerformanceCounter
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_native_timestamp_operation.h"
undefined4 XAPILIB__QueryPerformanceCounter(undefined4 *param_1)

{
  undefined8 uVar1;
  
  /* Native unsynchronized timestamp only; Xbox clock and ABI remain unverified. */
  uVar1 = bf_native_timestamp_unsynchronized();
  /* Native contract: two live, writable, aligned uint32_t objects.
   * Volatile accesses preserve the two ordered DWORD stores, not atomicity. */
  volatile undefined4 *output = param_1;
  output[0] = static_cast<undefined4>(uVar1);
  output[1] = static_cast<undefined4>(uVar1 >> 32);
  return 1;
}
