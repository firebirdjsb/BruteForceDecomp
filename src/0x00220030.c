/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69CD96304AB5EE8FCEF5C8F33B778D7CB32050E712DA14F1B7DD87C9D9F4F9F7
 * Entry: 0x00220030, Ghidra index: 7559, label: FUN_00220030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00220030(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  float *in_ECX;
  float *unaff_ESI;
  float fVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  
  fVar1 = *in_ECX * in_EAX[1] - in_ECX[1] * *in_EAX;
  fVar2 = in_ECX[2] * *in_EAX - in_EAX[2] * *in_ECX;
  fVar3 = in_ECX[1] * in_EAX[2] - in_ECX[2] * in_EAX[1];
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar4 < 4e-06) {
    return CONCAT22((short)((uint)fVar2 >> 0x10),
                    (ushort)(fVar4 < 4e-06) << 8 | (ushort)isnan(fVar4) << 10 |
                    (ushort)(fVar4 == 4e-06) << 0xe);
  }
  auVar5 = rsqrtss(in_XMM0,fVar4);
  fVar4 = auVar5._0_4_;
  *unaff_ESI = fVar4 * fVar3;
  unaff_ESI[2] = fVar4 * fVar1;
  unaff_ESI[1] = fVar4 * fVar2;
  return CONCAT31((int3)((uint)(fVar4 * fVar1) >> 8),1);
}
