/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AD78E7001DEED910CDC43A50EB4A0F8864631C72216A3721ACDDD5D174187567
 * Entry: 0x0026e690, Ghidra index: 8775, label: FUN_0026e690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_23_23_IParamCurve_004050bc[];
extern char s_CLSID_004059fc[];
extern char s_points_004059f4[];
undefined4 FUN_0026e690(int param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  float10 fVar2;
  float fVar3;
  int *local_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = (int *)0x0;
  iVar1 = FUN_0026b210(s_CLSID_004059fc);
  local_14 = FUN_0026b210(s_points_004059f4);
  if (((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) &&
     ((local_14 == 0 || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + local_14 * 0x10) != -6)))) {
    FUN_00289a40();
    local_c = FUN_002383b0();
    local_8 = 0;
    local_4 = 0;
    local_10 = 0x10;
    iVar1 = FUN_00238080(s_23_23_IParamCurve_004050bc,&local_24);
    if (iVar1 == 0) {
      iVar1 = (**(code **)*local_24)
                        (local_24,s_23_23_IParamCurve_004050bc,(undefined4 *)(param_1 + 0x24));
      if (iVar1 == 0) {
        iStack_20 = 1;
        fVar3 = 1.0;
        while ((iVar1 = FUN_0026b260(fVar3), iVar1 == 0 ||
               (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6))) {
          iVar1 = FUN_0026b260(0x3f800000);
          FUN_0026b260(0x40000000);
          FUN_0026b260(0x40400000);
          fVar2 = (float10)FUN_002899f0();
          fStack_18 = (float)fVar2;
          FUN_0026b260(0x40800000);
          fVar2 = (float10)FUN_002899f0();
          fStack_1c = (float)fVar2;
          if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
            iVar1 = **(int **)(param_1 + 0x24);
            fVar2 = (float10)FUN_002899f0(fStack_18,fStack_1c);
            fVar2 = (float10)FUN_002899f0(extraout_ECX,(float)fVar2);
            (**(code **)(iVar1 + 0x18))((float)fVar2);
          }
          iStack_20 = iStack_20 + 1;
          fVar3 = (float)iStack_20;
          fStack_18 = (float)iStack_20;
          if (iStack_20 < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
        }
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 8))(local_24);
        }
        return 0;
      }
    }
  }
  if (local_24 != (int *)0x0) {
    (**(code **)(*local_24 + 8))(local_24);
  }
  return 0x80004005;
}
