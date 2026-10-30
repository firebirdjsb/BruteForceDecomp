/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40AFA83942E05A0D906CC337017364935F76230498D20E5EA31C53491D76B4B5
 * Entry: 0x0033dd6c, Ghidra index: 12599, label: FUN_0033dd6c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033dd6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 local_8;
  
  local_8 = 0;
  in_ECX[1] = 0xffffffff;
  *in_ECX = param_1;
  in_ECX[8] = param_2;
  in_ECX[0x22e] = param_3;
  in_ECX[0x22f] = param_4;
  FUN_0033dc41(in_ECX,param_3,param_4);
  FUN_0033bff8();
  iVar1 = FUN_0033bfe2(in_ECX[7]);
  if (in_ECX[0x230] == 0) {
    iVar2 = thunk_FUN_0033e970(iVar1 << 9,0x13);
  }
  else {
    iVar2 = FUN_0033e9f8(iVar1 << 9,0x13);
  }
  in_ECX[3] = iVar2;
  if (iVar2 == 0) {
    local_8 = 0x8007000e;
  }
  else {
    in_ECX[4] = iVar1;
    in_ECX[5] = iVar2;
  }
  return local_8;
}
