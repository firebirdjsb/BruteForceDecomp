/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD9C7AD9BE2653224CC7E9FAD7BF528A52BDFCCA6798951193B1D71EEFFB6A2D
 * Entry: 0x00116340, Ghidra index: 3584, label: FUN_00116340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00116340(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float unaff_EDI;
  float10 fVar3;
  float fVar4;
  /* XBE entry S: SUB ESP,0x54 then PUSH ESI/EDI:
   * first virtual +0xAC receives S-0x50 output,
   * second virtual +0xAC receives S-0x54 output, which
   * overlaps S-0x50 and initial f32 at S-0x4C.
   * Keep the three adjacent words in ONE object, not an
   * unrelated Ghidra &stack0xffffffa4 alias. The second
   * virtual call's other output is S-0x30, 8 bytes into
   * auStack_38. Guest x86 COM ABI remains ABI_UNVERIFIED. */
  struct {
    uint32_t word_at_minus_54;
    uint32_t word_at_minus_50;
    float float_at_minus_4c;
  } guest_output_triplet;
  _Static_assert(sizeof(guest_output_triplet)==12,
                 "original three adjacent guest output words");
  float fStack_44;
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [4];
  float fStack_20;
  int *piStack_4;
  
  fVar3 = (float10)1.0;
  iVar1 = *(int *)(param_2 + 0x8c);
  guest_output_triplet.float_at_minus_4c = (float)fVar3;
  if (((*(int *)(iVar1 + 0x54) == 1) && (piVar2 = *(int **)(iVar1 + 0x148), piVar2 != (int *)0x0))
     && (*(int *)(piVar2[3] + 4) == 3)) {
    (**(code **)(*(int *)(iVar1 + 0x48) + 0xc))();
    (**(code **)(*param_1 + 0xac))(auStack_24,&guest_output_triplet.word_at_minus_50);
    (**(code **)(*piStack_4 + 0x40))();
    FUN_00039510();
    (**(code **)(*piVar2 + 0xac))(auStack_38 + 8,&guest_output_triplet);
    (**(code **)(*piVar2 + 0x40))();
    FUN_00039510();
    (**(code **)(*(int *)(iVar1 + 0x48) + 0x14))();
    FUN_000621c0();
    if ((fStack_44 < 0.0) && (FUN_000621c0(), fStack_44 < fStack_20)) {
      fVar4 = ABS(fStack_20 / fStack_44);
      if (ABS(fStack_20 / fStack_44) <= 0.0) {
        fVar4 = 0.0;
      }
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      return (float10)fVar4;
    }
    fVar3 = (float10)unaff_EDI;
  }
  return fVar3;
}
