/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79ED0F793CDC3B4CC71BBE51B855EB6B371A6FDA29A86496D7EC522752B8257E
 * Entry: 0x002f2997, Ghidra index: 10810, label: QueryPerformanceFrequency
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__QueryPerformanceFrequency(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0x2bb5c755;
  return 1;
}
