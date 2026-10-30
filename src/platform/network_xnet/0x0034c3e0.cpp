/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E8F2BDB29F3DED03E2EF2FF286B555F0B448F280066FDB34D00845A595A7083
 * Entry: 0x0034c3e0, Ghidra index: 12958, label: FUN_0034c3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c3e0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6,undefined4 *param_7,uint param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 local_8c [116];
  undefined4 local_18 [5];
  
  XcSHAInit(local_8c);
  if (param_2 != 0) {
    XcSHAUpdate(local_8c,param_1,param_2);
  }
  if (param_4 != 0) {
    XcSHAUpdate(local_8c,param_3,param_4);
  }
  if (param_6 != 0) {
    XcSHAUpdate(local_8c,param_5,param_6);
  }
  XcSHAFinal(local_8c,local_18);
  puVar2 = local_18;
  for (uVar1 = param_8 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_7 = *puVar2;
    puVar2 = puVar2 + 1;
    param_7 = param_7 + 1;
  }
  for (param_8 = param_8 & 3; param_8 != 0; param_8 = param_8 - 1) {
    *(undefined1 *)param_7 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    param_7 = (undefined4 *)((int)param_7 + 1);
  }
  return;
}
