/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 817F1ED9664607EEAC53F2AA9FE5CF3022842BBF056B7421AA16DE20C0309ED1
 * Entry: 0x002ab160, Ghidra index: 9660, label: FUN_002ab160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002ab160(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = param_2[3];
  return 0;
}
