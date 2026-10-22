/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E01167F1E6509BD333B5AF1A25425BC7108F92B048DE58C073498C641B66224
 * Entry: 0x002f4b8c, Ghidra index: 10872, label: Sleep
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__Sleep(undefined4 param_1)

{
  SleepEx(param_1,0);
  return;
}
