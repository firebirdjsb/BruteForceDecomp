/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28B563A1B17743272556593DFD9C1A379405283D251685FA9E94EEA487B321B2
 * Entry: 0x0010cde0, Ghidra index: 3483, label: FUN_0010cde0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010cde0(int *param_1)

{
  undefined4 uVar1;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  local_8 = 0;
  local_18 = local_18 & 0xffff0000;
  local_4 = 7;
  FUN_00087940(local_1c,0,0xffffffff);
  uVar1 = FUN_001e97c0();
  FUN_002eaa70(uVar1);
  FUN_0008ed00();
  FUN_0010a7d0();
  (**(code **)(*param_1 + 0x1c))();
  if (7 < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  return;
}
