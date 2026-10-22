/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39919AD31259B7C668FC47FF28AF6457FAD139C3541920D3ED80E4E24F7D149C
 * Entry: 0x002ec9eb, Ghidra index: 10665, label: FUN_002ec9eb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fa0;
float10 FUN_002ec9eb(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_002ec6bb(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_002ec417();
  }
  iVar1 = __errcode(param_1);
  if ((DAT_004a8fa0 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)__umatherr(iVar1,param_2,param_3,0,param_4,param_5);
  }
  else {
    __set_errno(iVar1);
    __ctrlfp();
    fVar2 = (float10)param_4;
  }
  return fVar2;
}
