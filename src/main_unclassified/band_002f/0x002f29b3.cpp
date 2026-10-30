/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C4844C9893512D619E49D85B5D4C4354882D3AB0C92A91D9C031AE1F5742F1A
 * Entry: 0x002f29b3, Ghidra index: 10812, label: FileTimeToSystemTime
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__FileTimeToSystemTime(undefined4 *param_1,undefined2 *param_2)

{
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *param_1;
  local_8 = param_1[1];
  RtlTimeToTimeFields(&local_c,&local_1c);
  *param_2 = local_1c;
  param_2[1] = local_1a;
  param_2[3] = local_18;
  param_2[2] = local_e;
  param_2[4] = local_16;
  param_2[5] = local_14;
  param_2[6] = local_12;
  param_2[7] = local_10;
  return 1;
}
