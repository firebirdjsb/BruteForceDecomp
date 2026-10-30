/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E66282F390F814317095668CB9C6A201142A8FC6462B0FDC712899AE87D2A1CB
 * Entry: 0x00032060, Ghidra index: 323, label: FUN_00032060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_000594a0(int param_1,undefined4 *param_2,int param_3);
extern undefined4 FUN_00055aa0(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0011dfa0(void);
extern char FUN_000416a0(int param_1,uint param_2);
extern undefined4 FUN_00025730(int param_1,undefined4 param_2,int param_3);

undefined4 FUN_00032060(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar2 = FUN_000594a0(*(undefined4 *)(unaff_EDI + 0x1ec));
  if (iVar2 != 0) {
    iVar3 = FUN_00055aa0();
    if (((*(byte *)(iVar3 + 0x88) & 4) == 0) || ((*(byte *)(iVar2 + 0x28) & 1) == 0)) {
      FUN_000120f0();
      FUN_0011dfa0();
      cVar1 = FUN_000416a0(unaff_EDI + 0x930,1);
      if (cVar1 != '\0') {
        FUN_00025730(unaff_EDI + 0x930,1,0);
      }
      return 1;
    }
  }
  return 0;
}
