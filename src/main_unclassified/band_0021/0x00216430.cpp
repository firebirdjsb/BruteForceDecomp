/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6D60CEF03F57AAF2FFD2FEAE32A3D3D1FF1FA774450C2697FD196A2A619BA0F0
 * Entry: 0x00216430, Ghidra index: 7459, label: FUN_00216430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_00216430(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            float param_5)

{
  char cVar1;
  undefined4 *in_EAX;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EDI;
  float10 fVar2;
  
  cVar1 = FUN_00216350(*in_EAX,*param_2,*unaff_EDI,*param_3,*unaff_EBX);
  if (cVar1 == '\0') {
    cVar1 = FUN_00216350(in_EAX[1],param_2[1],unaff_EDI[1],param_3[1],unaff_EBX[1]);
    if (cVar1 == '\0') {
      cVar1 = FUN_00216350(in_EAX[2],param_2[2],unaff_EDI[2],param_3[2],unaff_EBX[2]);
      if (cVar1 == '\0') {
        fVar2 = (float10)FUN_00220120(param_4);
        if (fVar2 < (float10)(param_5 * param_5)) {
          cVar1 = FUN_00220030();
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
