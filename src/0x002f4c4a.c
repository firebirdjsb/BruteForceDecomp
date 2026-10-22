/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DC85B964BE127CCB0DBB044BB0C18E1F7C554EB76F3774609167F902C573092
 * Entry: 0x002f4c4a, Ghidra index: 10876, label: RaiseException
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__RaiseException(undefined4 param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  code *local_48;
  uint local_44;
  undefined4 local_40 [15];
  
  local_4c = 0;
  local_54 = param_1;
  local_50 = param_2 & 1;
  local_48 = RaiseException;
  if (param_4 == (undefined4 *)0x0) {
    local_44 = 0;
  }
  else {
    if (0xf < param_3) {
      param_3 = 0xf;
    }
    local_44 = param_3;
    if (param_3 != 0) {
      puVar1 = local_40;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *puVar1 = *param_4;
        param_4 = param_4 + 1;
        puVar1 = puVar1 + 1;
      }
    }
  }
  RtlRaiseException(&local_54);
  return;
}
