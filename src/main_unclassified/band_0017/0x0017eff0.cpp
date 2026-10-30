/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC8464F400769CD029FEDF21C16F3F29FA19E573705CEEC6E8A8810723EF3E8F
 * Entry: 0x0017eff0, Ghidra index: 5117, label: FUN_0017eff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017eff0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int unaff_EBX;
  int *unaff_EDI;
  
  if (*(int *)(unaff_EBX + 0x2c) == 1) {
    cVar3 = (**(code **)(*unaff_EDI + 0x60))();
    if (cVar3 != '\0') {
      (**(code **)(*(int *)unaff_EDI[0x69] + 8))(0);
      *(byte *)(unaff_EDI[0x69] + 0x1c) = *(byte *)(unaff_EDI[0x69] + 0x1c) & 0xfe;
      piVar1 = (int *)unaff_EDI[0x34];
      piVar2 = (int *)*piVar1;
      if (piVar2 != piVar1) {
        while (piVar2[4] != unaff_EBX) {
          FUN_0012aba0();
          if (piVar2 == piVar1) {
            unaff_EDI[0x69] = unaff_EBX;
            return;
          }
        }
        /* LEA EAX,[ESP+8] at 0x0017F050 references the saved iterator
         * (MOV [ESP+4],EAX at 0x0017F024 before the extra PUSH). */
        FUN_0012a450(unaff_EDI + 0x33,&piVar2,piVar2);
      }
    }
    unaff_EDI[0x69] = unaff_EBX;
  }
  return;
}
