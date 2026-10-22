/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9644D0B320F65B34C3D82D73AD2B68C2A7F0D042F10B9067FB7B10505694EDAF
 * Entry: 0x00316d57, Ghidra index: 12162, label: FUN_00316d57
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00316d57(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  FUN_003118f0();
  if (in_ECX + 0xc0 == param_1) {
    while( true ) {
      iVar1 = FUN_003166b8(in_ECX + 0xb8,param_1);
      FUN_00311923();
      if (iVar1 == param_1) break;
      FUN_00316b1d(iVar1,param_2);
      FUN_003118f0();
    }
  }
  else {
    while (iVar1 = FUN_003166b8(in_ECX + 0xc0,param_1), iVar1 != param_1) {
      *(undefined4 *)(iVar1 + 0x24) = param_2;
    }
    FUN_00311923();
  }
  return;
}
