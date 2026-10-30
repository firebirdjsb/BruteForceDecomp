/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E16848FEE5B096863AB705DC4A557440AFFBA6B84E56FE6B4AFE85F03FB4E45
 * Entry: 0x00042620, Ghidra index: 507, label: FUN_00042620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_00049c60(void);
extern undefined4 FUN_00055aa0(void);

uint FUN_00042620(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  
  uVar3 = *(uint *)(unaff_ESI + 0x3c4);
  if ((uVar3 & 0x100) == 0) {
    iVar2 = FUN_00049c60();
    uVar3 = 0;
    if (iVar2 != 0) {
      if ((*(uint *)(iVar2 + 0x80) >> 3 & 1) == 0) {
        fVar1 = *(float *)(iVar2 + 0x18);
        uVar3 = CONCAT22((ushort)(*(uint *)(iVar2 + 0x80) >> 0x13),
                         (ushort)(fVar1 < param_1) << 8 | (ushort)(isnan(fVar1) || isnan(param_1)) << 10
                         | (ushort)(fVar1 == param_1) << 0xe);
        if (fVar1 >= param_1) goto LAB_000426a3;
      }
      uVar3 = FUN_00024540(unaff_ESI,0xe,2,*(undefined4 *)(iVar2 + 4),0,param_2,0);
      if (uVar3 == 1) {
        iVar2 = FUN_00055aa0();
        *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 2;
        *(float *)(unaff_ESI + 0x94c) = -(param_2 + 5.0);
        return CONCAT31((int3)((uint)(iVar2 + 0x88) >> 8),1);
      }
    }
  }
LAB_000426a3:
  return uVar3 & 0xffffff00;
}
