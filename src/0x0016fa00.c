/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4922BEB2D629295704DB8CD2BA8B3073473785F8E6E6F733DA8D5E9353D39664
 * Entry: 0x0016fa00, Ghidra index: 4834, label: FUN_0016fa00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0016fa00(void)

{
  float10 fVar1;
  float *in_EAX;
  undefined2 extraout_var;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  float10 fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 local_24 [32];
  
  unaff_ESI[1] = (in_ECX[3] * *in_EAX * in_EDX[2] +
                 *in_ECX * in_EDX[3] * in_EAX[2] +
                 ((*in_EDX * in_ECX[2] * in_EAX[3] - in_ECX[3] * *in_EDX * in_EAX[2]) -
                 *in_ECX * in_EAX[3] * in_EDX[2])) - in_ECX[2] * *in_EAX * in_EDX[3];
  unaff_ESI[2] = in_ECX[1] * *in_EAX * in_EDX[3] +
                 (((in_EDX[1] * *in_ECX * in_EAX[3] +
                   (in_EAX[1] * in_ECX[3] - in_ECX[1] * in_EAX[3]) * *in_EDX) -
                  in_EAX[1] * *in_ECX * in_EDX[3]) - in_EDX[1] * in_ECX[3] * *in_EAX);
  unaff_ESI[3] = (in_EAX[1] * *in_ECX * in_EDX[2] +
                 in_EDX[1] * in_ECX[2] * *in_EAX +
                 ((*in_EDX * in_ECX[1] * in_EAX[2] - in_EAX[1] * *in_EDX * in_ECX[2]) -
                 in_EDX[1] * *in_ECX * in_EAX[2])) - in_ECX[1] * *in_EAX * in_EDX[2];
  *unaff_ESI = in_EAX[1] * in_ECX[2] * in_EDX[3] +
               (((in_EDX[1] * in_ECX[3] * in_EAX[2] +
                 (in_ECX[1] * in_EAX[3] * in_EDX[2] - in_EDX[1] * in_ECX[2] * in_EAX[3])) -
                in_ECX[1] * in_EDX[3] * in_EAX[2]) - in_EAX[1] * in_ECX[3] * in_EDX[2]);
  fVar2 = (float10)FUN_001716a0();
  fVar1 = (float10)1e-05;
  if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
    auVar4 = rcpss(ZEXT416((uint)(float)fVar2),ZEXT416((uint)(float)fVar2));
    fVar3 = auVar4._0_4_;
    *unaff_ESI = *unaff_ESI * fVar3;
    unaff_ESI[1] = unaff_ESI[1] * fVar3;
    unaff_ESI[2] = unaff_ESI[2] * fVar3;
    unaff_ESI[3] = unaff_ESI[3] * fVar3;
    return CONCAT31((int3)((uint)local_24 >> 8),1);
  }
  return CONCAT22(extraout_var,
                  (ushort)(fVar2 < fVar1) << 8 | (ushort)(isnan(fVar2) || isnan(fVar1)) << 10 |
                  (ushort)(fVar2 == fVar1) << 0xe);
}
