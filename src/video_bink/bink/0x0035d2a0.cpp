/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72D33EF0C44061C405AE032AAB1B4697793F4B1B940F75D631E3325DFCA6230E
 * Entry: 0x0035d2a0, Ghidra index: 13213, label: FUN_0035d2a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035d2a0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 3;
  param_1[1] = (param_2 >> 4) + 0x203 & 0xfffffffc;
  uVar1 = uVar2 + 0x203 & 0xfffffffc;
  *param_1 = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  uVar1 = (uVar2 & 0xfffffff) * 2 + 0x403 & 0xfffffffc;
  param_1[2] = (uVar2 * 8 & 0x3ffffff) * 8 + 0x200;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[3] = (uVar2 & 0x3ffffff) * 8 + 0x200;
  param_1[8] = (uVar2 * 0x18 & 0xfffffff) * 2 + 0x200;
  return;
}
