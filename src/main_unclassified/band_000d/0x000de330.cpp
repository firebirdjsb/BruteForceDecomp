/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C3C24158701900E588D18592F83867979DBDD90AD4BF593B051AD262F8C0CA8
 * Entry: 0x000de330, Ghidra index: 2711, label: FUN_000de330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000de330(float param_1)

{
  float fVar1;
  float fVar2;
  float *in_EAX;
  uint uVar3;
  int iVar4;
  float *in_ECX;
  undefined4 in_EDX;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_24 = *in_EAX - *in_ECX;
  local_20 = in_EAX[1] - in_ECX[1];
  fVar2 = in_EAX[2] - in_ECX[2];
  fVar1 = SQRT(local_24 * local_24 + local_20 * local_20 + fVar2 * fVar2);
  uVar3 = (uint)(ushort)((ushort)(fVar1 < 1e-05) << 8 | (ushort)isnan(fVar1) << 10 |
                        (ushort)(fVar1 == 1e-05) << 0xe);
  if (fVar1 < 1e-05 == 0 && (fVar1 == 1e-05) == 0) {
    local_1c = 1.0 / fVar1;
    local_24 = local_1c * local_24;
    local_20 = local_20 * local_1c;
    local_1c = local_1c * fVar2;
    iVar4 = FUN_000ddd10(param_1,&param_1,local_c,local_18,in_ECX,&local_24,in_EDX,fVar1,1);
    uVar3 = 0;
    if ((iVar4 != 0) &&
       (uVar3 = (uint)(ushort)((ushort)(param_1 < fVar1) << 8 |
                               (ushort)(isnan(param_1) || isnan(fVar1)) << 10 |
                              (ushort)(param_1 == fVar1) << 0xe), param_1 < fVar1)) {
      return uVar3;
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}
