/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D48F98CF94C27BE699B0002C1C9B602AF388EED99E86CFB0749A67A30AA108E8
 * Entry: 0x000e7780, Ghidra index: 2872, label: FUN_000e7780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_float_lane.h"
/* XBE 0x000E7784 saves the caller's first stack argument as a vector pointer.
 * The stack slot is later reused as m32fp: x87 fcom 0x000E781E and
 * fsub 0x000E7839. Hidden EAX/EBX and helper ABI remain unverified. */
void FUN_000e7780(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  int unaff_EBX;
  float local_c;
  float local_8;
  float local_4;
  uint32_t threshold_bits;
  float threshold;
  
  pfVar2 = param_1;
  cVar3 = FUN_00022bc0(&param_1);
  if (cVar3 == '\0') {
    param_1 = (float *)0x0;
    iVar4 = (**(code **)(*in_EAX + 0x40))();
    local_c = *(float *)(iVar4 + 0x24);
    local_8 = *(float *)(iVar4 + 0x28);
    local_4 = *(float *)(iVar4 + 0x2c);
  }
  fVar1 = ABS((local_c - *pfVar2) * *(float *)(unaff_EBX + 0x20) +
              (local_8 - pfVar2[1]) * *(float *)(unaff_EBX + 0x24) +
              (local_4 - pfVar2[2]) * *(float *)(unaff_EBX + 0x28));
  *param_2 = fVar1;
  /* Original x86 reinterprets the LOW 32 bits of the first caller stack
   * word as f32. A host pointer's numeric float value is not that word. */
  memcpy(&threshold_bits, &param_1, sizeof threshold_bits);
  threshold = bf_x86_word_to_f32(threshold_bits);
  /* fcom + test ah,5 + jp: unordered follows the subtract branch. */
  if (!(fVar1 < threshold)) {
    *param_3 = (fVar1 - threshold) + 1.1920929e-07;
    return;
  }
  *param_3 = 1.1920929e-07;
  return;
}
