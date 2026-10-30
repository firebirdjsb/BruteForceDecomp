/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96D0A8E2B168F735D68D9DBBE4C433F094C3BB57C5119FB3FC538C4B5ACA6F65
 * Entry: 0x0004cab0, Ghidra index: 639, label: FUN_0004cab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039cc18;
uint FUN_0004cab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  float local_138;
  undefined1 local_134 [12];
  undefined1 local_128 [12];
  undefined **local_11c [65];
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 8;
  local_8 = 8;
  local_18 = 0;
  local_14 = 1;
  local_11c[0] = &PTR_LAB_0039cc18;
  local_c = 0x435a1018;
  iVar1 = FUN_000ddd10(param_1,&local_138,local_128,local_134,param_2,in_EDX,local_11c,param_3,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)(ushort)((ushort)(local_138 < param_4) << 8 |
                           (ushort)(isnan(local_138) || isnan(param_4)) << 10 |
                          (ushort)(local_138 == param_4) << 0xe);
    if (local_138 >= param_4 && (local_138 == param_4) == 0) {
      return uVar2;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),iVar1 != 0);
}
