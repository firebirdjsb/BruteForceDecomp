/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B5E9B4DE4FDD65E406B33A999A719FD11D5A97069B00494F30302391EACBF40
 * Entry: 0x002f2937, Ghidra index: 10808, label: GlobalMemoryStatus
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__GlobalMemoryStatus(undefined4 *param_1)

{
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_18;
  
  local_28 = 0x24;
  MmQueryStatistics(&local_28);
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = local_24 << 0xc;
  param_1[3] = local_20 << 0xc;
  param_1[6] = 0x7ffe0000;
  *param_1 = 0x20;
  param_1[7] = 0x7ffe0000 - local_18;
  return;
}
