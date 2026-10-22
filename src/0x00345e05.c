/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB308B87D95905D35B866AC78922F1112D772A947A138F0DA20FE7DF1124820F
 * Entry: 0x00345e05, Ghidra index: 12824, label: FUN_00345e05
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00345e05(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 local_c;
  
  uVar1 = FUN_00345a29(param_1,param_2,1);
  if ((uVar1 & 0x10000) == 0) {
    if (uVar1 != 0) {
      return 0;
    }
    local_c = __allmul(param_3,param_3 >> 0x1f,0xffffd8f0,0xffffffff);
    iVar2 = KeWaitForSingleObject(param_1 + 0x10,6,1,0,-(uint)(param_3 != 0) & (uint)&local_c);
    uVar1 = -(uint)(iVar2 != 0) & 0x8007274c;
    FUN_00345541(0xfffe07ff,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  return *(uint *)(param_1 + 0x40);
}
