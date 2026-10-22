/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E185D603585320E4E30326857C080908E4C3D26E31B1D9E6FAE6385162CA6B0A
 * Entry: 0x0010eb70, Ghidra index: 3521, label: FUN_0010eb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010eb70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  undefined1 local_14 [4];
  int local_10;
  int local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_0010ea50(in_EAX,param_1,param_2,*(undefined4 *)(in_EAX + 0xc),param_3,0,local_14);
  if (local_8 != 0) {
    FUN_0008f6e0();
  }
  if (local_10 != 0) {
    FUN_0008f6e0();
  }
  return;
}
