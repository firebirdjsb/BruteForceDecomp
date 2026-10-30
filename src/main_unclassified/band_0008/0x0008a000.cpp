/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1AE7CAC85817495098456136B62C7588EAB02C1C078984D264175A56050929DA
 * Entry: 0x0008a000, Ghidra index: 1652, label: FUN_0008a000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000da800(void);
extern void FUN_0021c380(float param_1);

extern uint32_t DAT_0046d064;
void FUN_0008a000(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  undefined1 auStack_30 [40];
  undefined4 uStack_8;
  
  if (unaff_ESI != (int *)0x0) {
    iVar1 = (**(code **)(*unaff_ESI + 0x40))();
    FUN_0003d6c0(auStack_30,iVar1,iVar1 + 0x24);
    iVar1 = unaff_ESI[0x108];
    if ((iVar1 != 0) && (iVar1 != -1)) {
      uStack_8 = *(undefined4 *)(iVar1 + 0x3c);
    }
    if ((DAT_0046d064 != -0x40d038a) && (piVar2 = (int *)FUN_000da800(), piVar2 != (int *)0x0)) {
      *(undefined4 *)(piVar2[0x3a] + 0xc) = 0;
      (**(code **)(*piVar2 + 0x44))(auStack_30);
      FUN_0021c380(0x3f800000);
      unaff_ESI[0x1ce] = 0;
      unaff_ESI[0x1cd] = 0;
      unaff_ESI[0x1cf] = 0x40800000;
    }
  }
  return;
}
