/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5D20504C8F12C77D903B7844C301CFEEDCF4DBF7DB4219290EA6BF17C89B9463
 * Entry: 0x00380eee, Ghidra index: 13541, label: FUN_00380eee
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00380eee(ushort param_1,byte param_2,char param_3)

{
  uint uVar1;
  int local_14 [4];
  
  local_14[0] = 0;
  local_14[2] = 0;
  local_14[1] = 9;
  local_14[3] = 0xd;
  uVar1 = (((uint)param_1 + local_14[param_2]) * 0x38) / 6;
  if (local_14[param_2] == 0) {
    uVar1 = 0;
  }
  if (param_3 != '\0') {
    uVar1 = uVar1 << 3;
  }
  return uVar1;
}
