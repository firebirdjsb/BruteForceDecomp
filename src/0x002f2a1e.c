/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE44DACE9DA56E42FE57D2B2A74236D8F597F428198CC39080442581E0C593F3
 * Entry: 0x002f2a1e, Ghidra index: 10813, label: SystemTimeToFileTime
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool XAPILIB__SystemTimeToFileTime(undefined2 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = *param_1;
  local_1a = param_1[1];
  local_18 = param_1[3];
  local_16 = param_1[4];
  local_14 = param_1[5];
  local_12 = param_1[6];
  local_10 = param_1[7];
  cVar1 = RtlTimeFieldsToTime(&local_1c,&local_c);
  if (cVar1 != '\0') {
    *param_2 = local_c;
    param_2[1] = local_8;
  }
  else {
    XapiSetLastNTError(0xc000000d);
  }
  return cVar1 != '\0';
}
