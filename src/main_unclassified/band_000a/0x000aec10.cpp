/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C729FE3D5E422A19CC9DE2FD4AE3944583808953BF6062CD1917A35879488326
 * Entry: 0x000aec10, Ghidra index: 2089, label: FUN_000aec10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_000b0940(int param_1,float *param_2,float *param_3,char param_4);
extern void FUN_000b0ad0(int param_1,float *param_2,float *param_3,float param_4,float param_5);
extern void FUN_000b0550(int param_1,float *param_2,int *param_3,int *param_4);
extern void FUN_000b0f50(undefined4 param_1);

void FUN_000aec10(void)

{
  int iVar1;
  int *in_ECX;
  int unaff_ESI;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  uStack_5c = 0xaec18;
  iVar1 = (**(code **)(*in_ECX + 0x40))();
  uStack_58 = *(undefined4 *)(iVar1 + 0x28);
  fStack_54 = *(float *)(iVar1 + 0x2c);
  uStack_50 = *(undefined4 *)(iVar1 + 0x24);
  uStack_5c = 1;
  puStack_60 = &uStack_44;
  fStack_48 = fStack_54 - (*(float *)(unaff_ESI + 0x90) + *(float *)(unaff_ESI + 0x90));
  uStack_4c = uStack_58;
  FUN_000b0940(unaff_ESI,&uStack_50);
  /* x86 0x000AEC5F..0x000AEC78: FLD m32fp; FMUL m32fp; FSTP
   * m32fp at the outgoing guest stack slot. Transfer the resulting
   * IEEE-754 word, not a numeric float-to-pointer conversion.
   * x87 precision and native guest frame ABI remain unverified. */
  float guest_scaled_word = *(float *)(unaff_ESI + 0x90) * 0.08;
  uint32_t guest_scaled_bits;
  memcpy(&guest_scaled_bits, &guest_scaled_word, sizeof guest_scaled_bits);
  puStack_60 = (undefined4 *)(uintptr_t)guest_scaled_bits;
  uStack_5c = 0x40400000;
  FUN_000b0ad0();
  FUN_000b0550();
  FUN_000b0550();
  uStack_4c = 10;
  fStack_48 = 1.4013e-44;
  uStack_50 = 10;
  uStack_44 = 0xb4;
  uStack_40 = 5;
  FUN_000b0f50(&puStack_60);
  return;
}
