/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC0FD9FF0BAD2082539C70EAB1DE1BF1E542DA924D95FF487B88E2D8A440BBF6
 * Entry: 0x000ba3b0, Ghidra index: 2255, label: FUN_000ba3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000ba320(void);
extern void FUN_000ba350(int param_1,int param_2);
extern float10 FUN_002ea51b(double param_1);

uint FUN_000ba3b0(void)

{
  float10 fVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint uVar3;
  undefined4 unaff_EDI;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = FUN_000ba320();
  if (iVar2 == 0) {
    return 1;
  }
  fVar4 = (float10)FUN_000ba350(in_EAX,unaff_EDI);
  fVar4 = fVar4 + fVar4;
  fVar1 = (float10)0.0;
  uVar3 = CONCAT22(extraout_var,
                   (ushort)(fVar4 < fVar1) << 8 | (ushort)(isnan(fVar4) || isnan(fVar1)) << 10 |
                   (ushort)(fVar4 == fVar1) << 0xe);
  if (fVar4 != fVar1) {
    fVar5 = (float10)FUN_002ea51b((double)(float)fVar4);
    fVar5 = (float10)(float)fVar4 - fVar5;
    fVar1 = (float10)0.5;
    uVar3 = CONCAT31((int3)(CONCAT22(extraout_var_00,
                                     (ushort)(fVar5 < fVar1) << 8 |
                                     (ushort)(isnan(fVar5) || isnan(fVar1)) << 10 |
                                     (ushort)(fVar5 == fVar1) << 0xe) >> 8),1);
    if ((uVar3 & 0x4100) == 0) {
      return uVar3;
    }
  }
  return uVar3 & 0xffffff00;
}
