/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3AE7EEE82923A4B9EDBA3B271B95074141A9CDFC86DD62786AFC8A51BCFC9FC
 * Entry: 0x0033ddf6, Ghidra index: 12600, label: FUN_0033ddf6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033ddf6(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,
                int *param_6)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  *param_5 = 0;
  *param_6 = 0;
  if (param_4 == 0) {
    iVar1 = FUN_0033e9b3(0x8c8,0x8012);
  }
  else {
    iVar1 = FUN_0033ea0c(0x8c8,0x8012);
  }
  *(int *)(in_ECX + 0x15cc + param_1 * 4) = iVar1;
  if (iVar1 == 0) {
    param_1 = -0x7ff8fff2;
  }
  else {
    *(int *)(iVar1 + 0x8c0) = param_4;
    param_1 = FUN_0033dd6c(param_1,param_2,param_3,in_ECX);
    if (-1 < param_1) {
      if (param_4 == 0) {
        iVar2 = thunk_FUN_0033e970(0x38,0x8011);
      }
      else {
        iVar2 = FUN_0033e9f8(0x38,0x8011);
      }
      if (iVar2 == 0) {
        param_1 = -0x7ff8fff2;
      }
      else {
        FUN_0033dc41(iVar1,param_3,in_ECX);
        *(int *)(iVar2 + 0x34) = param_4;
        *(int *)(iVar1 + 0x8c4) = iVar2;
        param_1 = FUN_0033d7b3();
        if (-1 < param_1) {
          *(undefined4 *)(iVar1 + 8) = 1;
          *param_6 = iVar2;
          *param_5 = iVar1;
          return param_1;
        }
      }
    }
    FUN_0033bd35();
    if (iVar2 != 0) {
      if (param_4 == 0) {
        thunk_FUN_0033e986(iVar2,0x8011);
      }
      else {
        FUN_0033ea20(iVar2);
      }
    }
  }
  return param_1;
}
