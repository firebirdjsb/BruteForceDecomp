/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60E1F14FAAECC9A839CD75D7A3DDE838D215CB519421893B5BD09D15AD00316E
 * Entry: 0x002ba260, Ghidra index: 9881, label: FUN_002ba260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002ba260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float *param_6)

{
  byte *in_EAX;
  undefined4 in_EDX;
  byte *unaff_ESI;
  float local_20;
  float local_1c;
  float fStack_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float fStack_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_4 = 0;
  if ((*in_EAX & 0xc) == 0) {
    FUN_002ba160(in_EAX,param_1,param_3,in_EDX,&local_20);
  }
  else {
    fStack_18 = 0.0;
    local_1c = 0.0;
    local_20 = 0.0;
  }
  if ((*unaff_ESI & 0xc) == 0) {
    FUN_002ba160(unaff_ESI,param_2,param_4,param_5,&local_10);
  }
  else {
    fStack_8 = 0.0;
    local_c = 0.0;
    local_10 = 0.0;
  }
  *param_6 = local_20 - local_10;
  *(ulonglong *)(param_6 + 1) = CONCAT44(fStack_18 - fStack_8,local_1c - local_c);
  return;
}
