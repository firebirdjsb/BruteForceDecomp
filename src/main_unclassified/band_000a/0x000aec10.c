/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C729FE3D5E422A19CC9DE2FD4AE3944583808953BF6062CD1917A35879488326
 * Entry: 0x000aec10, Ghidra index: 2089, label: FUN_000aec10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
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
  puStack_60 = (undefined4 *)(*(float *)(unaff_ESI + 0x90) * 0.08);
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
