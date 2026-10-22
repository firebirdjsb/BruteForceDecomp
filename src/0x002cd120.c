/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1203991F0F72B862538922767DB9067D563C67B63018956E1F415D7797E00CE9
 * Entry: 0x002cd120, Ghidra index: 10164, label: FUN_002cd120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002cd120(int param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  undefined1 local_20 [12];
  undefined4 local_14;
  undefined4 local_8;
  
  local_14 = 0;
  local_8 = in_EAX[2];
  FUN_00150930(*in_EAX,in_EAX[1],local_8,0);
  FUN_002b7360(*(int *)(param_1 + 8) + 0x10,local_20,param_2);
  return;
}
