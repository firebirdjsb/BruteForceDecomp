/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6905082804593A989CE72BC20F54B4108F50643DD194DC9C934422D5B6422F4
 * Entry: 0x0034b3c4, Ghidra index: 12945, label: FUN_0034b3c4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034b3c4(undefined4 param_1,int param_2,undefined4 param_3,short *param_4,uint param_5)

{
  short sVar1;
  int iVar2;
  short sVar3;
  
  if (param_5 < 4) {
    return;
  }
  iVar2 = FUN_0034c4da(param_4,param_5);
  if (iVar2 == 0) {
    return;
  }
  sVar1 = *param_4;
  if ((sVar1 == 0x5800) || (sVar1 == 0x5801)) {
    FUN_0034aa10(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  sVar3 = (short)param_3;
  if (((sVar1 == 0x5803) && (param_2 != 0)) && (sVar3 != 0)) {
    FUN_0034af15(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if (((sVar1 == 0x5804) && (param_2 == 0)) && (sVar3 == 0)) {
LAB_0034b449:
    FUN_0034a218(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    if (sVar1 == 0x5805) {
      if (param_2 == 0) {
        return;
      }
      if (sVar3 != 0) goto LAB_0034b449;
    }
    if ((param_2 != 0) && (sVar3 != 0)) {
      if (sVar1 == 0x5806) {
        FUN_0034eecd(param_1,param_2,param_3,param_4,param_5);
      }
      else if (sVar1 == 0x5807) {
        FUN_0034f6f1(param_1,param_2,param_3,param_4,param_5);
      }
    }
  }
  return;
}
