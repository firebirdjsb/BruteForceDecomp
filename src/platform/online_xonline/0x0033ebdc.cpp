/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1E9E12CE09E9954F2BB9575E5E9B4DDF9C9A3524AAC0BC4AAF8EEFE156D455C
 * Entry: 0x0033ebdc, Ghidra index: 12625, label: FUN_0033ebdc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033ebdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char *param_5,int param_6,uint *param_7,int param_8)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  char *pcVar4;
  
  puVar2 = param_7;
  param_7 = (uint *)*param_7;
  pcVar4 = param_5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  param_6 = FUN_0033ea3b(param_1,param_2,param_3,param_4,param_6,&param_7,param_8);
  uVar3 = (uint)param_7;
  if (-1 < param_6) {
    *puVar2 = *puVar2 - (int)param_7;
    if ((uint)((int)pcVar4 - (int)(param_5 + 1)) < *puVar2) {
      XAPILIB__lstrcpynA(param_8 + (int)param_7,param_5,*puVar2);
    }
    else {
      param_6 = -0x7ff8ff86;
    }
  }
  *puVar2 = ((int)pcVar4 - (int)(param_5 + 1)) + uVar3;
  return param_6;
}
