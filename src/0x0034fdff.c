/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06B2E214B4538FF3BF2FEC4FBF54A57E8346E6B37E18CB2B66129CBF45B00884
 * Entry: 0x0034fdff, Ghidra index: 13042, label: FUN_0034fdff
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034fdff(char *param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  pcVar1 = param_1;
  for (; ((1 < uVar3 && (param_4 != 0)) && (*param_3 != '\0')); param_3 = param_3 + 1) {
    *pcVar1 = *param_3;
    pcVar1 = pcVar1 + 1;
    uVar3 = uVar3 - 1;
    param_4 = param_4 + -1;
  }
  *pcVar1 = '\0';
  if ((param_4 == 0) || (*param_3 == '\0')) {
    uVar2 = 1;
  }
  else {
    for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1 = param_1 + 4;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *param_1 = '\0';
      param_1 = param_1 + 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}
