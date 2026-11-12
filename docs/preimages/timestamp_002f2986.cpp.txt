/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70BA83B459AA83150DC6FB7078B292C4A53D35AA6B26B690DEB64971B7AE4374
 * Entry: 0x002f2986, Ghidra index: 10809, label: QueryPerformanceCounter
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__QueryPerformanceCounter(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulonglong)uVar1 >> 0x20);
  return 1;
}
