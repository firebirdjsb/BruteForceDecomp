/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A5CD612AAD2B233F089433F87DACD0B426B5CC299CF364468A55759810C027D
 * Entry: 0x0023d1a0, Ghidra index: 7952, label: FUN_0023d1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0023d1a0(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  float10 fVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  local_8 = *(float *)(in_EAX + 0x20);
  fVar1 = (float10)fpatan((float10)*(float *)(in_EAX + 8),(float10)local_8);
  local_18 = 0x3f800000;
  local_14 = 0;
  local_1c = 0;
  FUN_0001fc70(&local_10,&local_1c,(float)(fVar1 * (float10)57.295776));
  *unaff_ESI = local_10;
  unaff_ESI[3] = local_4;
  unaff_ESI[1] = local_c;
  unaff_ESI[2] = local_8;
  return;
}
