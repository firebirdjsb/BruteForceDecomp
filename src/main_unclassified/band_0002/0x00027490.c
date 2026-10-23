/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 046191D73265E5050B743C7B2303C56EDD1B8F986D3E61C2226484C79AA78F75
 * Entry: 0x00027490, Ghidra index: 271, label: FUN_00027490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00027490(void)

{
  float *in_EAX;
  float *in_ECX;
  float *unaff_ESI;
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = in_EAX[2];
  local_8 = in_EAX[1];
  local_c = *in_EAX;
  if (0.0 < in_ECX[1]) {
    auVar1 = rsqrtss(in_XMM0,local_c * local_c + local_4 * local_4);
    local_c = auVar1._0_4_ * local_c;
    local_4 = auVar1._0_4_ * local_4;
    local_8 = -((local_c * *in_ECX + local_4 * in_ECX[2]) / in_ECX[1]);
    FUN_00039410();
  }
  *unaff_ESI = local_c;
  unaff_ESI[1] = local_8;
  unaff_ESI[2] = local_4;
  return;
}
